#include<stdio.h>
int main(void)
{
    int age,date_number;
    printf("please enter your age: ");
    scanf("%d",&age);
    date_number=age*365;
    printf("your age is :%d,you alread lived here %d days",age,date_number);
}