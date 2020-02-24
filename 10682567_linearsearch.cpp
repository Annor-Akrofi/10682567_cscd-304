/* C++ Program - Linear Search */
		
#include <iostream>
#include <conio.h>
void main()
{
	clrscr();
	int arr[10], i, num, n, c=0, pos;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}
	getch();
}


////////////////////////////////////////////////////////////////////////
//min and max search
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "The maximum numbere is : " << max;
    cout << "The minimum number is : " << min;
    return 0;
}

