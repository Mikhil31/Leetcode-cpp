#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    int count[5];
    int k = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; i < arr.size(); j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count[k]++;
            }
        }
        k++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << count[i] << "\t";
    }
}