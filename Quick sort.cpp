#include<stdlib.h>
#include<iostream>
using namespace std;

void fillArray(int a[], int n) ;
void displayArray(int a[], int n);
int Partition(int a[], int L, int R);
void QuickSort(int a[], int L , int R);
void swap(int & x, int& y);

int main()
{
	int n;
	cout<<"How many random elements you want in your array";
	 cin>>n;
	int a[n];
	fillArray(a,n);
	cout<<"\n************\nBefore Sorting\n";
	displayArray(a,n);
	cout<<"\n************\n";
	QuickSort(a,0,n-1);
	cout<<"\n************\nAfter Sorting\n";
	displayArray(a,n);
	cout<<"\n************\n";
	
return 0;
}

void fillArray(int a[], int n)
{
cout<<"\nEnter Elements to the array\n";
for(int i=0;i<n;i++) 
  cin>>a[i];		
}

void displayArray(int a[], int n)
{
for(int i=0;i<n;i++) 
  cout<<a[i]<<" ";
}

void swap(int &x,int &y)
{
int temp=x;   x=y;   y=temp;  
}

void QuickSort(int a[], int  L, int R)
{
	if(L<R)
	{
		int pos=Partition(a,L,R);
		QuickSort(a,L,pos-1);
		QuickSort(a,pos+1,R);
	}
}

int Partition(int a[], int L, int R)
{ int i=L-1,pivot=a[R];
	for(int j=L;j<=R-1;j++)
	{
	if(a[j]<pivot)swap(a[++i],a[j]);
	}
	swap(a[++i],a[R]);
	return i;
}
