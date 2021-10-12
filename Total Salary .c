#include<stdio.h>
int main()
{
    int w[7],i,s=0,avg;
    float l[7],p=0,av;
    printf("Mr.Int, please enter your wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d", &w[i]);
    }
    for(i=0;i<6;i++)
    {
        s=s+w[i];
        avg=(s/6);
    }
    printf("Mr.Int weekly salary is %d and his average salary is %d\n", s, avg);
    printf("Mr.Float please enter your wage:\n");
    for(i=0;i<6;i++)
    {
        scanf("%f", &l[i]);
    }
    for(i=0;i<6;i++)
    {
        p=p+l[i];
        av=(p/6);
    }
    printf("Mr.Float weekly salary is %0.2f and his average salary is %0.2f\n", p, av);
    return 0;
}


