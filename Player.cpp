//
// Created by lucas on 12/1/20.
//
#include "Player.h"

#include <utility>

//*** CONSTRUCTORS ***//
Item::Item()
    : itemName("N/A"), itemNumber(nullptr){
        printf("Default Constructor\n");
        numberOfItems ++;
}
Item::Item(int itemNumber, std::string name, int amountOnHand)
    : itemNumber(&itemNumber), itemName(std::move(name)), onHand(&amountOnHand) {
        printf("Full Constructor\n");
        numberOfItems ++;
}
Item::Item(const Item &source)
    : itemNumber(source.itemNumber), itemName(source.itemName), onHand(source.onHand) {
    printf("Copy Constructor\n");
    numberOfItems ++;
}
Item::Item(Item &&source) noexcept
    : itemNumber(source.itemNumber), itemName(source.itemName), onHand(source.onHand) {
      source.itemName = nullptr;
      source.itemNumber = nullptr;
      source.onHand = nullptr;
      std::cout << "MOVE CONSTRUCTOR\n";
}


//*** DESTRUCTOR ***//
Item::~Item() {
    printf("DESTRUCTOR\n");
    numberOfItems--;
}

//*** MEMBER FUNCTIONS ***//
//SETTERS//
void Item::setItemNumber (int input) {
    itemNumber = &input;
}
void Item::setItemName (std::string input) {
    itemName = std::move(input);
}
void Item::setOnHand(int input) {
    onHand = &input;
}
//GETTERS//
std::string Item::getItemName () {
    return itemName;
}
int Item::getItemNumber () {
    return *itemNumber;
}
int Item::getOnHand () {
    return *onHand;
}
//OTHERS//
void Item::add(int amount) {
    onHand += amount;
}
void Item::subtract(int amount) {
    onHand -= amount;
}
int Item::numberOfItems = 0;
void Item::displayNumberOfItems() {
    std::cout << "There are " << numberOfItems << " items.\n";
}
