#include<stdlib.h>
#include<iostream>
using namespace std;
//****************
void fillArray(int a[], int n);
void displayArray(int a[], int n);
void Merge(int a[], int L,int mid, int R);
void MergeSort(int a[], int L, int R);

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
	MergeSort(a,0,n-1);
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

void MergeSort(int a[], int L, int R)
{
	if(L<R)
	{
		int mid=(L+R)/2; 
		MergeSort(a,L,mid);
		MergeSort(a,mid+1,R);
		Merge(a,L,mid,R);
	}
}

void Merge(int a[], int L,int mid, int R)
{ int n1=mid-L+1;
  int n2=R-mid;
  int Left[n1+1],Right[n2+1];
  for(int i=0;i<n1;i++)
      Left[i]=a[L+i];
  for(int i=0;i<n2;i++) 
	   Right[i]=a[mid+1+i];
	     Left[n1]=INT_MAX;
	     Right[n2]=INT_MAX;
	int i=0,j=0;
	for(int k=L;k<=R;k++) 
	{
		if(Left[i]<Right[j]) 
		  a[k]=Left[i++];
		else a[k]=Right[j++];
	}
}
