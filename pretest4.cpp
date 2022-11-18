#include <stdio.h>
#include <stdlib.h>

void Q1();
void Q2();
struct COUNTRIES
{
    char name[31], capital[31];
    int area;
};

int main()
{
    system("cls");
    int task;
    while (1 == 1)
    {
        puts("     ************************************");
        puts("     * Selecting an approprite action:  *");
        puts("     * 1. Task 2: (30 Mark)             *");
        puts("     * 2. Task 3: (60 Mark)             *");
        puts("     * 3. Quit program                  *");
        puts("     ************************************");
        printf("     > Select your task: ");
        scanf("%d", &task);
        switch (task)
        {
        case 1:
            Q1();
            break;
        case 2:
            Q2();
            break;
        case 3:

            exit(0);
            break;

        default:
            printf("     - Invalid number, please input again!\n");
            break;
        }
    }
}

void Q1()
{
    int n1, n2, sum = 0;
    printf("     - Input N1: ");
    scanf("%d", &n1);
    if (n1 > 100)
    {
        printf("     - Invalid number, please input again!\n");
    }
    printf("     - Input N2: ");
    scanf("%d", &n2);
    if (n1 < n2 || n2 > 10)
    {
        printf("     - Invalid number, please input again!\n");
    }
    printf("     - Multiples of [%d] are: \n", n2);
    for (int i = 1; n2 * i < n1; i++)
    {
        sum = sum + n2 * i;
        printf("     %d  ", n2 * i);
    }
    printf("\n     - Sum of them are: %d\n", sum);
}

void Q2()
{
    int n, max = 0;
    printf("     - Input the number of countries: ");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("     - Invalid number, please input again!\n");
    }
    printf("     INPUT INFORMATION OF THOSE COUNTRIES\n");
    struct COUNTRIES list[n];
    for (int i = 0; i < n; i++)
    {
        printf("Countries %d:\n", i + 1);
        fflush(stdin);
        printf("     - Name: ");
        gets(list[i].name);
        printf("     - Capital: ");
        gets(list[i].capital);
        printf("     - Area: ");
        scanf("%d", &list[i].area);
    }
    for (int i = 0; i < n; i++)
    {
        if (max < list[i].area)
        {
            max = list[i].area;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max == list[i].area)
        {
            printf("     - The largest nation is: %s / %d (square miles)\n", list[i].name, max);
        }
    }
}