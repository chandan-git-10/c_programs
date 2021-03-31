#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *root1,*root2;
void add_list1();
void add_list2();
void merge_list();
void display();
void display();


void main()
{
	int choice;
	while(1)
	{
	printf("1.add_list1 2.add_list2 3.merge_list 4.display_list1 5.display_list2 6.quit\n");
	printf("please enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: add_list1();
			break;
		case 2:add_list2();
		        break;
		case 3: merge_list();
			break;
		case 4: display(root1);
			break;
		case 5:display(root2);
		       break;
		case 6: exit(1);
		default: printf("please enter valid choice\n");

	}
	}

}

void add_list1()
{

	struct node *nu,*temp=root1;
	nu=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&nu->data);
	if(root1==NULL)
	{
		root1=nu;
		nu->link=NULL;
	}
	else
	{
		while(temp!=NULL)
		{
			temp=temp->link;
		}
		temp->link=nu;
		nu->link=NULL;
	}
}

void add_list2()
{

        struct node *nu,*temp=root2;
        nu=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&nu->data);
        if(root2==NULL)
        {
                root2=nu;
		nu->link=NULL;
        }
        else
        {
                while(temp!=NULL)
                {
                        temp=temp->link;
                }
                temp->link=nu;
		nu->link=NULL;
        }
}

void merge_list()
{

	struct node *temp=root1;
	if(root1==NULL)
	{
		printf("list1 is empty,no merge needed printing list2:");
		root1=root2;
		display(root1);
	}
	else 
	{
		while(temp!=NULL)
		{
			temp=temp->link;
		}
		temp->link=root2;
		display(root1);
	}
}


void display(struct node *temp)
{
	if(temp==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
		}
	}
}
