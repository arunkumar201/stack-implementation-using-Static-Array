#include<stdio.h>
#include<stdlib.h>
#define N 10
int top=-1;
int stack[N];
void push();
void pop();
void peek();
void display();
void change();

void push()
{
  int data;
  
 if(top==N-1)
 {
  printf("\nstack is full or in overflow condion");
 }
 else
 {  printf("enter the data to be insert in stack");
     scanf("%d",&data);
    top=top+1;
    stack[top]=data;
  printf("\ninsertion of data in stack successfully");
 }
}
void pop()
{
 if(top==-1)
 { printf("\nstack is Empty or stack is underflow state");
 }
 else
 { printf("\nremoved item is : %d",stack[top]);
   printf("\npop operation is  successfully ");
    top=top-1;

 }
 
}
void display()
{
 if(top==-1)
 {
   printf("\nstack is Empty or underflow state");
 }
 else
 {
  int i;
  printf("\nall elements of stack ");
  for(i=0;i<=top;i++)
  {
   printf("\n%d",stack[i]);
  }
 }
 
 }
 void peek()
 {
  if(top==-1)
  printf("\nstack is Empty");
  else
  printf("\npeek data item:%d",stack[top]);
  
 }
 void main()
 {
  int option;
 while(1)
 {
  printf("\nchoose option");
  printf("\n 1.push");
  printf("\n 1.push"); 
  printf("\n 2.pop");
  printf("\n 3.peek");
  printf("\n 4.display");
  printf("\n 5.Exit");
  printf("\nenter your choice:");
  scanf("%d",&option);
  switch(option)
  {
   case 1 : push();
           break;
   case 2 : pop();
         break;
   case 3 : peek();
           break;
           
   case 4 :display();
           break;
   case 5 : exit(1);
   default : printf("\ninvalid choice \n");
  }

 }
  
}
 
