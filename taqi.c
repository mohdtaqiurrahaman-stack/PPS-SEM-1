#include<stdio>
void main ()
{
     int deci,bin,i=1,rem;
     printf("enter the number in binary (0s and 1s");
     scanf("%d",&deci);
     while (deci!=0)

     {
        rem=deci%2;
     bin=bin+rem*1;
     i=i*10;
     deci=deci/2
     }
     printf("%d",bin)
}
