#include <stdio.h>
int main()
{
    int arr[6],i,mi;
    float b[6],mf;
    printf("Enter Mr.Int wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Mr.Float wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%f", &b[i]);
    }
    mi=arr[0];
    mf=b[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]>mi)
        mi=arr[i];
        if(b[i]>mf)
        mf=b[i];
    }
    printf("Mr.Int will party when he gets Rs.%d\n", mi);
    printf("Mr.Float will party when he gets Rs.%0.2f\n", mf);
    return 0;
}

