#include<iostream>
using namespace std;

struct node{
	int info;
	node *nextnode;
};
node *newnode,*start=NULL, *current, *temp;
int cnt=0,ch,ch1,ch2,ch3;
void emptylist();
void getnode();
void display();
void insertlast();
void insertfirst();
void insertatpos();
void deletefirst();
void deletelast();
void deletefrompos();

int main(){
cout<<"\n\n operations on a list\n";
do
{
	cout<<"\n1.insertion \t 2.Deletion \t 3.Traversing \t Enter your choice \t";
	cin>>ch;
	switch(ch)	
{
case 1: 
{
	cout<<"\n\nCreating a list by adding a node\n\n";
	getnode();
    if(start==NULL)
	{
	emptylist();
	}
    else
	{
	cout<<"\n1.Insertion at first position\n2.Insertion at last position\n3.Insertion at particular position \nEnter your choice\t"; 
	cin>>ch1;
    if(ch1==1) 
	insertfirst();       
	else if(ch1==2) 
	insertlast();
    else if(ch1==3) 
	insertatpos();  
	else {
	cout<<"Invalid choice"; 
	break; 
	}
    } 
	display();
	break;}
  case 2: 
{
cout<<"\n\nDeleting nodes \n\n";
if(start==NULL) 
 {
cout<<"List is empty, no node exist to get deleted";
}
  else
 {
cout<<"\n1.deletion from first position\n2.deletion from last position\n3.deletion from particular position \nEnter your choice\n"; 
cin>>ch2; 
if(ch2==1) 
deletefirst();       
     else if(ch2==2) 
	 deletelast();
  else if(ch2==3) 
  deletefrompos();  
   else { 
   cout<<"Invalid choice";  
   break; 
    }
 }
display();
break;	
}
case 3:display();
default : cout<<"Invalid choice";
}
cout<<"\npress 1 if you want to perform more operations on linked list: \n"; 
cin >>ch3;	
}
while(ch3==1);
cout<<"Thank You for your valuable time!!";

 return 0;
}
void emptylist()
{
cout<<"\nempty list , creating list by inserting very First node";
++cnt;
start=newnode;
current=newnode;
}
 void getnode()
{
newnode=new node;
cout<<"Enter element for node";
cin>>newnode->info; 
newnode->nextnode=NULL;	
}
 void display()
{
	cout<<"\n************\nthe generated list is\n";
cout<<"\nNumber of nodes= "<<cnt<<"\n";
if(start==NULL) 
cout<<"\nempty list\n";
else
{
temp=start; 
while(temp!=NULL)
{
cout<<temp->info<<endl;     
 temp=temp->nextnode;
}
cout<<"\n\n************\n\n";
}
}
 void insertfirst()
{
	cout<<"\nAdding nodes before 1st node";
	++cnt;
	newnode->nextnode=start;
	start= newnode;
	
}
void insertlast()
{
	cout<<"\n Adding nodes after last node";
	++cnt;
	current->nextnode=newnode;
	current =newnode;
	
}
void insertatpos()
{
	int pos;
	cout<<"\n Enter the position ";
	cin>>pos;
	if(pos==1){
		insertfirst();	
	}
	else if(pos==(cnt+1)){
		insertlast();
	}
	else if(pos>1 && pos<=cnt){
		++cnt;
		temp=start;
		for(int i=1;i<pos-1;i++)
		temp=temp->nextnode;
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
	}
	else if(pos<1 || pos>(cnt+1))
	{
		cout<<"\n Inavlid position entered \n";
	}
}
void deletefirst()
{
	cout<<"\n deleting first node ";
	cnt--;
	start= start->nextnode;
}
void deletelast()
{
	cout<<"\n deleting last node ";
	cnt--;
	if(cnt==0)
	{
		current = NULL;
		start = NULL;		
	}
	else 
	{
		temp=start;
		while(temp->nextnode !=current)
		temp=temp->nextnode;
		temp->nextnode=NULL;
		current=temp;
	}
}
void deletefrompos()
{
	int pos;
	cout<<"\n Enter the position ";
	cin>>pos;
	if(pos==1)
	{
		deletefirst();
		
	}
	else if(pos>=1 && pos<=cnt)
	{
		cnt--;
		temp=start;
		for(int i=1;i<pos-1;i++)
		temp=temp->nextnode;
		temp->nextnode=temp->nextnode->nextnode;
	
	if(cnt==1)
	current =start;
}
else if(pos<1 || pos>cnt)
{
	cout<<"\n Invalid position entered \n";	
}
}
