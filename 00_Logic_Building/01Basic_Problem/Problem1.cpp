/*
Given a number n, check whether it is even or odd. Return true for even and false for odd.

Examples: 

Input: n = 15
Output: false
Explanation: 15 % 2 = 1, so 15 is odd .

Input: n = 44
Output: true
Explanation: 44 % 2 = 0, so 44 is even.
*/

// Solution 1 By Finding the Reminder - O(1) Time and O(1) Space

#include <iostream>
using namespace std;

bool isEven(int n)
{
    // finding remainder of n
    int rem = n % 2;
    if(rem == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n = 22;
    if (isEven(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}