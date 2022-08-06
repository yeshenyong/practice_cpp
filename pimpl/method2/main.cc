#include "cook_cuisine.h"
#include <iostream>


using namespace std;    // Testing, 平时开发可千万别用这句

int main() {
    int checf_num = 10;
    const std::vector<std::string> menus = { "Chicken", "Beef", "Noodle", "Milk" };
    CookPtr cook(new Cook(checf_num, menus));

    auto cook_menu = cook->getMenu();
    auto cook_checf_num = cook->getChefNum();

    cout << "======================Chinese Cook======================\n";

    cout << "============Checf: " << cook_checf_num << " people\n";

    cout << "==========Menu\n";

    for (size_t i = 0; i < cook_menu.size(); i++) {
        cout << "============" << i + 1 << " : " << cook_menu[i] << "\n";
    }

    return 0;
}

