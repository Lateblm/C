#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int armstrongNumber(int n);
struct DOCTOR
    {
    char id[6], name[31], specialist[31];
    int exp_year;
    };
int main(){
    system("cls");
    int task;
    while(1 == 1){
    puts("     ************************************");
    puts("     * Selecting an approprite action:  *");
    puts("     * 1. Task 2 (30 Mark)              *");
    puts("     * 2. Task 3 (60 Mark)              *");
    puts("     * 3. Quit program                  *");
    printf("   - Select your task: ");
    scanf("%d", &task);
    switch (task)
    {
    case 1:
        int n, i;
        printf("\n   - TASK 2: CHECK ARMSTRONGNUMBER: ");
        printf("\n      > Input your number: ");
        scanf("%d", &n);
        i = armstrongNumber(n);
        if(i == 1){
        printf("        - [%d] is an Armstrongnumber!\n\n", n);
        } 
        else{
        printf("        - [%d] is not an Armstrongnumber!\n\n", n);
        }
        break;
    case 2:
        int a;
        printf("\n   - TASK 3: MANAGERS LIST OF DOCTORS: ");
        printf("\n      > Input the number of doctors: ");
        scanf("%d", &a);
        if(a<3 || a>10){
        printf("       - Invalid number, please input again!\n\n");
        } 
        else {
        struct DOCTOR list[a];
        for(int i=0; i<a; i++){
        printf("        > Input information of doctor %d\n", i+1);
        fflush(stdin);
        printf("        > ID: "); gets(list[i].id);
        printf("        > Name: "); gets(list[i].name);
        printf("        > Specialist: "); gets(list[i].specialist);
        printf("        > Experience year: "); scanf("%d", &list[i].exp_year);
        }
        printf("     ************************************\n");
        printf("     THE DOCTORS MORE THAN 10 YEARS EXPERIENCE\n");
        for(int i=0 ; i<a; i++){
        if(list[i].exp_year >= 10){
        printf("        %-5s %-10s %-15s %-20d\n", list[i].id, list[i].name, list[i].specialist, list[i].exp_year);
        }
        }
        }
        break;
    case 3:
        exit(0);
    default:
        printf("       - Invalid number, please select again!\n\n");
        break;
    }
    }
}

int armstrongNumber(int n){
    int powNumber = 0, sum = 0;
    int div , num;
    for(num = n; num != 0; ++powNumber){
        num = num/10;
    }
    for(num = n; num !=0; num = num/10){
        div = num % 10;
        sum = sum + pow(div, powNumber);
    }
    if (sum == n){
        return 1;
    }
    return 0;
}

