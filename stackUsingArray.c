// Implementation of Stack using Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main() // never use void win32 linux mac 
{
   int value, choice;
   //clrscr(); system(cls);   works only on DOS disk operating system
      while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
    return 0;
}
void push(int value){
   if(top == SIZE-1)  // stack size 10 [0-9]
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;  // top -1 top=0
      stack[top] = value;  // stack[0]
      printf("\nInsertion success!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }

}






