#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include "find.h"
#include "chat.h"
#include<windows.h>
#include<MMsystem.h>
#include<math.h>

struct node
{
	char qus[1000];
	char ans[1000];
	int coe;
	int exp;
	struct node* next;
}*a, *b, *temp=NULL, *h1, *head1, *head2, *h2, *poly1, *poly2, *poly, *head;

char s[1000];
FILE *ptr;
char infix[50], postfix[50];
long int stack[50];
int top,ji;

// voice...
	char speak[100];

int check(char* str, char* wrd) {

	int i, j, flag, n, m;
	n = strlen(str);	// length of str
	m = strlen(wrd);	// length of wrd

	if (m > n)
		return 0;

	while (i < n) {
		j = 0;
		while (i < n && j < m && str[i] == wrd[j]) {
			++i;
			++j;
		}

		if (( i == n || str[i] == ' ') && j == m)
			return 1;

		while (i < n && str[i] != ' ') {
			++i;
		}
		++i;
	}
	return 0;
}

struct node* newqus(char c[100]) //creating node...
{
	temp =  (struct node *)malloc(sizeof(struct node));
	strcpy(temp->qus,c);
	temp->next=NULL;
	
	if(head1==NULL)
	{
		head1=temp;
		a=head1;
	}
	else
	{
		a=head1;
		while(a->next!=NULL)
			a=a->next;
		a->next = temp;
	}
}

struct node* newans(char c[100]) //creating node...
{
	temp =  (struct node *)malloc(sizeof(struct node));
	strcpy(temp->ans,c);
	temp->next=NULL;
	
	if(head2==NULL)
	{
		head2=temp;
		b=head2;
	}
	else
	{
		b=head2;
		while(b->next!=NULL)
			b=b->next;
		b->next = temp;
	}
}

int print()
{
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
    printf("\n   <User>   ");
	gets(s);
    newqus(s);
} 

int speak_dis(char hint[100])
{
	strcpy(speak,"espeak \"");
	strcat(speak,hint);
	system(speak) ;
}

int ans(int c)
{
	ptr = fopen("weather.txt","r");
	int p,n, n1,m, i, cal,c1,c2;
	system("cls");
	printf("\n <e->end> \t<h->history>");
	printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
	switch(c)
	{
		case 3000:
		  	printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c Ignore negativities... %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c Be patient at all time %c",179,179);
			printf("\n       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Ignore negativities... around you... . Be patien at all time...");
			break;
		case 2000:
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c Thank you,\t\t    %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c Keep rocking your day...   %c",179,179);
			printf("\n       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Thank you, keep rocking your day");
			return 0;
			break;
		case 2001:
			a=h1;
			b=h2;
			while(a!=NULL && b!=NULL)
			{
				printf("\n %s => %s",a->qus,b->ans);
				a=a->next;
				b=b->next;
			}
			speak_dis("Your history");
			break;
		case 2002:
			newans("Call not connected!!!");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c Connecting... %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			call();
			system("cls");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c Sorry, not reachable %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("sorry..., call... not connected...");
			getch();
			system("cls");
			return;
			break;
		case 2100:
			newans("I'm Shanli, I'm your assistant");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  I'm Shanli, I'm your assistant  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("I'm Shanli..., I'm... your assisstant...");
			break;
		case 0:
			newans("Sorry, I didn't get you...");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c Sorry, I didn't get you... %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("sorry..., I didn't... get you");
			break;
		case 1:
			newans("hi !!!");
			printf("\n%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c hi !!! %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,217);
			speak_dis("hi...");
			break;
		case 2:
			newans("I'm fine");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c I'm fine %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("I'm... fine...");
			break;
		case 3:
			newans("bye, have a great day");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c bye, have a great day ^_^ %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			printf("\n\t\t\t\t\t\t%s",a->qus);
			speak_dis("bye, have a great... day....");
			return 0;
			break;
		case 5:
			newans("I'm just a AI ^_^");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c I'm just a AI ^_^ %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("I'm just A...I...");
			break;
		case 6:
			newans("Date");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  The date is %s %c",179,__DATE__ ,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("The date...");
			break;
		case 66:
			newans("Time");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  The time is %s %c",179,__TIME__ ,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("The time...");
			break;
		case 666:
			newans("date and time");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  The date and time is %s, %s %c",179,__DATE__,__TIME__ ,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("The date... and time is...");
			break;
		case 8:
			newans("Our PM is Narendra Modi");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Our PM is Narendra Modi  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Our prime minister is Narendra modi..");
			break;
		case 9:
			newans("Delhi is capital of India");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Delhi is capital of India  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Our capital is Delhi...");
			break;
		case 10:
			newans("Tiger is national animal of India");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Tiger is national animal of India  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("tiger is our national animal...");
			break;
		case 11:
			newans("Peacock is national bird of India");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Peacock is national bird of India  %c",179,179);
			printf("\n %c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("peacock is national bird of india...");
			break;
		case 12:
			newans("Rashmika Mandanna is India's natioanl crush");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Rashmika Mandanna is India's natioanl crush  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Rashmika Mandhana... is India's national crush...");
			break;
		case 13:
			newans("Chennai is the capital of tamilnadu");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Chennai is the capital of tamilnadu  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Chennai is the capital of tamilnadu");
			break;
		case 14:
			newans("Our capital is delhi");
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Our capital is Delhi  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Our capital is Delhi...");
			break;
		
		case 16:
			newans("Theme change");
			printf("select your option...\n 1-> Yellow-black\n 2-> White-black\n 3-> Red-black\n 4-> Green-black\n 5-> Default ");
			scanf("%d",&n1);
			if(n1==1)
			{
				system("COLOR E0");
			}
			else if(n1==2)
			{
				system("COLOR F0");
			}
			else if(n1==3)
			{
				system("COLOR C0");
			}
			else if(n1==4)
			{
				system("COLOR A0");
			}
			else
			{
				system("COLOR 07");
			}
			printf("%c   %c",30,30);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
			printf("\n%c%c%c%c%c",219,223,219,223,219);printf(" <%c  Theme changed  %c",179,179);
			printf("\n%c%c%c%c%c",219,219,220,219,219);printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
			speak_dis("Theme changed...");
			getch(); 
			break;
		case 1001:
			p=fgetc(ptr);
			if(p=='s')
			{
				printf("Its Summer !!!");
				speak_dis("Its summer");
			}
			else if(p=='w')
			{
				printf("Its Winter...");
				speak_dis("Its winter");
			}
			else if(p=='r')
			{
				printf("Its Raining ///");
				speak_dis("Its raining");
			}
			else if(p==c)
			{
				printf("Its Cold out there ;)");
				speak_dis("Its cold out there");
			}
	}
	printf("\n\t\t\t\t\t\t%s",s);
}

int main()
{
	char as[100];
    int i=1,c;
    while(i!=0)
    {
    	a=(struct node *)malloc(sizeof(struct node));
    	print();
    	c=chat(s);
    	i=ans(c);
	}
}
