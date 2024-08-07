//Create a Food billing system
//Make sure each business logic is denoted with appropriate comments and
//make your code interactive and represent clean and clear output on your
//console screen.
//Adhere to the coding principles
//Firstly, display the food items available
//Then after the user can choose any of the item displayed
//Also take the quantity of selected food item by the customer, then ask the user that
//he/she wanna select more?
//If yes then again display the food items available and take an order from the
//customer. Here, you have to consider the total bill as the price of food items
//previously selected plus the price of new items added should display as a whole bill.
//If no then display the final bill on the screen 
#include<stdio.h>
int main()
{
	int pizza=180,burger=100,dosa=120,idli=50,sum=0,choice,quan=1,amount=0,am=0;
	char ans = 'y';
	while(ans='y')
	{
	printf("\n 1. Pizza \t\t\t price = %drs/pcs",pizza);
	printf("\n 2. Burger\t\t\t price = %drs/pcs",burger);
	printf("\n 3. Doa \t\t\t price = %drs/pcs",dosa);
	printf("\n 4. Idli \t\t\t price = %drs/pcs",idli);
	
	printf("\n\n Please Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1://pizza
				printf("\n You Enter Pizza ");
				printf("Enter the Quantity :");
				scanf("%d",&quan);
				am = pizza * quan;
				amount = amount + (pizza * quan);
				printf("\n Amount = %d",am);
				printf("\n Total Amount = %d",amount);
				break;
		case 2://burger
				printf("\n You Enter Burger ");
				printf("Enter the Quantity :");
				scanf("%d",&quan);
				am = burger * quan;
				amount = amount + (burger * quan);
				printf("\n Amount = %d",am);
				printf("\n Total Amount = %d",amount);
				break;
		case 3://dosa
				printf("\n You Enter Dosa ");
				printf("Enter the Quantity :");
				scanf("%d",&quan);
				am = dosa * quan;
				amount = amount + (dosa * quan);
				printf("\n Amount = %d",am);
				printf("\n Total Amount = %d",amount);
				break;
		case 4://idli
				printf("\n You Enter idli ");
				printf("Enter the Quantity :");
				scanf("%d",&quan);
				am = idli * quan;
				amount = amount + (idli * quan);
				printf("\n Amount = %d",am);
				printf("\n Total Amount = %d",amount);
				break;
	
		default:
				printf("\nInvalid");
				break;
		}
		
		printf("\n\n Do You Want to Continue y/n ? : ");
		scanf(" %c",&ans);
		if(ans != 'y')
		{
			goto end;
		}
		else{
			printf("\n--------------Menu-----------");
		}
	}
	end:
		printf("\nYour Total bill = %d",amount);
		printf("\n\tThank You For Visiting");
		return 0;
	
}

