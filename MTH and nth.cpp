#include <iostream>
#include <algorithm>

using namespace std;

void findMthMaxNthMin(int arr[], int size, int M, int N) 
{
    
    std::sort(arr, arr + size);
    int MthMax = arr[size - M];
    int NthMin = arr[N - 1];
    int sum = MthMax + NthMin;
    int diff = MthMax - NthMin;
    cout << "Mth maximum number: " << MthMax << endl;
    cout << "Nth minimum number: " << NthMin << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
}

int main() 
{
    int n;
    cout << "Enter number of elements (max 10): ";
    cin >> n;

    if (n > 10) {
        cout << "Error: Number of elements exceeds array size (10)." << endl;
        return 1;
    }
    int arr[10]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) 
	{
        cin >> arr[i];
    }

    int size = n; 

    int M, N;
    cout << "Enter the Mth value: ";
    cin >> M;
    cout << "Enter the Nth value: ";
    cin >> N;

    findMthMaxNthMin(arr, size, M, N);

    return 0;
}

