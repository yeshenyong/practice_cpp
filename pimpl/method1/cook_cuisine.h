#pragma once

#include <unordered_map>
#include <vector>
#include <memory>

//  Pointer to impl ementation

class CookImpl;

// 后厨
class Cook {

public:
    Cook(int, const std::vector<std::string>&);
    ~Cook();
    std::vector<std::string> getMenu();     /* 获取菜单 */
    uint32_t getChefNum();                  /* 获取厨师数量 */

private:
    CookImpl* impl_;
};
typedef std::shared_ptr<Cook> CookPtr;


