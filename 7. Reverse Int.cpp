// diff : mid

// Given a signed 32 - bit integer x, return x with its digits reversed.If reversing x causes the value to go outside the signed 32 - bit integer range[-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64 -
// bit integers(signed or unsigned).

// Example 1 :

//     Input : x = 123 Output : 321 Example 2 :

//     Input : x = -123 Output : -321 Example 3 :

//     Input : x = 120 Output : 21

class Solution
{
public:
    int reverse(int x)
    {
        int digit, ans = 0;
        while (x != 0)
        {
            digit = x % 10;

            // by ans*10 sometimes in some cases it may go out of bounds, so to prevent that just like in the question we have "return 0;" if it's out of bounds

            // this condition checks for the same by, if ans > INT_MAX/10, since we doing ans*10 (which can go out of bounds) we rather divide max value by int to 10 and check, coz it's not possible to do INT_MAX*10 (obviously will go out of bounds, not can we do ans*10 coz out of bounds)

            // similarly we check on the neg side also, using INT_MIN and then return 0 or else return answer
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            {
                return 0;
            }

            // i/p: 123
            // 1st iteration 123, 123%10=3 => ans=(0*10)+3 == 3 and 123/10 =12 (to next iteration)
            // 2nd iteration 12, 12%3=2 => ans=(3*10)+2 ==32 and 12/10= 1
            // 3rd iteation 1 , 1%10= 1 => ans= (32*10)+1 == 321 and 1/10 = 0 (break out of while)

            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};