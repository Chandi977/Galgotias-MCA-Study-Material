#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum,i,t,a;
    printf("The Armstrong numbers in between 1 to 100 are : \n");

    for(i = 1; i <= 1000; i++)
    {
        t = i;  // as we need to retain the original number
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("%d\n", i);
    }

    return 0;
}