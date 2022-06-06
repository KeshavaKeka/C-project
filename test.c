#include<stdio.h>
int main()
{
	int pin = 1234;
	int temp_pin;
	printf("Enter your pin\t");
	scanf("%d",&temp_pin);
	if(pin == temp_pin)
	{
		printf("We in pes bank provide 5 types of loan:-\n");
		printf("(1)Home loan @9%% p.a.\n");
		printf("(2)Car loan @10%% p.a.\n");
		printf("(3)Stuent loan @7%% p.a.\n");
		printf("(4)Business loan @9%% p.a.\n");
		printf("(5)Gold loan @12%% p.a.\n");
		printf("Enter the type of loan you want\n");
		int loan_type,f3=1;
		scanf("%d",&loan_type);
		while(f3)
		{
			if(loan_type>=1 && loan_type<=5)
			{
			float p,r,si,tot;
			int t;
			printf("Enter the amount of loan you want.\n");
			scanf("%f",&p);
			printf("Enter the amount time period for which you want the loan\n");
			scanf("%d",&t);
			switch(loan_type)
			{
				case 1:
				r=9; f3 =0; break;
				case 2:
				r=10; f3 =0; break;
				case 3:
				r=7; f3 =0; break;
				case 4:
				r=9; f3 =0; break;
				case 5:
				r=12; f3 =0; break;
			}
			si=p*t*r/100;
			tot = p+si;
			printf("At the end of %d years you will have to pay a maturity value of %frs with simple interest %frs",t,tot,si);
		    }
		    else
		    {
		    	printf("You have entered a wrong option.\nplease enter the correct option\n");
		    	scanf("%d",&loan_type);
		    }

		}
	}
	return 0;
}