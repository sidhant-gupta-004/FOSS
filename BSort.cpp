#include <iostream>

//  Bubble Sort

using namespace std;

void BSort (int a[], int si);

int main()
{
    int arr[300], s, i;
    cout<<"Enter size of array.\n";
    cin>>s;
    cout<<"Enter array elements.\n";
    for(i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    BSort(arr, s);
}

void BSort (int a[], int si)
{
    int temp, i, j;
    for(j=0; j<si; j++)
    {
        for (i=0; i<si-1; i++)
        {
            if ( a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a [i+1] = temp;
            }
        }
    }
    cout<<"\n";
    
    for (i=0; i<si; i++)
    {
        cout<<a[i]<<"\t";
    }
}