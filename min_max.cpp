#include <iostream>

using namespace std;


int main()
{
    int arraySize=0,int min,int max,int arr[arraySize];
    cout << " Please enter the size of your array"<< endl;
    cin >>arraySize;
    cout <<"Enter the array elements "<<endl;
    int arr[];
    for(int i=0;i<arraySize;i++)
    {
        cin>>arr[arraySize];
        cout<<endl;
    }
    min=arr[0];
    max=arr[0];

    for(int j=0;j<arraySize;j++)
    {
        if(arr[j]>max){
            max =arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }

    }
        cout<<"The maximum value is :"<<max<<endl;
        cout<<"The minimum value is :"<<min<<end;

    return 0;
}
