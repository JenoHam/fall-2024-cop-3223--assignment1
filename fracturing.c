#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// small-fracturing.c
// Author: Jenora Hamilton
// Date: 9/05/24
// Class: COP 3223, Professor Parra
// Purpose: This program prints a circle and possibly
// take in user input. The main purpose of this assignment is to
// check and see whether I can code this program effectively.
// Input: None
//
// Output: (to the command line) A brief Message
// //********************************************************

double calculateDistance()
{
    float x1 = 1;

    float x2 = 2;

    float y1 = 3;

    float y2 = 4;

    double distance;

    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    

        // Printing user input and the result of distance
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n", x2, y2);

    printf("The distance between the two points is %.3f\n\n", distance);

    return distance;
}

double calculatePerimeter()
{
    float x1 = 14;

    float x2 = 9;

    float y1 = 5;

    float y2 = 6;

    double distance = calculateDistance();

    double perimeter = PI * distance;

        // Printing user input and the result of perimeter
    printf("Point #1 entered: x1 = %.3f; y1 = %3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n", x2, y2);

    printf("The perimeter of the city encompassed by your request is %.3f\n\n", perimeter);

    return 2.0;
}

double calculateArea()
{
    float x1 = 2;

    float x2 = 8;

    float y1 = 8;

    float y2 = 6;

    double distance = calculateDistance();

    double radius = distance/2;

    double area = PI * pow(radius, 2);

        // Printing user input and the result of area
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n", x2, y2);

    printf("The area of the city encompassed by your request is %.3f\n\n", area);

    return 3.0;

}

double calculateWidth()
{
    float x1 = 19;

    float x2 =23;

    float y1 = 11;

    float y2 = 5;

    double distance = calculateDistance();

    double width = distance;

        // Printing user input and the result of width
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n", x2, y2);

    printf("The width of the city encompassed by your request is %.3f\n\n", width);

    return 1.0;

}

double calculateHeight()
{
    float x1 = 5;

    float x2 =12;

    float y1 = 8;

    float y2 = 3;

    double distance = calculateDistance();

    double height = distance;

            // Printing user input and the result of height
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n", x2, y2);

    printf("The height of the city encompassed by your request is %.3f\n\n", height);

    return 1.0;

}

double askForUserInput()
{
    float x1, x2, y1, y2;

    float userInput;

    double distance = calculateDistance();

    double perimeter = calculatePerimeter();

    double area = calculateArea();

    double width = calculateWidth();

    double height = calculateHeight();

    //Get user input for x1, x2, y1 and y2
    printf("x1 = ");
    scanf("%f", &x1);

    printf("x2 = ");
    scanf("%f", &x2);

    printf("y1 = ");
    scanf("%f", &y1);

    printf("y2 = ");
    scanf("%f", &y2);

    printf("Point #1 entered: x1 = %.3f; y1 = %.3f;\n", x1, y1);

    printf("Point #2 entered: x2 = %.3f; y2 = %.3f;\n\n", x2, y2);

    printf("The distance between the two points is %.3f\n" 
    "The perimeter of the city encompassed by your request is %.3f\n" 
    "The area of the city encompassed by your request is %.3f\n" 
    "The width of the city encompassed by your request is %.3f\n" 
    "The height of the city encompassed by your request is %.3f\n", distance, perimeter, area, width, height);

    return userInput;
}

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    askForUserInput();

    return 0;
}