// minimum and maximum in an array
#include <iostream>
using namespace std;
void findMinMax(int arr[], int size, int &minVal, int &maxVal)
{  
    minVal = arr[0];
    maxVal = arr[0];
for(int i = 1; i < size; i++)
    {
        if(arr[i] > maxVal)
            maxVal = arr[i];
         if(arr[i] < minVal)
            minVal = arr[i];
    }
}
int main()
{
    int N;
    cout << "Enter the size of your array: ";
    cin >> N;

    int arr[N];   

    for(int i = 0; i < N; i++)
    {
        cout << "Enter values ";
        cin >> arr[i];
    }
    int minVal, maxVal;
    findMinMax(arr, N, minVal, maxVal);
    cout << "Minimum value  " << minVal << endl;
    cout << "Maximum value  " << maxVal << endl;

    return 0;
}
