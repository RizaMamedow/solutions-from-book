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

    Set length (cm) -> 5
    Set width (cm) -> 2
    The area of parallelogram is 10
*/
void computeParallelogramArea() {
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

    Set length (cm) -> 5
    Set width (cm) -> 2
    Set height (cm) -> 3
    The volume of parallelepiped is 30
*/
void computeParallelepipedVolume() {
    float length;
    float width;
    float height;

    printf("Set length (cm) -> ");
    scanf("%f", &length);

    printf("Set width (cm) -> ");
    scanf("%f", &width);

    printf("Set height (cm) -> ");
    scanf("%f", &height);
    
    float volume = length * width * height;

    printf("The volume of parallelepiped is %f (cm)\n", volume);
}


/*
    # Solution 53
    Task: Write a program for calculating the surface area of ​​the parallelepiped.epiped.
    Below is the recommended type of screen during the execution of the program.

    Set length (cm) -> 5
    Set width (cm) -> 2
    Set height (cm) -> 3
    The surface area of parallelipiped is  
*/
void computeParallelepipedSurfaceArea() {
    float length;
    float width;
    float height;

    printf("Set length (cm) -> ");
    scanf("%f", &length);

    printf("Set width (cm) -> ");
    scanf("%f", &width);

    printf("Set height (cm) -> ");
    scanf("%f", &height);

    // original formula is S = 2(ab+bc+ca)
    // a - length
    // b - width
    // c - height
    float area = 2 * ((length * width) + (width * height) + (length * height));

    printf("The surface area of parallelepiped is %f (cm)\n", area);
}


/* 
    # Solution 54
    Task: Write a program for calculating cube volume
    Below is the recommended type of screen during the execution of the program.

    Enter the length of the ribs of the cube (cm) -> 9.5

    cube volume is 857.38 cm^3
*/
void computeCubeVolume() {
    float length;

    printf("Enter the length of the ribs of the cube (cm) -> ");
    scanf("%f", &length);

    float volume = pow(length, 3);

    printf("Cube volume is %f", volume);

}