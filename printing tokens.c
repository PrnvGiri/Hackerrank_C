#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c[1024];
    scanf("%[^\n]%*c",&c);
    for(int i = 0;i<strlen(c); i++)
    {
        if(c[i]==' ')
        {
            printf("\n");
        }
        else
        printf("%c",c[i]);
    }

    
    return 0;
}
