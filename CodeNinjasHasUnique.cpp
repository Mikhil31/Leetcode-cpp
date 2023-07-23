// https://www.codingninjas.com/studio/problems/find-unique_625159

// Problem Statement
//     Detailed
//     explanation(Input / output format, Notes, Images)
// Sample Input 1 : 1 7 2 3 1 6 3 6 2
// Sample Output 1 : 1
// Sample Input 2 : 2 5 2 4 7 2 7 9 1 3 1 3 6 6 7 10 7
// Output 2 : 4 10

#include <iostream>

using namespace std;

int hasUnique(int arr[], int size)
{
    int element;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
        if (count == 0)
        {
            element = arr[i];
            break;
        }
    }
    return element;
}

int main()
{
    int noOfTest, arr[40], size;
    cin >> noOfTest;

    for (int i = 0; i < noOfTest; i++)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    int ans = hasUnique(arr, size);
    cout << ans << endl;
}