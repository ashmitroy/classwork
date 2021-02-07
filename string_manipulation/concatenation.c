#include <stdio.h>
int main()
{
    char str1[] = "Ashmit";
    char str2[] = "Deb";
    char str3[] = "roy";
    char str4[15];
    int i = 0, j = 0;
    while (str1[i]!= '\0')
    {
       str4[i]=str1[j];
       i++; 
       j++;

    }

j=0;
str4[i]=' ';
i++;

        while (str2[j]!= '\0')
    {

       str4[i]=str2[j];
       i++;
       j++; 

    }

j=0;
str4[i]=' ';
i++;


       while (str3[j]!= '\0')
    {

       str4[i]=str3[j];
       i++; 
       j++;

 
    }

    printf("The concatinated string is : %s\n", str4);
    return (0);
}