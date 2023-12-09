
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,sum;
    float avg;
    printf("enter first sub number a,b,c,d,e\n");
    scanf("%f %f %f %f%f",&a,&b,&c,&d,&e);
    printf("\n the sum of all five num is %f ",a+b+c+d+e);
    sum=a+b+c+d+e;
    avg=(sum/5);
    printf("\n the avg is %f",avg);
    getch();
}
