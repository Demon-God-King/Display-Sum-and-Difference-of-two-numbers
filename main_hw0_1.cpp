/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw0_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw0_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, ID, Name, and Date.
/*
 * Title: main_hw0_1.cpp
 * Abstract: To find sum and diff of two numbers
 * ID: 1581
 * Name: Mehul Pakhare
 * Date: 01/25/2023
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, diff;
	cin >> a >> b;
	cout << "SUM:" << a + b << endl;
	cout << "DIFF:" << abs(a-b)<<endl;
	return 0;
}
