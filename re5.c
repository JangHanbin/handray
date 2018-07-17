#include <stdio.h>
#include <stdlib.h>

struct list{
	struct list* prev;
	struct list* next;
};
void list_init(struct list* a1)
{

	a1 -> next = NULL;
	a1 -> prev = a1->next;
}
void list_add_to_tail(struct list* a1,int a2)
{
	if(!a1->next)
	{
		a1->next=(struct list*)malloc(16);
//		(a1->prev)=a2;
		(a1->next)->next=NULL;
		a1=a1->next;
	}else{
		(a1->next)->next=(struct list*)malloc(16);
//		a1->next->next=a2;
		a1->next->next->next=NULL;
		a1->next=a1->next->next;

	}

}


int main()
{
	struct list* v1;
	list_init(v1);
	list_add_to_tail(v1,1);
	list_add_to_tail(v1,2);
	list_add_to_tail(v1,3);

	return 0;

}
