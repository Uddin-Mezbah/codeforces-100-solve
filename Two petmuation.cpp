// C++ program to print two
// permutations from a given sequence

#include <bits/stdc++.h>
using namespace std;

// Function to check if the sequence is
// concatenation of two permutations or not
bool checkPermutation(int arr[], int n)
{
	// Computing the sum of all the
	// elements in the array
	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	// Computing the prefix sum
	// for all the elements in the array
	long long prefix[n + 1] = { 0 };
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++)
		prefix[i] = prefix[i - 1] + arr[i];

	// Iterating through the i
	// from lengths 1 to n-1
	for (int i = 0; i < n - 1; i++) {

		// Sum of first i+1 elements
		long long lsum = prefix[i];

		// Sum of remaining n-i-1 elements
		long long rsum = sum - prefix[i];

		// Lengths of the 2 permutations
		long long l_len = i + 1,
				r_len = n - i - 1;

		// Checking if the sums
		// satisfy the formula or not
		if (((2 * lsum)
			== (l_len * (l_len + 1)))
			&& ((2 * rsum)
				== (r_len * (r_len + 1))))
			return true;
	}

	return false;
}

// Function to print the
// two permutations
void printPermutations(int arr[], int n,
					int l1, int l2)
{
	// Print the first permutation
	for (int i = 0; i < l1; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Print the second permutation
	for (int i = l1; i < n; i++) {
		cout << arr[i] << " ";
	}
}

// Function to find the two permutations
// from the given sequence
void findPermutations(int arr[], int n)
{
	// If the sequence is not a
	// concatenation of two permutations
	if (!checkPermutation(arr, n)) {
		cout << "Not Possible";
		return;
	}

	int l1 = 0, l2 = 0;

	// Find the largest element in the
	// array and set the lengths of the
	// permutations accordingly
	l1 = *max_element(arr, arr + n);
	l2 = n - l1;

	set<int> s1, s2;
	for (int i = 0; i < l1; i++)
		s1.insert(arr[i]);

	for (int i = l1; i < n; i++)
		s2.insert(arr[i]);

	if (s1.size() == l1 && s2.size() == l2)
		printPermutations(arr, n, l1, l2);
	else {
		swap(l1, l2);
		printPermutations(arr, n, l1, l2);
	}
}

// Driver code
int main()
{
    int n;
    cin>>n;
	int arr[n]


	findPermutations();
	return 0;
}
