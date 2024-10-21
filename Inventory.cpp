#include "inventory.h"

void Inventory::addItem(const std::string& nom, int poids) {
    items.push_back(Item(nom, poids));
}

void Inventory::deleteItem(const std::string& nom) {
    for (size_t i = 0; i < items.size(); i++) {
        if (items[i].nom == nom) {
            items.erase(items.begin() + i);
            return; 
        }
    }
}

void Inventory::sortByName() {
    std::sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.nom < b.nom;
        });
}

void Inventory::sortByWeight() {
    std::sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.poids < b.poids;
        });
}

void Inventory::print() const {
    int totalWeight = 0;
    for (const Item& item : items) {
        std::cout << item.nom << " Weight: " << item.poids << std::endl;
        totalWeight += item.poids;
    }
    std::cout << "Total Weight: " << totalWeight << std::endl;
}
