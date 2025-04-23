// Mensuration Calculator

#include<stdio.h>
#include<windows.h>

// Function declaration

// for circle
float areaOfCircle( float radius){
    return 3.14*radius*radius;
}
float parimeterOfCircle(float radius){
    return 2*3.14*radius;
}

// for rectangle
float areaOfRectangle( float length, float width){
    return length*width;
}
float parimeterOfRectangle(float length, float width){
    return 2*(length+width);
}

// for triangle
float areaOfTriangle( float b, float h){
    return 0.5*b*h;
}
float parimeterOfTriangle(float b, float c, float d){
    return b+c+d;
}

// for square
float areaOfSquare( float side){
    return side*side;
}
float parimeterOfSquare(float side){
    return 4*side;
}

int main(){
    

// variable declaration

// for circle
float radius;

// for rectangle
float length, width;

// for triangle
float b, c, d, h; // here a, b and c --> three sides of a triangle and h --> height of the triangle

// for square
float side;

// for user input of shape
char userChoice;


// Letting user choose the shape for further calculation
printf("Welcome to Mensuration Calculator.\n");
Sleep(2000);

printf("You can choose your shape from set of some basic shapes of which you want the answer of area or parameter/circumference.\n");
Sleep(3000);

printf("Please enter the option of the shape of your choice from option (A) to (D):\n");

printf("(A)for a circle\n(B) for a rectangle\n(C) for a triangle\n(D) for a square\n") ;
scanf("%c",&userChoice);


// Conditional Statements for the shape choice and further calculation

// for circle --> option A
if (userChoice == 'A'){
    printf("Enter the value of radius of the circle: ");
    scanf("%f",&radius);

    float a= areaOfCircle(radius);
    printf("Area of the circle is %.2f\n",a);

    float p= parimeterOfCircle(radius);
    printf("Parimeter of the circle is %.2f\n",p);
}

// for rectangle --> option B
if (userChoice == 'B'){
    printf("Enter the value of length and width of the rectangle: ");
    scanf("%f",&length);
    scanf("%f",&width);

    float a= areaOfRectangle(length, width);
    printf("Area of the rectangle is %.2f\n",a);

    float p= parimeterOfRectangle(length, width);
    printf("Parimeter of the rectangle is %.2f\n",p);
}

// for triangle --> option C
if (userChoice == 'C'){
    printf("Enter the value of three sides and height of the triangle: ");
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&h);

    float a= areaOfTriangle(b, h);
    printf("Area of the triangle is %.2f\n",a);

    float p= parimeterOfTriangle(b, c, d);
    printf("Parimeter of the triangle is %.2f\n",p);
}

// for square --> option D 
if (userChoice == 'D'){
    printf("Enter the value of side of the square: ");
    scanf("%f",&side);

    float a= areaOfSquare(side);
    printf("Area of the square is %.2f\n",a);

    float p= parimeterOfSquare(side);
    printf("Parimeter of the square is %.2f\n",p);
}


  return 0;

}