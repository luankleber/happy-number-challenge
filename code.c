#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int input, holder, sum = 0;

    printf("Input: n = ");
    scanf("%d", &input);
    printf("Process:\n");

    while (sum != 1 && sum != 4)
    {
        sum = 0;
        while (input > 0)
        {
            holder = input % 10;
            printf("%d", holder);
            printf("²");
            sum = sum + pow(holder, 2);
            input = input / 10;

            if (input > 0)
            {
                printf("+");
            }
        }
        input = sum;
        printf("= %d\n", sum);
    }

    if (sum == 1)
    {
        printf("Output: true");
    }
    else
    {
        printf("Output: false");
    }
    return 0;
}
