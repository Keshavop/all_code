#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] <= arr[j])
                break;
        }
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[]={16, 17, 4, 3, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders(arr, n);
    return 0;
}