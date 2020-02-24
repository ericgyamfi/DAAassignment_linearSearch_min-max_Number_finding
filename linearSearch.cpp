// Recursive C++ program
// to search x in array
#include<bits/stdc++.h>

using namespace std;

// Recursive function to
// search key in arr[firstElement..lastElement]
int recSearch(int arr[], int firstElement,
			int lastElement, int key)
{
	if (lastElement < firstElement)
		return -1;
	if (arr[firstElement] == key)
		return firstElement;
	if (arr[lastElement] == key)
		return lastElement;
	return recSearch(arr, firstElement + 1,
						lastElement - 1, key);
}

// Driver Code
int main()
{
    cout<<"Program to implement linear search"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Enter the size of array"<<endl;
    int arrSize,Elements;
    cin>>arrSize;
    cout<<"enter array elements"<<endl;

    for(int i=0;i<arrSize;i++)
    {
        cout<<"Element "<<i<<":";
        int arr[arrSize];
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"Enter the key element"<<endl;
    int key;
    cin>>key;
    int arr[arrSize];
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = recSearch(arr, 0, n - 1, key);
	if (index != -1)
	cout << "Element " << key
		<< " is present at index "
		<< index;
	else
		cout << "Element " << key
			<< " is not present" ;
	return 0;
}

// This code is contributed
// by Shivi_Aggarwal
