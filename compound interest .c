//program to calculate compound intrest
/*
author:kipchumba
date:30/9/2024
Reg No:CTl02/G/24777/24
 
#include<stdio.h>
#include<math.h>
int main()
{

float principal,rate,time,compoundintrest,period;
int n;

printf("enter principal amount\n");
scanf("%f",&principal);
printf("enter rate of intrest\n");
scanf("%f",&rate);
printf("enter time in period(in years)\n");
scanf("%f",&time);
printf("enter the numberof time compounding is done in a year\n");
scanf("%d",&n);
period=n*time;
compoundintrest=principal*pow(1+(rate/100)/n,period);
printf("compound intrest=%.2f",compoundintrest);
return 0;
}