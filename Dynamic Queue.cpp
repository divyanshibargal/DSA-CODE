#include<iostream>
using namespace std;

struct Q
{
	int info;
	Q*next;
};
Q*newn, *temp, *front=NULL, *rear=NULL;
int count=0, ch1, ch2;

void Enqueue();
void Dequeue();
void getnode();
void traverse();

int main()
{
	cout<<"\n This program is created by Divyanshi Bargal of CI-1(2nd year), Roll no-66 \n";
	cout<<"Operations on Queue\n";
	do
	{
		cout<<"1.Insert\t 2.Delete \t 3.Traverse\n Enter your choice\t"; 
		cin>>ch1;
		if(ch1==1) 
		Enqueue();
		else if(ch1==2) 
		Dequeue();
		else if(ch1==3) 
		traverse();
		else cout<<"\n Invalid Choice \n";
		cout<<"\n Press 1 to continue"; 
		cin>>ch2;
	}
	while(ch2==1);
	return 0;
}

void getnode()
{
 newn=new Q;
 cout<<"Enter Data"; 
 cin>>newn->info; 
 newn->next=NULL;
}

void Enqueue()
{   getnode(); 
	if(newn==NULL) cout<<"\n Overflow \n";
	else if(front==NULL) 
	{
	 ++count; 
	 front=newn; 
	 rear=newn; 
	 traverse(); 
	 }
	else  
	{
	 ++count; 
	 rear->next=newn; 
	 rear=newn;  
	 traverse();
	}
}

void Dequeue()
{
if(front==NULL) 
cout<<"\n Underflow\n";
else
{ 
  --count; 
  cout<<"\n The Element deleted is"<<front->info; 
  front=front->next; 
  traverse();
}
}

void traverse()
{
cout<<"\n The Queue is\t";
if(front==NULL) 
 cout<<"\n Empty Queue";
else
{
 temp=front;  
 while(temp!=NULL) 
 {
   cout<<temp->info<<" "; 
   temp=temp->next;
   }
}
}
