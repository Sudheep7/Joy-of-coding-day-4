#include<stdio.h>
int main()
{
    int a[6],i,j;
    float b[6];
    char c[6]={'M','T','W','T','F','S'};
    printf("Mr.Int input your wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse of Mr.Int wage is:\n");
    for(j=5;j>=0;j--)
    {
        printf("%d\n", a[j]);
    }
    printf("Mr.Float input your wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%f", &b[i]);
    }
    printf("Reverse of Mr.Float wage is:\n");
    for(j=5;j>=0;j--)
    {
        printf("%0.2f\n", b[j]);
    }
    printf("Mr.Int your wage is as follows:\n");
    for(i=0;i<6;i++)
    {
        printf("%c-Rs.%d\n", c[i], a[i]);
    }
    printf("Mr.Float your wage is as follows:\n");
    for(i=0;i<6;i++)
    {
        printf("%c-Rs.%0.2f\n", c[i], b[i]);
    }
    return 0;
}

