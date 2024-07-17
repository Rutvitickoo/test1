#include<iostream>
using namespace std;
int main()
{
    int size;

    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<size;i++){
            cin>>arr[i];
    }

    cout<<"displaying the elements of the array"<<endl;
    for(int i =0;i<size;i++){
            cout<<arr[i]<<endl;

}
}
