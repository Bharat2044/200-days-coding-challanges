// Question Link: https://www.codechef.com/problems/CABS

/*
Problem
Chef has to travel to another place. For this, he can avail any one of two cab services.

The first cab service charges X rupees.
The second cab service charges Y rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take?

Input Format:
The first line will containT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integersX and Y - the prices of first and second cab services respectively.

Output Format:
For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab service is cheaper, output ANY if both cab services have the same price.
You may print each character of FIRST, SECOND and ANY in uppercase or lowercase (for example, any, aNy, Any will be considered identical).

Constraints:
1 ≤ T ≤ 100
1 ≤ X, Y ≤ 100

Sample 1:
Input
3
30 65
42 42
90 50

Output
FIRST
ANY
SECOND

Explanation:
Test case 1: The first cab service is cheaper than the second cab service.
Test case 2: Both the cab services have the same price.
Test case 3: The second cab service is cheaper than the first cab service.
*/



// Time Complexity = O(t), Space Complexity = O(1)
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    
	    if(x < y) 
	        cout << "FIRST\n";
	    else if(x > y)
	        cout << "SECOND\n";
	    else
	        cout << "ANY\n";
	}
	
	return 0;
}
