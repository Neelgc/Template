#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    int poids;
    std::string nom;

    Item(const std::string& _nom, int _poids);
};

#endif
