//
// Created by lucas on 12/1/20.
//
#include <iostream>
#pragma once

class Item {

private :
    int* itemNumber{};
    std::string itemName{};
    int* onHand{};
    static int numberOfItems;

public:
    void setItemNumber (int input);
    void setItemName (std::string input);
    void setOnHand (int input);

    std::string getItemName ();
    int getItemNumber();
    int getOnHand();

    void add(int amount);
    void subtract(int amount);
    void static displayNumberOfItems();

    Item ();
    Item (int itemNumber, std::string name, int onHand);
    Item (const Item &source);
    Item(Item &&source) noexcept ;
    ~Item();


};