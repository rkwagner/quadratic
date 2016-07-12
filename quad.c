#include <stdio.h>
#include <math.h>

void main(){
    //Quadratic equation:
    //ax**2+bx+c
    //Quadratic formula:
    //(-b +- sqrt(b**2-4ac))/2a
    //+ is root 1, - is root 2.
    int a, b, c;
    
    printf("Enter a, b, c as found in equation ax^2+bx+c: ");
    scanf("%d %d %d", &a, &b, &c);

    float root = b*b - 4*a*c;
    float root1 = (-b+sqrt(root))/(2*a);
    float root2 = (-b-sqrt(root))/(2*a);
    printf("Root 1 is: %.3f\nRoot 2 is: %.3f\n", root1, root2);
}
