#include<iostream>
using namespace std;
int main()
{
    int size,max=0;

    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<size;i++){
            cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {

        if(arr[i]>=max)
    {
        max =arr[i];
    }
}
cout<<"the maximum element in the list is"<<max<<endl;
}
