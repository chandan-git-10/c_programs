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
void rev_list();
void find_mid();
void sort_ll();
void len();
void srch_dt(int);
void main()
{
	int choice,num;
	while(1)
	{
	printf("1.add_at_end 2.add_at_beg 3.delete_at_end 4.delete_at_beg\n");
        printf("5.display 6.quit 7.delete_alrt 8.reverse_list 9.find_mid\n");
	printf("10.sort_ll 11.len 12.srch_dt\n");
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
		case 7: delete_alrt();
			break;
		case 9: find_mid();
			break;
		case 8: rev_list();
			break;
		case 10: sort_ll();
			 break;
		case 11: len();
			 break;
		case 12:printf("enter num to srch in ll:");
			scanf("%d",&num);
			srch_dt(num);
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
	struct node *prev=root,*curr=root->link;
	if(root==NULL)
	{
		printf("linked list is empty\n");
	}
	else 
	{
		while(prev->link !=NULL)
		{
			prev->link=curr->link;
			free(curr);
			prev=prev->link;
			if(prev->link!=NULL)
				curr=prev->link;
		}

	}
}


void rev_list()
{
	struct node *prev,*curr,*next;
	prev=NULL,curr=root;
	if(root==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(curr!=NULL)
		{
			next=curr->link;
			curr->link=prev;
			prev=curr;
			curr=next;
			
		}
	}
	root=prev;
}


void find_mid()
{
	struct node *fptr=root,*sptr=root;
	if (root==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(fptr->link!=NULL)
		{
			fptr=fptr->link->link;
			sptr=sptr->link;
		}
		printf("the middle node is data=%d and link=%p\n",sptr->data,sptr->link);

	}
}

void sort_ll()
{	
	int temp;
	struct node *prev=root,*curr;
	if(root==NULL)
	{
		printf("list is empty\n");
	}
	else 
	{
	
		while(prev!=NULL)
		{
			curr=prev->link;
			while(curr!=NULL)
			{
				if(prev->data > curr->data)
				{
					temp=prev->data;
					prev->data=curr->data;
					curr->data=temp;			
				}
				curr=curr->link;

			}
			prev=prev->link;
		}
	
	}
}
void len()
{
	int count=0;
	struct node *temp=root;
	if (root==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			temp=temp->link;
			count++;
		}
	}
	printf("lenght of ll: %d\n",count);
}


void srch_dt(int num)
{
	int count=1;
	struct node *temp=root;
	if(root==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data == num)
			{
				break;
			}
			count++;
			temp=temp->link;
		}
		printf("data matched:%d at pos:%d\n",temp->data,count);
	}
}
