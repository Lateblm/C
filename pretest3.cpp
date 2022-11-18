#include <stdio.h>
#include <stdlib.h>

int fact(int n);
void emp();
struct EMPLOYEE
{
    char id[11], name[31];
    int base_sal, day, net_sal;
};

int main()
{
    system("cls");
    int task;
    while (1 == 1)
    {
        puts("     ************************************");
        puts("     * Selecting an approprite action:  *");
        puts("     * 1. Task 2 (30 Mark)              *");
        puts("     * 2. Task 3 (60 Mark)              *");
        puts("     * 3. Quit program                  *");
        puts("     ************************************");
        printf("     - Select your task: ");
        scanf("%d", &task);
        switch (task)
        {
        case 1:
            int n;
            printf("     - Input a number: ");
            scanf("%d", &n);
            if (n < 1 || n > 10)
            {
                printf("     - Invalid number, please input again!\n");
            }
            printf("     - The factorial of [%d] is: %d\n", n, fact(n));
            break;
        case 2:
            emp();
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

int fact(int n)
{
    long fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return (fact);
}

void emp()
{
    int n;
    printf("     - Input the numbers of employee: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("     - Invalid number, please input again!\n");
    }
    struct EMPLOYEE list[n];
    for (int i = 0; i < n; i++)
    {
        puts("     INPUT INFORMATION OF EMPLOYEE");
        fflush(stdin);
        printf("   > Employee %d:\n", i + 1);
        printf("     - ID: ");
        gets(list[i].id);
        printf("     - Name: ");
        gets(list[i].name);
        printf("     - Base salary: ");
        scanf("%d", &list[i].base_sal);
        printf("     - Worked days: ");
        scanf("%d", &list[i].day);
        list[i].net_sal = list[i].base_sal * list[i].day;
    }
        puts("NO     NAME     BASE SAL     WRK DAYS     NET SALARY");
    for (int i = 0; i < n; i++)
    {
        printf("%s %8s %10d %10d %12d\n", list[i].id, list[i].name, list[i].base_sal, list[i].day, list[i].net_sal);
    }
}