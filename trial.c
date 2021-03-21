#include<stdlib.h>
#include<stdio.h>
#include<conio.c>
#include<conio2.h>

int main()
{
    char ch;
    clrscr();
    textcolor(WHITE);
    printf("--------------------------------");
    printf("\n1. Name\n2. Surname\n3. Exit\n");
    printf("--------------------------------\n");
    do
    {
        /* code */
        printf("Select what you want to print\n");
        ch=getche();   
    } while (ch<='0' || ch>'3');
    switch(ch){
        case '1':
            clrscr();
            textcolor(YELLOW);
            cprintf("Priyanshu\n");
            delay(2000);
            main();
            
            
        case '2': 
            clrscr();
            textcolor(YELLOW);
            printf("Sahu");
            delay(2000);
            main();
        case '3':
            clrscr();
			delay(700);
			textcolor(RED);
			gotoxy(25,25);
			cprintf("\nA PROJECT BY PRIYANSHU SAHU");
			delay(1500);
			exit(1);
    }
    
    return 0;
}