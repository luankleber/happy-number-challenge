#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int input, holder, sum = 0;

    printf("Input: n = ");
    scanf("%d", &input);

    while (sum != 1 && sum != 4)
    {
        sum = 0;
        while (input > 0)
        {
            holder = input % 10;
            sum = sum + pow(holder, 2);
            input = input / 10;
        }
        input = sum;
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
