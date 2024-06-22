//
//  output.cpp
//  solutions-from-book
//
//  Created by Riza Mamedov on 22.06.2024.
//

#include "solutions.hpp"
#include <stdio.h>


// section of book name is "linear structured programs" the same name has a current file

/*
    # Solution 51
    Task: Write a program for calculating the area of the parallelogram.
    Below is the recommended type of screen during the execution of the program
*/
void computeParallelogramSquare() {
    float length;
    float width;

    printf("Set length (cm) -> ");
    scanf("%f", &length);

    printf("Set width (cm) -> ");
    scanf("%f", &width);
    
    float square = length * width;

    printf("Square of parallelogram is %f", square);
}
