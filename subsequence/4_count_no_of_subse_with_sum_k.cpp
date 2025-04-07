#include <iostream>
#include <vector>
using namespace std;






int  printSubsequence(vector<int>& arr, vector<int>& temp, int index, int& sum, int target , int count ) {

 
//    cout << sum <<  " " << index << "\n" ;

    if (index == arr.size()) {
        if (sum == target) { 
            cout << "{ ";
            for (int num : temp) {
                cout << num << " ";
            }
            cout << "}\n";
            count++ ; 
            // return true;  // Found a valid subsequence, stop further recursion
        }
        return count ; 
    }

    // Include the current element
    temp.push_back(arr[index]);
    sum += arr[index];
    int tempcount =  printSubsequence(arr, temp, index + 1, sum, target , count ) ; // Stop further search

    // Exclude the current element
    sum -= arr[index];
    temp.pop_back();
    int tempcountnew = printSubsequence(arr, temp, index + 1, sum, target , tempcount ) ; // Stop further search

    return tempcountnew ; // No valid subsequence found
}

int main() {
    vector<int> arr = {1, 2, 3 , -1 , 1 , 3 , 0 };
    vector<int> temp;
    cout << "Subsequence with sum 3:\n";
    int sum = 0;
    cout << printSubsequence(arr, temp, 0, sum, 3 , 0 ) << "\n";
    return 0;
}
