#include<stdio.h>
int main ()
{
    float salary,hra ,da, gross;
    printf("Whats is your basic salary : ");
    scanf("%f",&salary);
    if (salary<1500)
    {
        hra = salary*0.1;
        printf("\nthe HRA :%f",hra);
        da = salary*0.4;
        printf("\nthe DA :%f",da);
        gross = hra + da + salary;
        printf("\nThe gross salary is :%f",gross);
    }
    else
    {
        hra = 500;
        printf("\nthe HRA :%f",hra);
        da = salary*0.5;
        printf("\nthe DA :%f",da);
        gross = hra + da + salary;
        printf("\nThe gross salary is :%f",gross);
    }
    

    return(0);
}