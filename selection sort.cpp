// WAP for selection sort
#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void selectionsort(int a[],int n);
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
	
	selectionsort(a,n);
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
void selectionsort(int a[],int n){
	for(int i=0;i<=n-2;i++){   //small elememts will be extracted
	 int min=i;                   
	for(int j=i+1;j<=n-1;j++) // remaining array     
	{
		if (a[min]>a[j]){
			min=j;
		}
	
	
	}
			if(min!=i)  // swap if assumption is wrong
	swap(a[i],a[min]);
}
	
}
