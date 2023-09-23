#include <iostream>
using namespace std;

int BinarySearch(int arr[], int k, int key)
{
    int start = 0;
    int end = k - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > mid)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{

    int n;
    cout<<"Enter size of array"<<endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

int key;
cout<<"Enter no. to be searched"<<endl;
cin>>key;



cout<<"Index of"<<" "<<key<<" "<<"is"<<" "<<BinarySearch(arr,n,key);



    return 0;
}



// Time complexity in binary search is logN; 