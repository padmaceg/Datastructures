#include<stdio.h>
#include<conio.h>
void main()
{
	int tot_match=21,user,comp,c;
	clrscr();
	do{
	    do{
		printf("\nTake matches between 1 to 4 : ");
		scanf("%d",&user);
		c=0;
		if(user<1||user>4)
		{
			printf("\nPlease take matches between 1 to 4..");
			c=1;
		}
	      }while(c==1);
		printf("\n-> You have taken %d matches.",user);
		tot_match=tot_match-user;
		if(tot_match==1)
		{
			printf("\nComputer have to take the last 1 stick.You won.");
		}
		comp=5-user;
		printf("\n-> Computer have taken %d matches.",comp);
		tot_match=tot_match-comp;
		printf("\n\nTotal number of matches left : %d",tot_match);
		if(tot_match==1)
		{
			printf("\n\nYou have to take the last 1 stick.Computer wins.");
		}
	 }while(tot_match!=1);
	getch();

}