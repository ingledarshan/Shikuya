// WAP to calculate nCr
// https://ncalculators.com/formula-images/statistics/ncr-combination-formula.png
#include <stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}

void main()
{
    int n, r, nCr;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    nCr = fact(n) / (fact(r)*fact(n-r));
    printf("\nnCr is %d",nCr);
}

