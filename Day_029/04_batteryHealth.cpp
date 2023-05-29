// Question Link: https://www.codechef.com/problems/BTRYHLTH

/*
Problem:
Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.

Given that your iPhone has X% battery health, find whether it is in optimal condition.

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer X — the battery health.

Output Format:
For each test case, output on a new line, YES, if the battery is in optimal condition, and NO otherwise.
You may print each character in uppercase or lowercase. For example, NO, no, No and nO, are all considered identical.

Constraints:
1 ≤ T ≤ 100
1 ≤ X ≤ 100

Sample 1:
Input
4
97
42
80
10

Output
YES
NO
YES
NO

Explanation:
Test case 1: The battery health is 97% which is greater than equal to 80%. Thus, the battery is in optimal condition.
Test case 2: The battery health is 42% which is less than 80%. Thus, the battery is not in optimal condition.
Test case 3: The battery health is 80% which is greater than equal to 80%. Thus, the battery is in optimal condition.
Test case 4: The battery health is 10% which is less than 80%. Thus, the battery is not in optimal condition.
*/



// Time Complexity = O(1), Space Complexity = O(1)
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int x;
	    cin >> x;
	    
	    (x >= 80) ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}
