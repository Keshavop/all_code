#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentSum = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }

    cout << maxSum;

    return 0;
}