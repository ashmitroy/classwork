#include<stdio.h>
int main ()
{
    int po;
printf("press 1,if the object is at infinity:\n");
printf("press 2,if the object is beyond the center of curvature C: \n ");
printf("press 3,if the object is at the center of curvature C: \n ");
printf("press 4,if the object is between C and F : \n");
printf("press 5,if the object is at focus F : ");

scanf("%d",&po);
if (po == 1)
{
    printf("The position of image is infinty \n  thr image is highly diminished \n it is real and inverted");
}
else if( po == 2)
{
    printf("The position of the image is between f and c\n the size of image is diminished \n it is real and inverted");

}

else if (po == 3)
{
printf("The position of the image is at C\n the size of the image is same size \n the image is real and inverted");
}
else if (po == 4)
{
    printf("The position of the image is beyond c\n the size of image is enlarge \n the image is real and inverted");
}
else if (po == 5)
{
    printf("The position of the image is at infinity\n the size of image is highly enlarged\n the image is real and inverted");
}




else

{
printf("enter a correct no.");
}

    return(0);

}