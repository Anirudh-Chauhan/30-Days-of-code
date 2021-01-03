#include<iostream>
using namespace std;
#define n 10  
struct stack {
	char a[n];
	int top;
}stk;

bool isempty(){
	if(top==-1)
	{
		return true;
	}
	return false;
}

bool isoperand(char x){
	return (x>='a' && x<='z') || (x>='A' && x<='Z');
}

int precendence(char x){
	switch(x){
		case +:
		case -: 
		      return 1;
		case *:
		case /:
		 	  return 2;
		case ^:
			  return 3;     
	}
	return -1;
}

void push(int item)
{
	stk->a[top++]=item;
}
char pop()
{
	if (!isempty())
	    return stk->a[top--];
	return '$';
}
char peep(){
	return stk->a[top];
}
struct stack *createlist(){
	stk->top=-1;
	return stk;
}
void infixtopostfix(*char srt){	
	stk = createlist();
	if(isempty()){
		return;
	}
	for(int i=0,k=-1;str[i];i++){
		if(isoperand(i)){
			
		}
	}

}

int main()
 { 
 	char x='a+b';
 	infixtopostfix(x);
 	return 0;
 }
