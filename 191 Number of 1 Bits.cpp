//EZ PROBLEM 

//Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has(also known as the Hamming weight).

// Input : n = 00000000000000000000000000001011 Output : 3 Explanation : The input binary string 00000000000000000000000000001011 has a total of three '1' bits.Example 2 :

//     Input : n = 00000000000000000000000010000000 Output : 1 Explanation : The input binary string 00000000000000000000000010000000 has a total of one '1' bit.Example 3 :

//     Input : n = 11111111111111111111111111111101 Output : 31 Explanation : The input binary string 11111111111111111111111111111101 has a total of thirty one '1' bits.

//                                                                            Constraints :

//     The input must be a binary string of length 32.

// NOT TO RUN, COPY PASTE IN LEETCODE

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {

        // First create count
        // DON'T CHECK COUNT WITH 1 (n==1) {count++}
        // COZ YOU'RE CHECK IF ENTIRE VALUE OF n=1
        // do & with n and then check
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};