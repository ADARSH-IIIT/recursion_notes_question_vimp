class Solution {
public:



void swap(  char&a , char&b ){
        
        char temp = a ; 
        a = b ; 
        b= temp ; 
}







string f(    string str , int i ,   vector<string >ans , int &count , int k   ){
   


  
 
      

      if(i == str.size() ){

           if( count == k-1 ){
            
            return str  ; 
     }
              ans.push_back(str) ;
              count++;
            //   cout << str << "  " ;
              return "-1"; 
      }

      
      for(int j = i ; j<str.size() ; j++ ){

                  
                    swap(    str[i] , str[j]  ) ; 
                    string answer = f(  str , i+1 , ans , count , k   ) ; 

                    if(answer!="-1"){
                        return answer ;  
                    }
                  

      }

      return "-1" ;





}



    string getPermutation(int n, int k) {
        string str ; 
        for(int i = 1 ; i<=n ; i++ ){
              str = str + char(i+48 ) ;
        }

        vector<string> ans ; 
        int count = 0 ; 
        return f(  str , 0 , ans , count , k   ) ; 
        
    }
};
