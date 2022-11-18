#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct REC
{
    int width, height, area;
    char color[11], id[6];
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
            int a, count;
            printf("     > Input a number: ");
            scanf("%d", &a);
            if (a < 0)
            {
                printf("     > Invalid number, please input again!");
            }
            count = 0;
            printf("     - Odd numbers divisior of [%d]: ", a);
            for (int i = 1; i <= a; i++)
            {
                if (a % i == 0)
                {
                    if (i % 2 != 0)
                    {
                        count++;
                        printf("     [%d] ", i);
                    }
                }
            }
            printf("\n     - Numbers of odd divisior of [%d]: [%d]\n\n", a, count);
            break;
        case 2:
        {
            int n;
            printf("     > Input number of rectangles: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("     > Invalid number, please input again!");
            }
            struct REC list[n];
            for (int i = 0; i < n; i++)
            {
                printf("     > Input informations rectangles %d:\n", i + 1);
                printf("     - ID: ");
                scanf("%s", &list[i].id);
                printf("     - Width: ");
                scanf("%d", &list[i].width);
                printf("     - Height: ");
                scanf("%d", &list[i].height);
                printf("     - Color: ");
                scanf("%s", &list[i].color);
                list[i].area = list[i].width * list[i].height;
            }
            for (int i = 0; i < n; i++)
            {
                printf("\n     %5s %5d %5d %5d %-5s\n\n", list[i].id, list[i].width, list[i].height, list[i].area, list[i].color);
            }
            printf("     - The numbers of rectangles : [%d]\n\n", n);
        }
        break;
        case 3:
            exit(0);
            break;
        default:
            printf("     > Invalid number, please input again!\n\n");
            break;
        }
    }
}

