#include <iostream>
#include <vector>
using namespace std;

bool printSubsequence(vector<int>& arr, vector<int>& temp, int index, int& sum, int target) {

 
   cout << sum <<  " " << index << "\n" ;

    if (index == arr.size()) {
        if (sum == target) { 
            cout << "{ ";
            for (int num : temp) {
                cout << num << " ";
            }
            cout << "}\n";
            return true;  // Found a valid subsequence, stop further recursion
        }
        return false; 
    }

    // Include the current element
    temp.push_back(arr[index]);
    sum += arr[index];
    if (printSubsequence(arr, temp, index + 1, sum, target)) return true;  // Stop further search

    // Exclude the current element
    sum -= arr[index];
    temp.pop_back();
    if (printSubsequence(arr, temp, index + 1, sum, target)) return true;  // Stop further search

    return false; // No valid subsequence found
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> temp;
    cout << "Subsequence with sum 3:\n";
    int sum = 0;
    printSubsequence(arr, temp, 0, sum, 3);
    return 0;
}
