#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addMov();
void dispMov();
void modMov();
void findMov();
void delMov();

struct book
{
	int mnum;
	char cname[30];
	char mname[30];
	char mdate[50];
	int mtime;
	char ttype[30];
	int guestsnum;
	int housenum;
	int fee;
};

void main()
{	
	int option;
	printf("\n\t*** Welcome to HK Grand SPACE Movie Ticketing Management System 2017 ***\n");
	printf("\n\t*** This system is developed by CCIT4020 CLass No.CL-?? Group No.?? ***\n");
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
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				addMov(); /* Add New Movie Ticketing Records */
				break;
			case 2:
				dispMov(); /* Display All Movie Ticketing Records */
				break;
			case 3:
				modMov(); /* Modify Movie Ticketing Records */
				break;
			case 4:
				findMov(); /* Search Movie Ticketing Records */
				break;
			case 5:
				delMov(); /* Delete Movie Ticketing Records */
				break;
			case 6:
				printf(" See you next time :)");
				exit(0);
				break;
			default:
				printf(" Please select a correct number (1-6)!");
		}
	} while(option!='6');
}

void addMov()
{
	char op, ph;
	FILE *fp;
	struct book b;
	printf("Enetr Movie Booking Number (XXXX): ");	
	scanf("%d",&b.mnum);
	printf("Enetr Name of Customer: ");	
	scanf("%s",b.cname);
	printf("Enetr Name of Movie: ");	
	scanf("%s",b.mname);
	printf("Enetr Movie Schedule (DD-MM-YYYY): ");	
	scanf("%s",b.mdate);
	printf("Enetr Time (XXXX):");	
	scanf("%d",&b.mtime);
	printf("Enetr Number of Guests: ");	
	scanf("%d",&b.guestsnum);
	printf("Enter House Number: ");
	scanf("%d",&b.housenum);
	printf("Enter Ticket Type: ");
	scanf("%s",b.ttype);
	printf("Enter Total Fee: ");
	scanf("%d",&b.fee);

	fp=fopen("ticket.txt","a");
	if(fp == NULL)
	{
		printf("File not found!");
	}
	else
	{
		fprintf(fp,"%d\n%s\n%s\n%s\n%d\n%d\n%d\n%s\n%d\n\n",b.mnum,b.cname,b.mname,b.mdate,b.mtime,b.guestsnum,b.housenum,b.ttype,b.fee);
		printf("Record insert sucessful!");
	}
		printf("\n");
	fclose(fp);
	
	do{
	printf("Add another record (y/n)?");
	scanf("%s",&op);
	switch(op)
	{
		case 'y':
			printf("\n");
			addMov();
		case 'n':
			printf("\n");
			main();
		default:
				printf("Please select (y) or (n)!\n");
	}}while(op!='n');
}

void dispMov()
{
	char ch;
	FILE *fp;
	
	printf("\n");
	fp = fopen("ticket.txt","r");
	if(fp == NULL)
	{
		printf("File not found!");
		exit(1);
	}
	else
	{	
		while( ( ch = fgetc(fp) ) != EOF )
		{
			printf("%c",ch);
		}
	}
	fclose(fp);	
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
