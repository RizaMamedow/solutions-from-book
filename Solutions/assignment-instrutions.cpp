//
//  easy-solutions.cpp
//  solutions-from-book
//
//  Created by Riza Mamedov on 20.06.2024.
//

#include <stdio.h>
#include <cmath>
#define _USE_MATH_DEFINES


// This file contains solutions to problems from the book section of the same name. these tasks are not so difficult because this is the first section of the book, I will write the instructions here and check them in main.cpp.

/// # Solution 9.
/// This 9th task I didn’t know what to call the function for it, maybe I did it wrong. Here's a description of the problem: Write a statement that assigns the variable x the value -1.5.
void setSomeValue() {
    float x = -1.5;
    /// That all. xD
}


/// # Solution 19
///  I immediately went to task 19 because the current section is called “Assignment Instructions” and many of the tasks are boring and of the same type, but for beginners in programming it’s just right, but I skipped them. Here are the descriptions of the problem: Write down the formula for calculating the area of ​​a triangle as an assignment statement: s = 1/2 * a * h where a - is the length of the base; x - is the height of the triangle.
void computeTriangleSquare() {
    // in centimeter
    double a = 5.4;
    double h = 7.1;
    
    // PROBLEMS: I Thought for a long time how to write correctly, it always returned 0; the problem was that 1/2=0 because 1 and 2 are an integer type value and if you divide 1.0 and 2.0 it is already a floating point type
    double s = 1.0/2.0*a*h; // s = 19.17
}


/// # Solution 21
/// Task: write down the formula for calculating the area of ​​a circle as an assignment statement: s = π * r²
void computeCircleSquare() {
    int r = 5;
    // M_PI is the π constant; M_PI = 3.14159265358979323846 and our calculations will be accurate
    // "pow" is the power
    double s = M_PI * pow(r, 2); // 78.5398
}


/// # Solution 35
/// Task: declare the necessary variables and write in the form of an assignment statement the formula for calculating the cost of a purchase consisting of tomatoes, cucumbers and several bunches of dill
void computeCostOfPurchase() {
    float tomatoesPrice = 0.2; // usd
    int tomatoesQuantity = 4;
    
    float cucumbersPrice = 0.3; // usd
    int cucumbersQuantity = 2;
    
    float dillPrice = 0.9; // usd
    int dillQuantity = 2;
    
    int totalCost = (tomatoesPrice * tomatoesQuantity) + (cucumbersPrice * cucumbersQuantity) + (dillPrice * dillQuantity); // totalCost = 9
}


// let's finish the boring section, I won't continue
