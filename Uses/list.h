#include <stdio.h>
#include <stdlib.h>
//info can be anything as long as x is the same data structure.
struct node{
int info;
struct node *next;
};typedef struct node *nodeptr;
struct nodesqrd{
int info;
struct node *nextnode;
struct nodesqrd *nexthead;
};typedef struct nodesqrd *nodeptrsqrd;
nodeptr getnode(){
	nodeptr p;
	p=(nodeptr)malloc(sizeof(struct node));
	return p;
}
nodeptrsqrd getnodesqrd(){
	nodeptrsqrd p;
	p=(nodeptrsqrd)malloc(sizeof(struct nodesqrd));
	return p;
}
void freenode(nodeptr p) {
	free(p);
}
//x is here                 |
//                          v
void insafter(nodeptr p,int x){
	nodeptr q;
	if (p== NULL){
		printf("No Insertion");
	}
	else{
		q=getnode();
		q->info=x;
		q->next = p->next;
		p->next = q;
	}
}
void insaftersqrdhead(nodeptrsqrd p){
	nodeptrsqrd q;
	if (p== NULL){
		printf("No Insertion");
	}
	else{
		q=getnodesqrd();
		
		q->nextnode = p->nextnode;
		p->nexthead = q;
	}
}
void insaftersqrdnode(nodeptrsqrd p){
	nodeptrsqrd q;
	if (p== NULL){
		printf("No Insertion");
	}
	else{
		q=getnodesqrd();
		
		q->nexthead = p->nexthead;
		p->nexthead = q;
	}
}
void delafter(nodeptr p){
	if (p== NULL){
		printf("No Deletion");
	}
	else{
		p->next=p->next->next;
	}
}
void printlist(nodeptr head){
	nodeptr print;
			if(head->next!=NULL){
		printf("\n");
		print=head->next;
		while(print!=NULL){
			printf("%d\n", print->info);
			print=print->next;
		}
			}
		else{
			printf("No Elements");
		}
}
void printelement(nodeptr head){
	nodeptr print;
	int element;
			int may_print=1;
		printf("Which element?\n");
		scanf("%d", &element);
		print=head;
		for(int i=0;i<element;i++){
			if(print->next!=NULL){
				print=print->next;
			}
			else{printf("There aren't that many elements");may_print=0;}
		}
		if(may_print==1){
		printf("%d", print->info);
			}
}
void printelementcount(nodeptr head){
	nodeptr print;
		int	count=0;
		print=head;
		while(print!=NULL){
				print=print->next;
				count++;
		}
		printf("\n%d", count-1);
} 

void add(nodeptr headp,int element){
	nodeptr print;
		if(headp->next!=NULL){
		print=headp;
		while(print->next!=NULL){
				print=print->next;
		}
		insafter(print,element);
			}
		else{
			insafter(headp,element);
		}
	}