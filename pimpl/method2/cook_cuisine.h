#pragma once

#include <unordered_map>
#include <vector>
#include <memory>

#include "cook_cuisine_imp.h"

// ���
class Cook {

public:
    Cook(int, const std::vector<std::string>&);
    ~Cook();
    std::vector<std::string> getMenu();     /* ��ȡ�˵� */
    uint32_t getChefNum();                  /* ��ȡ��ʦ���� */

private:
    CookImplPtr impl_;
};
typedef std::shared_ptr<Cook> CookPtr;
