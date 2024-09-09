// Calling libraries 

#include <stdio.h>
#include <math.h>

// This function will calculate the distance between two points 
double calculateDistance() {
    // Declaring variables 
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    double distance=0;
    // Asking for input 
    printf("We will find the distance between two points.\n");
    printf("What is the x coordinate of your first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate of your first point? \n");
    scanf("%d", &y1);
    printf("Point #1 entered: (%d,%d).\n",x1,y1);
    printf("What is the x coordinate of your second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate of your second point? \n");
    scanf("%d", &y2);
    printf("Point #2 entered: (%d,%d).\n",x2,y2);

    // Calculating distance
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The total calculated distance between these points is %f. \n", distance);
    return distance; 
}

// This function will find the perimeter for city
double calculatePerimeter() {
    // Declaring variables 
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    double PI = 3.14159;
    double distance = 0;
    // Asking for input 
    printf("We will find the perimeter for your city with two points.\n");
    printf("What is the x coordinate of your first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate of your first point? \n");
    scanf("%d", &y1);
    printf("Point #1 entered: (%d,%d).\n",x1,y1);
    printf("What is the x coordinate of your second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate of your second point? \n");
    scanf("%d", &y2);
    printf("Point #2 entered: (%d,%d).\n",x2,y2);

    // Calculating perimeter 

    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double radius = distance / 2;
    double perimeter = PI*radius*2;
    printf("The perimeter of the city encompassed by your request is %f. \n", perimeter);
    double difficulty= 3.0;

    return difficulty;

}

// This function will calculate area
double calculateArea() {
    // Declaring variables 
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    double PI = 3.14159;
    double distance = 0;
    // Asking for input 
    printf("We will find the perimeter for your city with two points.\n");
    printf("What is the x coordinate of your first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate of your first point? \n");
    scanf("%d", &y1);
    printf("Point #1 entered: (%d,%d).\n",x1,y1);
    printf("What is the x coordinate of your second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate of your second point? \n");
    scanf("%d", &y2);
    printf("Point #2 entered: (%d,%d).\n",x2,y2);

    // Calculating area 

    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double radius = distance / 2;
    double area = PI*(pow(radius,2));
    printf("The area of the city encompassed by your request is %f. \n", area);
    double difficulty= 3.0;

    return difficulty;
}

// This function will calculate the width 
double calculateWidth() {
// Declaring variables 
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    double distance = 0;
    // Asking for input 
    printf("We will find the width for your city with two points.\n");
    printf("What is the x coordinate of your first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate of your first point? \n");
    scanf("%d", &y1);
    printf("Point #1 entered: (%d,%d).\n",x1,y1);
    printf("What is the x coordinate of your second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate of your second point? \n");
    scanf("%d", &y2);
    printf("Point #2 entered: (%d,%d).\n",x2,y2);

    // Calculating width, which is essentially is the distance between two points horizontally  
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The width of the city encompassed by your request is %f. \n", distance);
    double difficulty= 2.0;

    return difficulty;
    
}

// This function will calculate the height  
double calculateHeight() {
// Declaring variables 
    int x1=0;
    int x2=0;
    int y1=0;
    int y2=0;
    double distance = 0;
    // Asking for input 
    printf("We will find the height for your city with two points.\n");
    printf("What is the x coordinate of your first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate of your first point? \n");
    scanf("%d", &y1);
    printf("Point #1 entered: (%d,%d).\n",x1,y1);
    printf("What is the x coordinate of your second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate of your second point? \n");
    scanf("%d", &y2);
    printf("Point #2 entered: (%d,%d).\n",x2,y2);

    // Calculating height, which is essentially is the distance between two points veritcally  
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The height of the city encompassed by your request is %f. \n", distance);
    double difficulty= 2.0;

    return difficulty;
}

// Main function -- This function is simply meant to call all other functions
int main(int argc, char **argv) {
    // TASK 1: Calculate distance
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}


