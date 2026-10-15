#include <stdio.h>
int main()
{
    int number;
    printf("Введите кол-во сдачи: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Чел... У тебя нет сдачи.\n");
    }
    else
    {
        int coins = 0;
        while (number >= 25)
        {
            number -= 25;
            coins++;
        }
        while (number >= 10)
        {
            number -= 10;
            coins++;
        }
        while (number >= 5)
        {
            number -= 5;
            coins++;
        }
        while (number >= 1)
        {
            number -= 1;
            coins++;
        }
        printf("Минимальное кол-во монет: %d\n", coins);
    }
}