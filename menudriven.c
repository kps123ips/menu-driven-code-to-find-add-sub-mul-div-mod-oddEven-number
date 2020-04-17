#include<stdio.h>
int main()
{
	while(1)
	{
	
	int choice,n,n1,sum,diff,mul,div,mod;
	printf("\nPress 1 to calculate Addition");
	printf("\nPress 2 to calculate Subtraction");
	printf("\nPress 3 to calculate Multiplication");
	printf("\nPress 4 to calculate Division");
	printf("\nPress 5 to calculate Remainder");
	
	printf("\nPress 6 to find odd or even number");
	printf("\nPress 7 to find sum of first n natural number");
	printf("\nPress 8 to Exit");
	printf("\n\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter two number");
			scanf("%d%d",&n,&n1);
			sum=n+n1;
			printf("\nSum is %d",sum);
			break;
		case 2:
			printf("Enter two number");
			scanf("%d%d",&n,&n1);
			diff=n-n1;
			printf("\nDifference is %d",diff);
			break;
		case 3:
			printf("Enter two number");
			scanf("%d%d",&n,&n1);
			mul=n*n1;
			printf("\nProduct is %d",mul);
			break;
		case 4:
			printf("Enter two number");
			scanf("%d%d",&n,&n1);
			div=n/n1;
			printf("\nDivision is %d",div);
			break;
		case 5:
			printf("Enter two number");
			scanf("%d%d",&n,&n1);
			mod=n%n1;
			printf("\nRemainder is %d",mod);
			break;					
		case 6:
		printf("Enter number");
		scanf("%d",&n);
		if(n%2==0)
	    
	    	printf("It is an Even number");
	    	else
			printf("It is an Odd number");
			break;
			
		case 7:
		printf("Enter a number");
		scanf("%d",&n);
		for(n1=1;n1<=n;n1++)
		printf("%d",n1);
		break;
		case 8:exit(0);
		
		default:
		printf("Oops It is a Wrong Entry");	
	}
	getch();
}

}
