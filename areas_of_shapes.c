#include <stdio.h>

void red(){
  printf("\033[0;31m");
}

void reset () {
  printf("\033[0m");
}
//Function declaration
float circle();
float triangle();
float trapezium();
float pentagon();

int main(){
    int s;
    //Input the number of sides
    printf("\nEnter the number of sides: \n");
    scanf("%d", &s);
    
    if(s==0){
        printf("\nThe shape is a circle with '0' sides. \n");
        
        //Function call
        circle();
        main();
    }
    
    if(s==3){
        printf("\nThe shape is an equilateral triangle with '3' sides. \n");
        
        triangle();
        main();
    }
    
    if(s==4){
        printf("\nThe shape is a trapezium with '4' sides. \n");
        
        trapezium();
        main();
    }
    
    if(s==5){
        printf("\nThe shape is a regular pentagon with '5' sides. \n");
        
        pentagon();
        main();
    }
    
    else{
        red();
        printf("\nInvalid number of sides\n");
        reset();
        printf("\nEnter one of the following:\n0 - circle\n3 - equilateral triangle\n4 - trapezium\n5 - regular pentagon\n\n");
        main();
    }

}

float circle(){
    float PI=3.1415926;
    float radius, area;
    
    //Input the radius
    printf("\nEnter the radius: \n");
    scanf("%f", &radius);
    
    //Calculate the area
    area = PI*radius*radius;
    
    //Show the area
    printf("\nThe area is: ");
    red();
    printf("%.3f \n", area);
    reset();
    
    return 0;
}

float triangle(){
    float coefficient=0.4330127;
    float base, area;
    
    printf("\nEnter the side: \n");
    scanf("%f", &base);
    
    area=coefficient*base*base;
    
    printf("\nThe area is: ");
    red();
    printf("%.3f \n", area);
    reset();
    
    return 0;
}

float trapezium(){
    float a, b, h, area;
    
    printf("\nEnter the longer side: \n");
    scanf("%f", &a);
    
    printf("\nEnter the shorter side: \n");
    scanf("%f", &b);
    
    printf("\nEnter the height: \n");
    scanf("%f", &h);
    
    area=0.5*(a+b)*h;
    
    printf("\nThe area is: ");
    red();
    printf("%.3f \n", area);
    reset();
    
    return 0;
}

float pentagon(){
    float coefficient=1.7204774;
    float c, area;
    
    printf("\nEnter the side: \n");
    scanf("%f", &c);
    
    area=coefficient*c*c;
    
    printf("\nThe area is: ");
    red();
    printf("%.3f \n", area);
    reset();
    
    return 0;
}
