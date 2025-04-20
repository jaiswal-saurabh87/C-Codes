#include <stdio.h>
int main()
{
    int n,i=0,a[10]={10,20,30,40,50,60,70,80,90,100};
    printf("Enter the element the Search : ");
    scanf("%d",&n);
    while(i<10)
    {
        if(a[i]==n)
        {
            printf("Element %d found at position %d",n,i+1);
            break;
        }
        i++;
    }
    if(i>=10)
    {
        printf("Not Found!");
    }
    return 0;
}