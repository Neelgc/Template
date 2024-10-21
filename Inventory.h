#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H
#include "Item.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>



class Inventory {
public:
    std::vector<Item> items;

    void addItem(const std::string& nom, int poids);
    void deleteItem(const std::string& nom);
    void sortByName();
    void sortByWeight();
    void print() const;
};

#endif 

