#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
	
};
struct node*createlinkedlist(int n);
struct node*middle_element (struct node*head);
void displaylist(struct node*head);
//struct node*sorting(struct node *head);
// struct node*reverse(struct node*head);
 // struct node*search(struct node*head ,int n);
 // struct node *insert_begin(struct node*head,int x);
void delete_Alt(struct node*head);
void middle(struct node*head);
void node_at_middle(struct node*head);

 
 
 
   int main()
{
	int n=0;
	struct node* head=NULL;
	printf("enter node");
	scanf("%d",&n);
	head=createlinkedlist(n);
//	sorting(head);
   // head=reverse(head);
	//search(head,7);
//	displaylist(head);
	// delete_Alt(head);
	/// displaylist(head);
//	 middle(head);

	displaylist(head);
  node_at_middle(head);
	
   	
}
struct node*createlinkedlist(int n);
{
	
	int i=0;
	struct node*head=NULL;
	struct node*temp=NULL;
	struct node*ptr=NULL;
	for(i=0;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data",i+1);
		scanf("%d",&(temp->data));
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
				ptr=ptr->next;
				ptr->next=temp;
		}
			
		
	}
	return head;
}
void displaylist(struct node*head)
{
	struct node*ptr=head;
	while(ptr!=NULL)
	{
	
	 	printf("%d\t",ptr->data);
			ptr=ptr->next;
    }  
}
struct node*sorting(struct node *head)
	{
		struct node *i=head;
		struct node*j=NULL;
		int temp;
		for(i=head;i->next!=NULL;i=i->next)
		{
			for(j=i->next;j!=NULL;j=j->next)
			{
				if(i->data >
				j->data)
				{
					temp=i->data;
					i->data=j->data;
					j->data=temp;
				}
			}
		}
		return head;
	}
      struct node*reverse(struct node*head)
	
	{
		
		struct node*current = head;
		struct node *prev=NULL;
		struct node*next;
		while(current!=NULL)
		{
			next= current->next;
			current->next=prev;
			prev=current;
			current =next;
		}
		head=prev;
		return head;
		
		
	}
	struct node*search (struct node*head,int n)
	{
		
	struct node*temp1=head;
	int count=0;
	while(temp1!=NULL)
	  {
		count++;
		if(temp1->data==n)
		{
			printf("found :");
			printf("%d",count);
		}
		temp1=temp1->next;
       }
		return head;
		
		
		
	}
	
   void middle(struct node*head)
 {
 	struct node *slow=head;
 	struct node *fast=head;
 	if(head!=NULL)
 	{
 		
 		while(fast!=NULL&& fast->next!=NULL)
 		{
 			fast = fast->next->next;
 			slow =slow->next;
		 }
		 
		 printf("%d\n",slow->data);
	 }
	 
 	
 }
 
 
	void delete_Alt(struct node*head)
{
	if (head == NULL)
		return;

	struct node *t1 = head;
	struct node *t2 = head->next;

	while (t1!= NULL && t2 != NULL)
	{
		
		t1->next = t2->next;
    	free(t2);

		t1 = t1->next;
		if (t1 != NULL)
			t2 = t1->next;
	}

}
void node_at_middle(struct node*head)
{
	int l=0;
	struct node *p=head;
	while(p!=NULL)
	{
		p=p->next;
		l=l+1;
		
	}
	p=head;
	int c=0;
	while(c<l/2)
	{
		p=p->next;
		c=c+1;
	}
	printf("%d",p->data);
}








	
	

