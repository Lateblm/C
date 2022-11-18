#include <stdio.h>
#include <stdlib.h>
int maxNumber(int n);
void Q2();
struct STUDENT
{
    char name[31], id[11];
    struct MARK
    {
        float S, M, E, total, avr;
    } marks;
};

int main()
{
    system("cls");
    int task;
    while (1 == 1)
    {
        puts("     *************************************");
        puts("     *   Selecting appropriate action:   *");
        puts("     *   1. Question 1                   *");
        puts("     *   2. Question 2                   *");
        puts("     *   3. Quit program                 *");
        puts("     *************************************");
        printf("   * Select your number: ");
        scanf("%d", &task);
        switch (task)
        {
        case 1:
            int Q1;
            maxNumber(Q1);
            break;
        case 2:
            Q2();
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("     - Invalid number, please input again!\n");
            break;
        }
    }
}

int maxNumber(int Q1)
{
    int count = 0, max[100], maxNum = 0;
    char ch;
    do
    {
        printf("     -Input a positive number: ");
        scanf("%d", &max[count]);
        count++;
        printf("     - Continue (y/n)?: ");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("     - Numbers input: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", max[i]);

        if (maxNum < max[i])
        {
            maxNum = max[i];
        }
    }
    printf("\n     - The greatest number is: %d\n", maxNum);
    return (maxNum);
}

void Q2()
{
    int n;
    printf("     Input student numbers: ");
    scanf("%d", &n);
    if (n < 0 || n > 100)
    {
        printf("     Invalid number, please input again!");
    }
    printf("     INPUT INFORMATION OF STUDENS\n");
    struct STUDENT list[n];
    for (int i = 0; i < n; i++)
    {   
        fflush(stdin);
        printf("     > Student %d\n", i + 1);
        printf("     - ID: "); gets(list[i].id);
        printf("     - Name: "); gets(list[i].name);
        printf("     - Science mark: ");
        scanf("%f", &list[i].marks.S);
        printf("     - English mark: ");
        scanf("%f", &list[i].marks.E);
        printf("     - Math mark: ");
        scanf("%f", &list[i].marks.M);
        list[i].marks.total = list[i].marks.S + list[i].marks.E + list[i].marks.M;
        list[i].marks.avr = list[i].marks.total / 3;
    }
    for (int i = 0; i < n; i++)
    {
        printf("     > Student %d\n", i + 1);
        printf("     - ID: %s\n", list[i].id);
        printf("     - Name: %s\n", list[i].name);
        printf("     - Science mark: %10.2f\n", list[i].marks.S);
        printf("     - English mark: %10.2f\n", list[i].marks.E);
        printf("     - Math mark: %13.2f\n", list[i].marks.M);
        printf("     - Total marks: %11.2f\n", list[i].marks.total);
        printf("     - Average marks: %9.2f\n", list[i].marks.avr);
    }
}