#include<stdio.h>

int push(int stack[],int top);
int pop(int stack[],int top);
int Display(int stack[],int top);
int peek(int stack[],int top);

#define Max 10
int main()
{
 int stack[Max],top=-1,x=1;
  do
    {
     printf("\n Menu \n 1 push \n 2 pop \n3 Display  \n 4 Peek \n 5 exit");
     printf("\nEnter your choice = ");
     scanf("%d",&x);
    switch(x)
          {
              case 1:
              top= push(stack,top);
             break;
            case 2:
             top= pop(stack,top);
             break;
               case 3:
                top= Display(stack,top);
             break;
               case 4:
                top= peek(stack,top);
              break;
             case 5:
             x=0;
             break;
          }

     }while(x);

}

int push(int stack[],int top)
{
    if(top==Max-1){
        printf("Stack is full");
        return top;

    }
    else
    {
      printf("\n Enter the element = ");
      scanf("%d",&stack[++top]);
      return top;
    }
}

int pop(int stack[],int top)
{
    if(top==-1){
      printf("Stack is empty");
      return -1;
    }

    else{
      printf("\n Deleted element is : ");
      printf("%d",stack[top--]);
       return top;
    }
}

int Display(int stack[],int top){
  if(top==-1){
        printf("Stack is empty");
      return -1;
  }

  else{
      int temp=top;
      printf("\nElements of stack are : ");
      while(temp>-1){
          printf("%d ",stack[temp--]);
      }
    return top;
  }

}

int peek(int stack[],int top){
  if(top==-1){
        printf("Stack is empty");
      return -1;
   }
  else{

        printf("The top most element is = %d",stack[top]);
        return top;
  }

}
