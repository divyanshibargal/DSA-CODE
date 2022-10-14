// WAP for bubble sort
#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void bubblesort(int a[],int n);
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
	
	bubblesort(a,n);
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
void bubblesort(int a[],int n){
	for(int p=0;p<=n-2;p++){         //pass runs for n-1 times
	for(int c=0;c<=n-p-2;c++)     //comparisons runs under each pass
	{
		if (a[c]>a[c+1]){
			swap(a[c],a[c+1]);
		}
	}
	
}
	
}
