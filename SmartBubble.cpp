#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void SmartbubbleSort(int a[], int n);
void swap(int &x, int &y);       //pass by reference
int main()
{
	int n;
	cout<<"Enter array size";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements"<<endl;
	fillarray(a,n);  //function calling
	cout<<"\n The array elements are ";
	displayarray(a,n);
	SmartbubbleSort(a,n);
	cout<<"\n The sorted array is \n";
		displayarray(a,n);	
}
void fillarray(int a[], int n){
	for(int i=0; i<=n-1; i++)
	cin>>a[i];
}
void displayarray(int a[],int n){
	for(int i=0; i<=n-1; i++)
	cout<<a[i]<<" \t ";
}	
void swap(int &x, int &y)
{
int t=x;
  x=y;
  y=t;
}
void SmartbubbleSort(int a[], int n){
	for(int p=0;p<=n-2;p++)         //pass runs for n-1 times
	{     
		int s=0; 
	for(int c=0; c<=n-p-2;c++)      //comparisions done under each pass
	{
		if(a[c]>a[c+1]){
			swap(a[c],a[c+1]);
			s=1;
		}
	}    //end of comparision loop
	if(s==0){
		break;
	}  //end of pass loop
}  //end of Smartbubblesort
}
