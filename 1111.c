#include <stdio.h>
 
int main()
{
   char str1[20], str2[30];
 
   printf("请输入用户名：");
   scanf("%s", str1);
 
   printf("请输入您的网站：");
   scanf("%s", str2);
 
   printf("输入的用户名：%s\n", str1);
   printf("输入的网站：%s", str2);
   
   return(0);
}