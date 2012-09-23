#include<stdio.h>
#include<conio.h>
int size=0;
int a[100];
void enq(int no)
{
     //int no;

     a[size++]=no;
    // return size;
}
void deq()
{
     int i;
     for(i=0;i<size;i++)
     {
	a[i]=a[i+1];
     }
     size--;
}
void disp()
{
	int i;
     for(i=0;i<size;i++)
       printf("\t%d",a[i]);
}
void main()
{
     int x,c,ch,no;
     //int que[100];
     clrscr();
     do
     {
     printf("\n1.Enqueue\n2.Dequeue : ");
     scanf("%d",&x);
     if(x==1)
     {
	if(size==99)
	   printf("\nStack is full...") ;

	else
	{
	    printf("\nEnter the number : ");
	    scanf("%d",&no);
	    enq(no);
	}
       //	disp(que,size);
     }
     else
     {
	   deq();

     }
       disp();
    printf("\nDo u wnt to conti ? 1.yes 2.no");
    scanf("%d",&ch);
    }while(ch!=2);
     getch();
}