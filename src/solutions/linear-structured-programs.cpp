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

    printf("Square of parallelogram is %f (cm)\n", square);
}


/*
    # Solution 52
    Task: Write a program for calculating the volume of parallelepiped.
    Below is the recommended type of screen during the execution of the program
*/
void computeParallelepipedSquare() {
    float length;
    float width;
    float height;

    printf("Set length (cm) -> ");
    scanf("%f", &length);

    printf("Set width (cm) -> ");
    scanf("%f", &width);

    printf("Set height (cm) -> ");
    scanf("%f", &height);
    
    float square = length * width * height;

    printf("The volume of parallelepiped is %f (cm)\n", square);
}
