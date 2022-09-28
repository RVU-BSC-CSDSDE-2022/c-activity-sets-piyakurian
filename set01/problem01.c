#include <stdio.h>  
#include<string.h>  
int main()  
{     
   int 1,2;   
   printf("Enter the first string : ");  
   scanf("%s",*1);  
   printf("Enter the second string : ");  
   scanf("%s",*2);    
   value=compare(*1,*2);  
   if(value==0)  
   printf("strings are same\n");  
   else  
   printf("strings are not same\n");  
   return 0;  
}