class Solution {
public:
    void printall(string str, int i, vector<string>& output) {

        if (i == str.size()) {
            // cout << str << "\n";
            output.push_back(str);
            return;
        }

        
        ////////////// if its a number skip it 
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z'))) {

            printall(str, i + 1, output);
            
        }

       ///// if lower case , two possibility 
       //as it is 
       // convert to uppercse
        else if (str[i] >= 'a' && str[i] <= 'z') {

            /// taking as it is 
            printall(str, i + 1, output);

            // converting to upper then taking 
            str[i] = str[i] - 32;
            printall(str, i + 1, output);

             ///// if lower case , two possibility 
            //as it is 
            // convert to lowercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {

            // take as it is 
            printall(str, i + 1, output);
            
            // convert to lower , then take it 
            str[i] = str[i] + 32;
            printall(str, i + 1, output);
        }
       


    }

    vector<string> letterCasePermutation(string s) {

        vector<string> output;
        printall(s, 0, output);

        return output;
    }
};


