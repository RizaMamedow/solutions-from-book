//
//  output.cpp
//  solutions-from-book
//
//  Created by Riza Mamedov on 21.06.2024.
//

#include "solutions.hpp"
#include <stdio.h>


// section of book name is "Output" the same name has a current file

// # Solution 36
// Task: write a program that displays your first and last name
std::string getFullName(
    std::string firstName,
    std::string lastName
) { 
    // And here is the task of concatenation
    return firstName + " " + lastName;
}

// # Solution 39
// Task: Write instructions for output of the values of variables 
// a, b and C with five digits of a whole part and three - fractional, in the form:
// a = {value}
// b = {value}
// c = {value}
void outputSomething() {
    // Here in the books the task of interpolation is not so difficult
    double a = 51234.212;
    double b = 32136.989;
    double c = 12578.901;

    printf("\na = %f\n b = %f\n c = %f\n", a, b, c); 
}

// Rather, That all because in the section very boring tasks they are the same and solving them not to bring me the necessary knowledge
// I will try to solve problems more difficult