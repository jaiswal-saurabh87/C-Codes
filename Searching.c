#include <stdio.h>
int main()
{
    int n,i,a[10]={10,20,30,40,50,60,70,80,90,100};
    printf("Enter the element the Search : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(a[i]==!n)
    {
        printf("Not Found!");
    }
}