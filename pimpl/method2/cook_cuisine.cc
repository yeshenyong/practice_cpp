#include "cook_cuisine.h"

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