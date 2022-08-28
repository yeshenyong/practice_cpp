#include <cassert>
#include <typeindex>
#include <typeinfo>
namespace selfboost {
class any {
    public:
        any() : content(nullptr) {}
        // ģ�幹��
        template <typename _Tp>
        any(const _Tp& value) : content(new holder<_Tp>(value)) {}
        // ��������
        any(const any& other) : content(other.content ? other.content->clone() : nullptr) {}
        // �ƶ�����
        any(any&& other) noexcept : content(other.content) { other.content = nullptr; }
        ~any() {
            if (!content) delete content;
        }

        // �п�
        bool isNull() const  { return content == nullptr; }
        const std::type_info& type() const { return content == nullptr ? typeid(void) : content->type(); }


        any& swap(any& rhs) noexcept {
            placeholder* tmp = content;
            content = rhs.content;
            rhs.content = tmp;
            return *this;
        }

        template <typename _Tp>
        _Tp *get() { return content == nullptr ? nullptr : content->type() == typeid(_Tp) ? &static_cast<any::holder<_Tp> *>(content)->hold : nullptr; }

        template <typename _Tp>
        any& operator=(const _Tp& rhs) {
            any(rhs).swap(*this);
            return *this;
        }

        // ����ת��
        template <typename _Tp>
        any& operator=(_Tp&& rhs) {
            any(static_cast<_Tp&&>(rhs)).swap(*this);
            return *this;
        }

        any & operator=(any rhs) {
            rhs.swap(*this);
            return *this;
        }
    public:
        bool empty() const noexcept {
            return !content;
        }

        void clear() noexcept {
            any().swap(*this);
        }
    private:
        // �������ݽӿ�
        class placeholder {
            public:
                virtual ~placeholder() {}
                // ��ѯ����
                virtual const std::type_info& type() const noexcept = 0;
                // ʵ�ָ���
                virtual placeholder* clone(void) = 0;          
        };
        template <typename _Tp>
        class holder final : public placeholder {
            public:
                holder(const _Tp& value) : hold(value) {}
                ~holder() {}
                const std::type_info& type() const noexcept override { return typeid(_Tp); }
                placeholder* clone() override {
                    return new holder(hold);
                }
                holder &operator=(const holder&) = delete;
            public:
                _Tp hold;
        };
        // ���ݱ���
        placeholder* content;
        // ��������ת��
        template< typename _Tp>
        friend _Tp *any_cast(const any& rhs);
};
template <typename _Tp>
_Tp* any_cast(const any& rhs) {
    assert(rhs.type() == typeid(_Tp));
    return &(static_cast<any::holder<_Tp>*>(rhs.content)->hold);
}

} // namespace selfboost