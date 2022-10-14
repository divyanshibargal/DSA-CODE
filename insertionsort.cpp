// WAP for insertion sort
#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void insertionsort(int a[],int n);
void swap(int &x, int &y);   //pass by refernce
int main()
{
	int n;
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the array elements :"<<endl;
	fillarray(a,n); //function calling 
	cout<<"The unsorted array is :"<<endl;
	displayarray(a,n);
	
	insertionsort(a,n);
	cout<<"\n The sorted array is"<<endl;
	displayarray(a,n);
}
void fillarray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<" \t"<<a[i];
	}
}
void swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;
}
void insertionsort(int a[],int n){
	                   
	for(int j=1;j<=n-1;j++)  
	{
      int i=j-1;
      int temp=a[j];
      while(temp<a[i] &&i>=0){
      a[i+1]=a[i]; //shifting of bigger elememts to RHS 
	  i--;	
	  }
	  a[i+1]=temp; //final insertion of element
	  }
	
	}


