//insertion sort-CLRS
#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int p;
	int q;
	int a[5];
	int key;
	cout<<"Enter something in the array"<<endl;
	for (p=0;p<5;p++)
	{
		cin>>a[p];
	}
for(j=1;j<5;j++)
{
key=a[j];
i=j-1;
while((a[i]<key) && (i>=0))
{
a[i+1]=a[i];
i=i-1;	
}
a[i+1]=key;
}
cout<<" \n The final array is"<<endl;
for (q=0;q<5;q++)
{
cout<<a[q];
}
	return 0;
}
