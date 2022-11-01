#include <conio.h>
#include <dos.h> 
#include <stdio.h>
#include <string.h>
 
void main()
{
 
	char pwd[9];
	int i;
	system("cls");
 
	printf("Enter Password: ");
	for (i = 0; i < 8; i++) {
		pwd[i] = getch();
		printf("*");
	}
	pwd[i] = '\0';
	printf("\n");
 
	printf("Entered password: ");
	for (i = 0; pwd[i] != '\0'; i++)
		printf("%c", pwd[i]);
 
 
	getch();
}