#include <iostream>
using namespace std;

void slidingWindowMax(int arr[], int n, int k) 
{
    for (int i = 0; i <= n - k; i++) 
    {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) 
        {
            if (arr[i + j] > maxVal) 
            {
                maxVal = arr[i + j];
            }
        }
        cout << maxVal << " ";
    }
}

int main() 
{
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    slidingWindowMax(arr, n, k);

    return 0;
}
