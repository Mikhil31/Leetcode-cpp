//MID 
//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        // create a mask variable that when used & with gives the complement

        // take 5, which is 101, instead of converting it to bin and then complement it.. it's too complicated...

        // so now we try other methods inside, so ~5 is 111..010 and wkt that 2 should be 10 so we now have a method

        // we need to cancel out all prev 1's in the series if we take ~5.. for that we can tkae & operation with 0000... 010

        // if we want to cancel out those 0's... so we can craete a mask var that cancels it out

        int m = n;
        int mask = 0;
        if (n == 0)
        {
            return 1;
        }
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};