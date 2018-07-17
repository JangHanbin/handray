#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list* next;
};
void list_init(struct list* a1)
{

	a1->next=NULL;
	a1=&*(a1->next);
}
void list_add_to_tail(struct list* a1,int a2)
{
	if(!a1->next)
	{
		(a1->next=(struct list*)malloc(16));
		a1->next->data=a2;
		(a1->next)->next=NULL;
		a1->data=a1->next;
	}else{
		a1->next->next=(struct list*)malloc(16);
		a1->next->next->data=a2;
		a1->next->next->next=NULL;
		a1->next=a1->next->next;

	}

}

void list_print_all(struct list* a1)
{
	struct list* v1;
	for(v1=a1; v1!=NULL; v1=v1->next)
		printf("%d\n",a1->data);
}

int main()
{
	struct list v1;
	list_init(&v1);
	list_add_to_tail(&v1,1);
	list_add_to_tail(&v1,2);
	list_add_to_tail(&v1,3);
	list_print_all(&v1);
	return 0;

}
