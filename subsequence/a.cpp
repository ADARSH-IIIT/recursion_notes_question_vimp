class Solution {
public:


    void recursive_even_checker(vector<int>& arr, vector<int>& temp, int index ,  int num ,   set<int> &s   ) {


    if (index == arr.size()) {
      
        if(num > 99 && num < 1000){
              if(num %2 == 0 ){
                    s.insert(num) ;
              }
        }
        
        
            return;
    }



    int x = num ; 
    temp.push_back(arr[index]);
    num = num*10 + arr[index] ;      
    recursive_even_checker(arr, temp, index + 1 , num ,  s );


        
    num = x ;     
    temp.pop_back();
    recursive_even_checker(arr, temp, index + 1 , num , s  );

    
}




    int totalNumbers(vector<int>& digits) {

         set<int> s; 
          vector<int> temp ; 
          recursive_even_checker(digits , temp , 0 , 0 , s );

        // cout << s.size() ;


        return s.size() ;
        
        
    }
};©leetcode