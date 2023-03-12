
#include<stdio.h>
 int main()
 {
    char c,s[100],sen[100];
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]s",sen);
    printf("%s",sen);
    return 0; 
 }
 
