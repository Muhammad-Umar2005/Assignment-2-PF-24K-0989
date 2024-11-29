#include<stdio.h>

int i, a, k,l = 0;
void firsthalf(int n)
{


        for(i=1;i<n;i++)
        {
            for(k = 2*(n - 1);k >= i && i < n ;k--)
            {
                printf(" ");
            } 
                        printf("*");

            for(a = 1; a < l ; a = a+1)
            {
                printf(" ");
            }
            l = l + 2;
            if(i != 1)
                    printf("*"); 
            printf("\n");

        }
        for(k = 0 ; k < n ; k++)
        {
                   printf("*",k);
                }
                for(a =0; a < (2*(n - 1) - 1);a++)
                {
                        printf(" ");
                }
                for(k = 0 ; k < n ; k++)
        {
                    printf("*");
                }
                printf("\n");          

}
void secondhalf(int n)
{
        l = 5;

        for(k = 5; k <= n; k= k+2)
        {
                l = l + 8;
        }
        for(i = 1; i < n;i++)
        {
                for(a = 0; a < i; a++)
                {
                        printf(" ");
                }

                printf("*");
                for(k = 0; k < l ;k++)
                {
                        printf(" ");
                }
                l = l-2;
                printf("*");
                printf("\n");
        }
}
void thirdhalf(int n)
{
        k = 1;
        for(a = n-2; a > 0; a--)
        {
                for(i =a;i > 0;i--)
                {
                        printf(" ");
                }
                printf("*");
                for(i = a ;i > 0;i--)
                {
                        printf(" ");
                }
                printf("*");

                for(i = 1;i <= k;i++)
                {
                        printf(" ");
                }
                k = k+4;
                printf("*");
                for(i = a ;i > 0;i--)
                {
                        printf(" ");
                }
                printf("*");
                printf("\n");
        }
        a = 7;

        for(l = 5; l <= n; l= l+2)
        {
                a = a + 8;
        }
        printf("*");
        for(i = 0 ;i < a;i++)
        {
                printf(" ");
        }
        printf("*");

}
int main()
{
    int n;
    printf("Enter number : ");
        scanf("%d",&n);
        firsthalf(n);
        secondhalf(n);
        thirdhalf(n);        
}
