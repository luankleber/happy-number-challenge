// Luan Kleber da Silva Pereira
// Happy Number Challenge

#include <stdio.h>

int isInTheLoop(int sum)
{
    if (sum == 4 || sum == 16 || sum == 37 || sum == 58 || sum == 89 || sum == 145 || sum == 42 || sum == 20)
    {
        return 1;
    }
    return 0;
}

int equationProcess(int input)
{
    int holder = 0;
    int sum = 0;

    while (input > 0)
    {
        holder = input % 10;
        printf("%d", holder);
        printf("²");
        sum += (holder * holder);
        input = input / 10;

        if (input > 0)
        {
            printf("+");
        }
    }
    return sum;
}

int getInput()
{
    int input;
    do
    {
        printf("Input: n = ");
        scanf("%d", &input);
    } while (input <= 0);
}

int main(int argc, char const *argv[])
{
    int input = getInput();
    int sum = 0;

    printf("Process:\n");

    while (sum != 1 && 1 != isInTheLoop(sum))
    {
        sum = equationProcess(input);
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
