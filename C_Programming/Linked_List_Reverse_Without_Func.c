#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};

int main()
{
	struct node* head = NULL;
	struct node* temp;
	int n , data;

	printf("Enter the number of elements:");
	scanf("%d",&n);

	for(int i = 0;i < n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the elements%d:",i+1);
		scanf("%d",&temp -> data);

		temp -> next = head;
		head = temp;
	}

	printf("Linked list in Reverse String:");
	while(head != NULL)
	{
		printf("%d ",head -> data);
		head = head -> next;
	}
	printf("\n");

	return 0;
}



