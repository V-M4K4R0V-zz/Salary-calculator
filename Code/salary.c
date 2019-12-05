#include <stdio.h>

int main()
{
    char id[50];
    int hour;
    double mounth , year , salary , value , week , fweek;
    int fDAus;

	printf("Input the Employees ID: ");
    scanf("%[^\n]", &id);

	printf("\nInput the working hours per day: ");
    scanf("%d", &hour);

    printf("\nSalary amount/hr: ");
	scanf("%lf", &value);

    printf("\nHow many days you work in a week: ");
    scanf("%d", &fDAus);

    salary = value * hour;
    week = salary * 7;
    fweek = week - (salary * fDAus);
    mounth = fweek * 4;
    year = mounth * 12;

    printf("\nEmployees ID = %s",id);
    printf("\nSalary per day = U$ %g",salary);
    printf("\nSalary per mouth = U$ %g",mounth);
    printf("\nSalary per year = U$ %g",year);
    
    char at;
    printf("\ncontinue [Y][N]: ");
    scanf("%s",at);
    if ((at == 'y') || (at == 'Y'))
    return main();
    else 
    return 0;
}