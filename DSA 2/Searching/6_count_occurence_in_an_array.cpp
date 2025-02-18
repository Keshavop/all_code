#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int lastOccurenece(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (mid != n - 1 && arr[mid] != arr[mid + 1])
        {
            // cout << arr[mid] << endl;
            return mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int countOcc(int arr[], int n, int x)
{
    int first = firstOccurence(arr, n, x);
    if (first == -1)
    {
        return 0;
    }
    else
    {
        int last = lastOccurenece(arr, n, x);
        return last - first + 1;
    }
}

int main()
{
    int arr[] = {10, 20, 20, 20, 40, 40}, n = 6;

    int x = 20;

    cout << countOcc(arr, n, x);
    return 0;
}