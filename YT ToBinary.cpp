#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, ans = 0, i = 1;
    cin >> n;

    while (n != 0)
    {
        // telling to remove the last digit (if last digit is 1 with &1 we get 1, if it's 0 we also get 0)
        int digit = n & 1;

        // now we have to reverse the number also, therefore we use powers
        //  first we take the digit and in each iteration we mul it i (first is 10) and then add that to answer

        // so in first iteration for 5 we have (1001&1 is 1) so digit is 1, from that we mul 1 with 10 and then add to ans and update 1001 to 100( by right shift)

        // in 2nd iteration we have 100&1 so digit is 0 and add that with 100 coz i is now i*10 from prev iteration (so at every turn i will increase by *10)

        ans = (digit * (10 * i)) + ans;
        n = n >> 1;
        i = i * 10;
    }

    cout << ans << endl;
}