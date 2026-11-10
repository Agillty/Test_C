#include<stdio.h>

int main()

{

    int a,b,sum;

    printf("Enter two numbers to add: ");

    scanf("%d %d",&a,&b);

    sum=a+b;


    printf("Sum of %d and %d is: %d",a,b,sum);

    
    int sub;
    sub=a-b;

    printf("Difference of %d and %d is: %d",a,b,sub);



    return 0;

}