#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AC_GREEN "\x1b[32m"
#define AC_WHITE "\x1b[37m"

void clr()
{
	//clear console and display logo
    printf("\e[1;1H\e[2J");
	printf("Lava Manager\n\n");
}

//login interface for the app
void login()
{
	const int USR = 65;
	const int PASS = 75;

	int usr;
	int pass;
	int value;
	int tries = 0;

	printf("Enter username: ");
	scanf("%d", &usr);

	while(usr != USR)
	{
		tries++;
		clr();
		printf("Wrong username. Please try again.\n");
		printf("Enter username: ");
		scanf("%d", &usr);

		if((tries == 3) && (usr != USR))
		{
			printf("%s",AC_WHITE);
			exit(0);
		}

		if(usr == USR)
			break;
	}

	clr();

	printf("Enter Password: ");
	scanf("%d", &pass);

	tries = 0;

	while(pass != PASS)
	{
		tries++;
		clr();
		printf("Wrong Password. Please try again.\n");
		printf("Enter Password: ");
		scanf("%d", &usr);

		if((tries == 3) && (pass != PASS))
		{
			printf("%s",AC_WHITE);
			exit(0);
		}

			if(pass == PASS)
				break;
	}
}

int menu(int choice);

int main()
{	
	//change terminal color
	printf("%s",AC_GREEN);
	clr();

	//user login
	login();
	clr();

	int choice;
	menu(choice);


	printf("working");



	//change text color back to white
	printf("%s",AC_WHITE);
	return 0;
}

int menu(int choice)
{
	printf("1) Add Password\n2) View Password\n3) Modify Password\n\n4) About\n5) Exit\n\n|>>");
	scanf("%d", choice);
}