#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *root=NULL;
 
void add_at_beg();
void add_at_end();
void display();
void delete_at_end();
void delete_at_beg();
void delete_alrt();
void main()
{
	int choice;
	while(1)
	{
	printf("1.add_at_end 2.add_at_beg 3.delete_at_end 4.delete_at_beg 5.display 6.quit\n");
	printf("enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add_at_end();
			break;
		case 2:
			add_at_beg();
			break;
		case 3: 
			delete_at_end();
			break;
		case 4:
			delete_at_beg();
			break;
		case 5:
			display();
			break;
		case 6: exit(1);
			break;
		default:
			printf("Please enter the valid choice\n");
	}
	}
}
void add_at_end()
{
	struct node *nu=NULL,*temp=root;
	nu=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&(nu->data));
	nu->link=NULL;
	if(root==NULL)
	{
		root=nu;
	}
	else
	{
		while(temp->link)
		{
			temp=temp->link;
		}

		temp->link=nu;
	}
}

void add_at_beg()
{
	struct node *nu=NULL;
	nu=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&nu->data);
	 nu->link=NULL;
        if(root==NULL)
        {
                root=nu;
        }
	else 
	{
		nu->link=root;
		root=nu;
	}
}

void display()
{
	struct node *temp=root;
	if(root==NULL)
		{
			printf("linked list is empty\n");
		}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}


void delete_at_end()
{
	struct node *temp=root;
	if(root==NULL)
	{
		printf("linked list is empty\n");
	}
	else
	{
		while(temp->link->link)
		{
			
			temp=temp->link;		
		}
			temp->link=NULL;
	

	}
}
 
void delete_at_beg()
{
	struct node *temp=root;
	if(root=NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		root=temp->link;
	}
}


void delete_alrt()
{
	struct node *temp=NULL;
	if(root=NULL)
	{
		printf("linked list is empty\n");
	}
	else 
	{

