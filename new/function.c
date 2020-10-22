#include<stdio.h>
#include<conio.h>
void sum(){
    int a,b,c;
    printf("Enter the number\n ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum = %d",c);
}
void sub(){
    int a,b,c;
    printf("\nEnter the number \n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Subtaction = %d",c);
}
void multi(){
    int a,b,c;
    printf("\nEnter the number \n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Multiplication = %d",c);
}
void dev(){
    int a,b,c;
    printf("\nEnter the number \n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division = %d",c);
}
void mod(){
    int a,b,c;
    printf("\nEnter the number \n");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("Modulus = %d",c);
}
void less(){
    int a,b,c;
    printf("\nEnter the number \n");
    scanf("%d%d",&a,&b);
    printf("less then equal to a<= b = %d",a<=b);
}

int main()
{
    sum();
    sub();
    multi();
    dev();
    mod();
    less();
}
