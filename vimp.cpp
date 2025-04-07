#include<iostream>
#include<string>


using namespace std ; 



void insert( string &str , int i  ){
       
        string left = str.substr( 0,i+1 );
        string right = str.substr( i+1 , str.size() );

        str = string(left + '_' + right ) ; 
}


void permutation( string str , int i  ){
     
      //  cout << "in btw  " << str << "  " ;

      if( i== str.size()-1 ){
         //   cout << '\n' << str << " " ;
           return ; 
      }

      // notinserting 
      cout << str << " 1 \n" ; 
      permutation(  str , i+1   ) ; 

      // inserting _ here 
      cout << str << " 2 \n" ; 

      insert( str , i  );
      permutation(  str , i+2   ) ; 

}







int main(){

   string s = "abc" ; 

   // insert(s , 0) ;

   // cout << s ;
   permutation(s , 0 ) ; 
   




   return 0 ; 
}




/////// &str and str in permutation is vimpppppppppppp

/// permutation with spaces