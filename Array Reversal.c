#include<stdio.h>  
int main()  
{  
    int n, i;  
    scanf("%d", &n);  
    int arr[n];
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}  
