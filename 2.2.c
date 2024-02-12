#include<stdio.h>
int main(void)
{
    char name[20],address[50];
    printf("please inter your name: ");
    scanf("%s",name);
    printf("Now,please inter your address:");
    scanf("%s",address);
    printf("your name is:%s\n",name);
    printf("your adreess is:%s",address);
    return 0;
}