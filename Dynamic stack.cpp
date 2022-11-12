#include<iostream>
using namespace std;

struct stack
{
	int info;
	stack*next;
};
stack*newn, *top=NULL, *bottom=NULL, *temp;
int n=0,ch,ch1;

void getnode();
void push();
void pop();
void traverse();


int main()
{
	cout<<"\n This program is created by Divyanshi Bargal of CI-1(2nd year), Roll no-66 \n";
	cout<<"\n Operations on stack \n";
	do
	{
		cout<<"\n 1.Push \t 2.Pop \t 3.Traverse \n Enter your choice \t";
		cin>>ch;
		if(ch==1)
		{
			push();
			traverse();
		}
		else if(ch==2)
		{
			pop();
			traverse();
		}
		else if(ch==3)
		{
			traverse;
		}
		else
		{
			cout<<"\n Invalid choice \n";
		}
		cout<<"\n Press 1 to continue";
		cin>>ch1;
	}
	while(ch1==1);
	cout<<"Thank you for your valueable time";
	return 0;
}

void getnode()
{
	newn=new stack;
	cout<<"\n Enter element for node";
	cin>>newn->info;
	newn->next=NULL;
}

void push()
{
	getnode();
	cout<<"\n Adding elements";
	if(bottom==NULL)
	{
		top=newn;
		bottom=newn;
		n++;
		cout<<"\n Empty Stack \n";
	}
	else
	{
      top->next=newn;
      top=newn;
      n++;
    }
}

void pop()
{
	if(top==NULL)
	  {
	   cout<<"\n Underflow \n";	
	  }
	  else if(top==bottom)
	  {
	  	top=NULL;
	  	bottom=NULL;
	  }
	  else
	  {
	    temp=bottom;
	    while(temp->next!=top)
	     {
		   temp=temp->next;
	     }
	     top=temp;
	     top->next=NULL;
	     n--;
      }
  }
  
  
  void traverse()
  {
   cout<<"Number of elements= "<<n<<"\n";
    if(bottom==NULL) 
	cout<<"empty list\n";
    else
    {
     temp=bottom; 
     for(int i=1;i<=n;i++)
     {
	 cout<<temp->info<<" ";      
	 temp=temp->next;
	 }
    }
  }
  


