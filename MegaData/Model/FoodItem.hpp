//
//  FoodItem.hpp

//  MegaData
//
//  Created by Carter, Jackson on 3/13/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef FoodItem_hpp
#define FoodItem_hpp

#include "FoodItem.hpp"
#include <string>

using namespace std;

class FoodItem
{
private:
    int calories;
    string foodName;
    double cost;
    bool delicious;
public:
    FoodItem();
    FoodItem(string name);
    
    int getCalories();
    double getCost();
    string getFoodName();
    bool isDelicious();
    
    void setCalories(int calories);
    void setFoodName(string name);
    void setCost(double cost);
    void setDelicious(bool delicious);
};

#endif /* FoodItem_hpp */
