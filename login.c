#include<stdio.h>
//#include<windows.h>
//#include"Dominum.h"
#include<string.h>
#include <conio.h>

#define ENTER 13
#define TAB 9
#define BCKSPC 8


struct user{
	char fullname[50];
	char email[50];
	char password[50];
	char proffession[50];
	char address[50];
	char contact[50];
	char username[50];
};


void takeinput(char ch[50])
{
	fgets(ch,50,stdin);
	ch[strlen(ch) -1] = 0;
}


void generateID(char email[50], char username[50])
{
//abc123@gmail.com

	
	for(int i = 0; i<strlen(email);i++)
	{
		if(email[i] = '@') break;
		else username[i] = email[i];
	}
}

void takepassword(char pwd[50])
{
	int i;
	char ch;
	while(1){
		ch = getch();
		if(ch == ENTER || ch == TAB)
			{
			pwd[i] = '\0';
			break;
			}
			else if(ch == BCKSPC)
			{
				if(i>0)
				{
					i--;
					printf("\b\b");
				}
			}else{
				pwd[i++] = ch;
				printf("* \b");

				}
		}
}

		


int main()
{
//	system("color 0r");

	int opt;
	struct user user;

	printf("\n\t\t\t\t-------WELCOME TO DOMINUM CLUB----------");
	printf("\nPlease chose your operation");
	printf("\n1.Signup");
	printf("\n2.Login");
	printf("\n3.Exit");

	printf("\n\nYour choice:\t");
	scanf("%d",&opt);
	fgetc(stdin);

	switch(opt){
		case 1:
			printf("Enter your full name:\t");
			takeinput(user.fullname);
			printf("Enter your email:\t");
			takeinput(user.email);
			printf("Enter contact:\t");
			takeinput(user.contact);
			printf("Enter password: \t");
			takepassword(user.password);


		}

return 0;
}





























