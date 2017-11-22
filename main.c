#include <stdio.h>
void addMov();
void dispMov();
void modMov();
void findMov();
void delMov();

int main()
{
	printf("\n\t*** Welcome to HK Grand SPACE Movie Ticketing Management System 2017 ***\n");
	printf("\n\t*** This system is developed by CCIT4020 CLass No.CL-?? Group No.?? ***\n");
	
	char option, phantom;
	
	do
	{
		printf("\n\n--<Basic Functions>--\n");
		printf("\n 1. Add New Movie Ticketing Record(s)\n");
		printf("\n 2. Display All Movie Ticketing Records\n");
		printf("\n 3. Modify Movie Ticketing Record(s)\n");
		printf("\n 4. Search Movie Ticketing Record(s)\n");
		printf("\n 5. Delete Movie Ticketing Record(s)\n");
		printf("\n 6. Quit\n");
		printf("\n What is your option (1-6)? ");
		scanf("%c%c", &option, &phantom);
		switch(option)
		{
			case '1':
				addMov(); /* Add New Movie Ticketing Records function go here*/
				break;
			case '2':
				dispMov(); /* Display All Movie Ticketing Records function go here */
				break;
			case '3':
				modMov(); /* Modify Movie Ticketing Records function go here */
				break;
			case '4':
				findMov(); /* Search Movie Ticketing Records function go here */
				break;
			case '5':
				delMov(); /* Delete Movie Ticketing Records function go here */
				break;
			case '6':
				printf(" See you next time :)");
				break;
			default:
				printf(" Please select a correct number (1-6)!");
		}
	} while(option!='6');
	
	return 0;
}

void addMov()
{
	
}
void dispMov()
{
	
}
void modMov()
{
	
}
void findMov()
{
	
}
void delMov()
{
	
}
