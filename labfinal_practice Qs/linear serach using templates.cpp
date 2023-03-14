#include <iostream>
using namespace std;

// linear search template function
// arr: array
// n: size of array
// x: value to search
// the function returns the index of x if it is present in arr
// otherwise it returns -1
template <class T>
int LinearSearch(T arr[], int n, T x) {

	for (int i = 0; i < n; ++i) {

		if (arr[i] == x)
			return i;

	}

	return -1;

}

int main() {

	int arr[] = { 6 , 43 ,23 ,6, 12 ,43, 3, 4, 2, 6 };
	int n, index, x;
	n = sizeof(arr) / sizeof(int); // size of arr

	cout << "Integer Array: ";
	for (int i = 0; i < n; ++i)	cout << arr[i] << ' ';
	cout << endl;

	cout << "Enter Value you want to search: ";
	cin >> x;

	index = LinearSearch(arr, n, x);

	if (index != -1)
		cout << x << " is present in the array at position " << index << endl;
	else
		cout << x << " is not present in the array \n" << endl;
		
	/*-----------------------------------------------------------------------------*/

	char charArr[] = { 'A', 'v', 'D', 'R', 'T','u', 'j', 'o' };
	char c;
	n = sizeof(charArr) / sizeof(char);

	cout << "Char Array: ";
	for (int i = 0; i < n; ++i)	cout << charArr[i] << ' ';
	cout << endl;

	cout << "Enter character you want to search: ";
	cin >> c;

	index = LinearSearch(charArr, n, c);

	if (index != -1)
		cout << c << " is present in the array at position " << index << endl;
	else
		cout << c << " is not present in the array " << endl;

}
