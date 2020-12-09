#include <iostream>
#include "Player.h"
#include <vector>



int main() {

    Item cup(0003, "Cup", 65);
Item::displayNumberOfItems();
    Item* couch(new Item);
Item::displayNumberOfItems();
 couch->setItemName("Couch");
 couch->setOnHand(25);
 couch->setItemNumber(0002);

    std::cout << cup.getItemName() <<"\n";
    std::cout << couch->getItemName() << "\n";

    int x;
    int& lRef = x;
    int&& rRef = 250;
    std::vector<Item> vec;



delete couch;
Item::displayNumberOfItems();
    return 0;
}
