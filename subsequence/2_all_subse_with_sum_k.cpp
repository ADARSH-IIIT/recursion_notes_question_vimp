#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(vector<int>& arr, vector<int>& temp, int index ,  int &sum , int target ) {
    if (index == arr.size()) {
        // Base case: If index reaches end, print the subsequence
       if(sum == target){ 
                    cout << "{ ";
                    for (int num : temp) {
                        cout << num << " ";
                    }
                    cout << "}\n";
        }
        return;
    }

    // Include the current element
    temp.push_back(arr[index]);
    sum = sum + arr[index] ; 
    printSubsequence(arr, temp, index + 1 , sum , target );

    // Exclude the current element
    int popped = temp.back() ;    ///////  lst ele which is going to be poppeddddddddd..........
    temp.pop_back();
    sum = sum - popped  ; 
    printSubsequence(arr, temp, index + 1 , sum , target );
}

int main() {
    vector<int> arr = {  1, 2, 3};
    vector<int> temp;
    cout << "Subsequences:\n";
    int sum = 0 ;
    printSubsequence(arr, temp, 0 , sum   , 3 );
    return 0;
}
