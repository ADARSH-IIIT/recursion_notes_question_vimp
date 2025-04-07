#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(vector<int>& arr, vector<int>& temp, int index ) {


    if (index == arr.size()) {
        // Base case: If index reaches end, print the subsequence
      
                    cout << "{ ";
                    for (int num : temp) {
                        cout << num << " ";
                    }
                    cout << "}\n";
        
            return;
    }



    // Include the current element
    temp.push_back(arr[index]);
    printSubsequence(arr, temp, index + 1  );

    // Exclude the current element
    temp.pop_back();
    printSubsequence(arr, temp, index + 1  );

    
}

int main() {
    vector<int> arr = {  1, 2, 3};
    vector<int> temp;
    cout << "Subsequences:\n";
    int sum = 0 ;
    printSubsequence(arr, temp, 0 );
    return 0;
}
