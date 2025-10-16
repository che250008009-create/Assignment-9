#include <iostream>
using namespace std;


struct Item {
    int id;
    float cost;
};

int main() {
    
    Item items[6];

    
    items[0] = {101, 45.50};
    items[1] = {102, 75.25};
    items[2] = {103, 120.00};
    items[3] = {104, 35.00};

    
    items[4] = {};
    items[5] = {};

    cout << "Items with cost greater than 50.00:\n";

    
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id
                 << " | Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
