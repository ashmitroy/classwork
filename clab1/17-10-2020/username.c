#include<stdio.h>
int main ()
{
char username,a;
int password;
printf("Username :\n");
scanf("%c",&username);


if (username == 'a')

 {
     printf("Password :\n");
scanf("%d",&password);
    if (password == 1234)
    {
        printf("welcome\n");
    
    }
    else
    {
        printf("Type the correct password\n");
    } 
 } 

else
    {
    printf("write the correct username ");

    }


    return(0);
}