#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;

// FUNCTIONS IN THIS FILE
struct Node *createNodeList(int n);
void displayList(struct Node *START);
struct Node *start_to_end(struct Node *START);
struct Node *append(struct Node *START1,struct Node *START2,int n,int m);
struct Node *at_beg(struct Node *START);
struct Node *at_end(struct Node *START);
struct Node *at_somewhere(struct Node *START);
struct Node *del_at_beg(struct Node *START);
struct Node *del_at_somewhere(struct Node *START);
struct Node *del_at_end(struct Node *START);
struct Node *reverse_list(struct Node *START);


struct Node
{
    int INFO;                        
    struct Node *NEXT;           
};

struct Node *createNodeList(int n)
{
    struct Node * START=NULL;
	struct Node *New_Node, *temp;
    int num, i;
    if (n<=0)         
    	return NULL;
    START = (struct Node *)malloc(sizeof(struct Node));
    if(START == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for Node 1 : ");
        scanf("%d", &num);
        START->INFO = num;
        START->NEXT = NULL; 
        temp = START;

        for(i=2; i<=n; i++)
        {
            New_Node = (struct Node *)malloc(sizeof(struct Node));
            if(New_Node == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for Node %d : ", i);
                scanf(" %d", &num);

                New_Node->INFO = num;      
                New_Node->NEXT = NULL; 

                temp->NEXT = New_Node; 
                temp = temp->NEXT;
            }
        }
    }
    return START;
}
void displayList(struct Node *START)
{
    struct Node *temp;
    if(START == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {   printf("\nLinked list is: " );
        temp = START;
        while(temp != NULL)
        {
            printf("%d ", temp->INFO);			   
            temp = temp->NEXT;                     
        }
    }
}
struct Node *selsort(struct Node *START,int n){
int mini;

struct Node *t,*temp;
   for(temp=START; temp->NEXT !=NULL; temp=temp->NEXT)
   {
        mini=temp->INFO;
    for(t=temp->NEXT ; t != NULL ;t=t->NEXT)
   {
	if(mini>t->INFO)       
	 {
		mini=t->INFO;
     } 
    }
    int t1=mini;
    t->INFO=temp->INFO;
    temp->INFO=t1; 	
   }
   return START;
   
}
struct Node *swap(struct Node *START,int n){
    
	int t1=mini;
    t->INFO=temp->INFO;
    temp->INFO=t1;
	return START 
}
int main(){
int c,n;
cout<<"Enter the size of the list:";
cin>>n;
struct Node *START=createNodeList(n);
displayList(START);
displayList(selsort(START, n));
return 0;
}
