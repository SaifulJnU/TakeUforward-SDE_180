#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mid=0;
    int hi=n-1;
    int lo=0;

    while(mid<=hi)
    {

        if(arr[mid]==0)
        {
            swap(arr[lo],arr[mid]);
            mid++;
            lo++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[hi]);
            hi--;
        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
