#include<stdio.h>
typedef struct holder_deets{
	char name[20];
	int pin;
	int age;
	long int phone;
	float bal;
}acc_deets;
int main()
{
	int old_pin=1234,op;
	printf("Please, Enter your old pin to change the details.\n");
	scanf("%d",&op);
	if(op==old_pin)
	{
	acc_deets x;
	int temp_pin;
	int flag3=1;

	printf("Enter your name\n");
	scanf("%[^\n]s",x.name);
	printf("\nEnter your age\n");
	scanf("%d",&x.age);
	printf("\nEnter your phone number\n");
	scanf("%ld",&x.phone);
	while (flag3==1)
	{
		printf("\nEnter your secret 4-digit pin\n");
		scanf("%d",&x.pin);
		printf("\nConfirm your secret 4-digit pin\n");
		scanf("%d",&temp_pin);
		flag3=0;
		if (x.pin!=temp_pin)
		{
			flag3=1;
			printf("\nPin not matching\n");
		}

	}
	}
	printf("Your account details is successfully changed\n");
	return 0;
}