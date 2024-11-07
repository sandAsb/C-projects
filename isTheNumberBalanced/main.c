#include <stdio.h>
#include <stdlib.h>
int hasEqualDigitSum(int);
int hasEqualDigitCount(int);
int isBalanced(int);
int main()
{
    int num_1,num_2;
    printf("(Enter any two positive numbers num_1 and num_2)\n");
    scanf("%d%d",&num_1,&num_2);
    printf("-->The balanced numbers from %d to %d are:-\n", num_1,num_2 );
    for(int i = num_1 ; i <= num_2 ; i++)
    {
        if(isBalanced(i) == 1)
            printf("%d\n", i);
    }

    return 0;
}
int hasEqualDigitSum(int number_i)
{
    int even_sum=0;
    int odd_sum=0;
    while(number_i != 0)
    {
        int digitOFsum = number_i%10;
        if(digitOFsum%2==0)
        {
            even_sum+=digitOFsum;
        }

        else
        {
            odd_sum+=digitOFsum;
        }
        number_i/=10;
    }
    if(odd_sum==even_sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int hasEqualDigitCount(int number_i)
{
    int even_count=0;
    int odd_count=0;
    while(number_i != 0)
    {
        int digitOFcount = number_i%10;
        if(digitOFcount%2==0)
        {
            even_count++;
        }

        else
        {
            odd_count++;
        }
        number_i/=10;
    }
    if(odd_count==even_count)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

int isBalanced(int number_i)
{
    if(hasEqualDigitSum(number_i)&& hasEqualDigitCount(number_i) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
