
#include<stdio.h>

struct node
{

int data;
struct node *nxt;

}*f,*r;

void insert()
{
	struct node *ptr;
	int x;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
		printf("\nOverflow\n");
	else
	{
		printf("\nenter val:\t");
		scanf("%d",&x);
		ptr->data=x;
		if(f==NULL)
		{
			f=ptr;
			r=ptr;
			f->nxt=NULL;
			r->nxt=NULL;
		}
		else
		{
			r->nxt=ptr;
			r=ptr;
			r->nxt=NULL;
		}
	}
}

void delete()
{
	struct node *ptr;
	if(f==NULL)
		printf("\nOverflow\n");
	else
	{
		ptr=f;
		f=f->nxt;
		free(ptr);
	}

}

void display()
{
	struct node *ptr;
	ptr=f;
	if(f==NULL)
		printf("\nEmpty\n");
	else
	{
		printf("\nvalues\n");
		while(ptr!=NULL)
		{
			printf("\t%d",ptr->data);
			ptr=ptr->nxt;
		}
	}
}

void main()
{
	int ch;
	while(ch!=4)
	{
		printf("\n1.Insert\t2.Delete\t3.Display\t4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
				break;
			case 2:delete();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
			default:
				printf("\nInvalid\n");
			
		}
	}
}

