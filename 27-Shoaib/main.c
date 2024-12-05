/*
NAME : KHAN Mohammed shoaib
ROLL NO:27
TASK NAME :Calculate the Simple interest taking 
 Principle, rate,of intrest and no.of year
 Task taken from : khan Mohd Farhan
 ROLLNO:36
 */
#include<stdio.h>
int main (){

int si,p,n,r;
printf("Enter the principle amount:");
scanf("%d",&p);
printf("Enter duration in term of year:");
scanf("%d",&n);
printf("Enter rate of interest:");
scanf("%d",&r);
si = (p*n*r)/100;
printf("Simple interest is %d",si);
return 0;
}
