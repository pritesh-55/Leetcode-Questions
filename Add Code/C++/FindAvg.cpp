#include <iostream>
using namespace std;

int main() {
  /* Variable Declaration and Initialization. */
  int n, i;
  float num[100], sum = 0.0, average;

  /* Taking user input */
  cout << "How many numbers do you want to get the average of? ";
  cin >> n;

  /* Validation - The number must be within the range */
  while (n > 100 || n <= 0) {
    cout << "Please enter numbers in the range (1 to 100)." << endl;
    cout << "Enter the number again: ";
    cin >> n;
  }

  /* Taking user input */
  for (i = 0; i < n; ++i) {
    cout << i + 1 << ". Enter a number: ";
    cin >> num[i];
    sum += num[i];
  }

  /* Find avarage */
  average = sum / n;

  /* Prints the output to the screen */
  cout << "Average = " << average;
  return 0;
}
