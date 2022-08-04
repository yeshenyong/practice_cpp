#pragma once

#include <unordered_map>
#include <vector>
#include <memory>

//  Pointer to impl ementation

class CookImpl;
class Cook;
typedef std::shared_ptr<Cook> CookPtr;
typedef std::shared_ptr<CookImpl> CookImplPtr;

// 后厨
class Cook {

public:
    Cook(int, const std::vector<std::string>&);
    ~Cook();
    std::vector<std::string> getMenu();     /* 获取菜单 */
    uint32_t getChefNum();                  /* 获取厨师数量 */

private:
    CookImplPtr impl_;
};

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
    impl_.reset(new CookImpl(chef_num, menu));
}

Cook::~Cook() {
    
}

std::vector<std::string> Cook::getMenu() {
    return impl_->getMenu();
}

uint32_t Cook::getChefNum() {
    return impl_->getChefNum();
}

