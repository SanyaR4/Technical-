#include<stdio.h>

int main()

{

    char str[100];
   
    int len;
 
   scanf("%s%n",str,&len);
 
   for(int i=len;i>=1;i--)
    printf("%-*.*s\n",len,i,str);
   
  return 0;

}