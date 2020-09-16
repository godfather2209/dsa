#include <stdio.h>
#include <stdlib.h>
void selection(int a[],int n);
int main()
{

    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d",n);
    selection(a,n);
}

void selection(int a[],int n)
{
    int i,j,b=0,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    while(b<n)
    {
        printf("%d  ",a[b]);
        b++;
    }
}
