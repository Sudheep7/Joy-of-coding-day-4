#include<stdio.h>
int main()
{
    int n,a[n],num,i,dupl=0,att=0;
    printf("Enter the number of chits:\n");
    scanf("%d",&n);
    printf("Enter the numbers on chits:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number to be picked:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            dupl++;
            att=i+1;
        }
    printf("Number of duplicate chits:%d\n",dupl);
    printf("Number of attempts:%d\n",att);
    return 0;
    }

}