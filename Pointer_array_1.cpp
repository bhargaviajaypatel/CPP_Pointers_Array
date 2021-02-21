#include<iostream>
using namespace std;
int main()
{
	int arr[4],discount,price,temp,i;
	int *p;
	for(i=0;i<4;i++)
	{
	    cout<<"Enter price of object"<<i+1<<":";
	    cin>>*(arr+i);
	}

	p=arr;
	
	for(i=0;i<4;i++)
	{
	    temp=(20*(*(p+i)))/100;
	    discount=(*p+i)-temp;
	    
	    cout<<"Discounted price of object"<<i+1<<":"<<discount<<endl;
	}

	return 0;
}

