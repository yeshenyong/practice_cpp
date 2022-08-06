#include "cook_cuisine.h"

class CookImpl {
public:
    CookImpl(uint32_t checf_num, const std::vector<std::string>& menu):checf_num_(checf_num), menu_(menu) {}
    std::vector<std::string> getMenu();
    uint32_t getChefNum();

private:
    uint32_t checf_num_;
    std::vector<std::string> menu_;
};

std::vector<std::string> CookImpl::getMenu() {
    return menu_;
}

uint32_t CookImpl::getChefNum() {
    return checf_num_;
}

Cook::Cook(int chef_num, const std::vector<std::string>& menu) {
    impl_ = new CookImpl(chef_num, menu);
}

Cook::~Cook() {
    delete impl_;
}

std::vector<std::string> Cook::getMenu() {
    return impl_->getMenu();
}

uint32_t Cook::getChefNum() {
    return impl_->getChefNum();
}
