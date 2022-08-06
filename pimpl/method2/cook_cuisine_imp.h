#pragma once

#include <vector>
#include <unordered_map>
#include <memory>


class CookImpl {
public:
    CookImpl(uint32_t checf_num, const std::vector<std::string>& menu):checf_num_(checf_num), menu_(menu) {}
    std::vector<std::string> getMenu();
    uint32_t getChefNum();

private:
    uint32_t checf_num_;
    std::vector<std::string> menu_;
};
typedef std::shared_ptr<CookImpl> CookImplPtr;
