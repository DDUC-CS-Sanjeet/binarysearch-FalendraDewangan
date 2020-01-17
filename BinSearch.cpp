#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	int mid=(startIndex+lastIndex)/2;
	
	if(array[mid]==element)
		return true;
	if(element>array[mid])
	{
		return binarySearchReacursive(array,mid,lastIndex,element);
	}
	else if(element<array[mid])
	{
		return binarySearchReacursive(array,startIndex,mid,element);
	}
  return false;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
        while(true)
        {
         
        int mid=(startIndex+lastIndex)/2;
          if(element<array[mid])
          {
              lastIndex=mid;
          }
          else if(element>array[mid])
          {
              startIndex=mid;
          }
         
        else if(element==array[mid])
            {
                return true;
                break;
            }
        }
        
  return false;
}

int main()
{
	int size,choice,x;
	bool result1,result2;
	cout<<"Enter the size of the array ";
	cin>>size;
	int ar[size];
	cout<<"enter the element of the array ";
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}

	sort(ar,ar+size);
	
	cout<<"enter 1 for binarysearch by recursion ";
	cout<<"\n enter 2 for binarysearch by iteration";
	cout<<"\n enter your choice ";
	cin>>choice;
	cout<<"\nenter the no. to be search ";
	cin>>x;
	switch(choice)
	{
		case 1:
			 result1 = binarySearchReacursive(ar,0,size,x);
			if(result1)
				cout<<"true";
			else
				cout<<"false";
			break;
		
		case 2:
			 result2 = binarySearchIterative(ar,0,size,x);
		if(result2)
				cout<<"true";
			else
				cout<<"false";
			break;
			
		default :
			cout<<"invalid choice";
			
	}
  return 0;
}
