//
//  main.cpp
//  solutions-from-book
//
//  Created by Riza Mamedov on 20.06.2024.
//

#include <iostream>

using namespace std;
int main() {
    float tomatoesPrice = 0.2; // usd
    int tomatoesQuantity = 4;
    
    float cucumbersPrice = 0.3; // usd
    int cucumbersQuantity = 2;
    
    float dillPrice = 0.9; // usd
    int dillQuantity = 2;
    
    int totalCost = (tomatoesPrice * tomatoesQuantity) + (cucumbersPrice * cucumbersQuantity) + (dillPrice * dillQuantity);
    cout << totalCost << endl;
}
