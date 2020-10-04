#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *p;
    cout<<"enter elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    p=&arr[5];
    cout<<"you entered:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl
        ;
    }

    return 0;

}
