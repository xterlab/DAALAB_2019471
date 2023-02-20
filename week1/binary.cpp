#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        return binarySearch(arr, mid + 1, r, x);
    }
  
    return -1;
}
  
int main(void)
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the "<<i+1<<"th element :";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter a number to be search :";
    cin>>x;
    int n = 5;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result+1;
    return 0;
}