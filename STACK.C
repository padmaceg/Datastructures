#include<stdio.h>
#include<conio.h>
int size=0;
int a[100];
void push(int no)
{
    if(size==99){
       printf("\nThe stack is full..");
       return;
       }
    else
       a[size++]=no;
}
void pop()
{
	int i;
    if(size<=0) {
       printf("The stack is empty..");
       return;
	}
    else
	{
	    printf("\n Last value %d is deleted..",a[size-1]);
	    size--;
	}
}
void disp()
{
	int i;
	for(i=0;i<size;i++)
	  printf("\t%d",a[i]);
}
void main()
{
	int x,ch,ch1;
	clrscr();
	do{
	printf("\nEnter ur choice : \n1.Push\n2.Pop");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nEnter the number to push : ");
		scanf("%d",&x);
		push(x);
		//disp();
	}
	else if(ch==2)
	{
		pop();
		//disp();
	}
	disp();
	printf("\nDo u want to continue : 1.s 2.n");
	scanf("%d",&ch1);
	}while(ch1!=2);
	getch();
}