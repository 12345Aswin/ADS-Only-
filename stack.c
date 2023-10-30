#include<stdio.h>
int stack[100],choice,n,s,top,x,i,flag=0;
void push(void);
void pop(void);
void display(void);
void search(void);
int main()
{
	top=-1;
	printf("\n Enter the size of STACK[MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.SEARCH\n\t 5.EXIT POINT");
	do
	{
		printf("\n Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				search();
				break;
			}
			case 5:
			{
				printf("\n\tEXIT POINT");
				break;
			}
			default:
			{
				printf("\n\t Enter a valid choice(1/2/3/4)");
			}

		}
	}
while(choice!=5);
return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\tSTACK is OVER FLOW");

	}	
	else
	{
		printf("Enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t Stack is UNDER FLOW");
	}
	else
	{
		printf("\n\t The popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n The elements in STACK \n");
		for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
		printf("\n Press Next Choice");
	}
	else
	{
		printf("\n The STACK is empty");
	}

}
void search ()
{
printf("\n\t Enter the element to be searched\n\t");
scanf("%d",&s);
for(i=top;i>=0;i--)
if(stack[i]==s)
{
flag=1;
break;
}
else
{
flag=0;
}
if(flag==1)
{
printf("searched element found");
}
else
{
printf("searched element not found");
}
}


		
