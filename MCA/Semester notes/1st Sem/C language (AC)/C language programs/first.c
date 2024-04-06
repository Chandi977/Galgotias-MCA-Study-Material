# include<stdio.h>
# include<conio.h>

int main(){
    // add the two number
    int a, b;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Enter b number: ");
    scanf("%d",&b);

    int sum = a + b;
    printf("The sum is : %d",sum);
    
    // the area of square
    float side;
    printf("Enter side: ");
    scanf("%f",&side);

    printf("The area is : %f",side*side); 

    // area pf circle
    float radius;
    printf("Enter Radius: ");
    scanf("%f",&radius);

    printf("The area is : %f", 3.14*radius*radius);

    // simple interest 
    float p,r,t,si;
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    printf("The simple interest is : %f",si);

    // type casting
    int a =(int) 1.99999;
    printf("%d \n", a);

    // operator precedence
    // * , / , %  ->  + , -  ->  =

    // Associativity (for same precedence)
    // left to right 
    // int a = 4*3/6*3;


    return 0;
}