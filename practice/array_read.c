#include <stdio.h>
main()
{
    char line[62], charecter;
    int c = 0;
    printf("Enter text. Press <return> at end \n");
    do
    {
        charecter = getchar();
        line[c] = charecter;
        c++;
    } while (charecter != '\n');
    
    line[c] = '\0';
    printf("%s\n", line);
}