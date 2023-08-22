#include<stdio.h>
int main()
{
	int num,num1=0,num2=1,num3,i;
	printf("enter the number:");
	scanf("%d",&num);
	
	printf("%d%d",num1,num2);
	
	for(i=1;i<=num;i++)
	{
		num3=num1+num2;
		printf("%d",num3);
		num1=num2;
		num2=num3;
	}
return(0);
}
