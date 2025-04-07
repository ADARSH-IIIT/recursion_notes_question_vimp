#include<iostream>
#include<string>


using namespace std ; 


///// this function will insert _ after ith index i=3 abcde==> abcd_e
///// this function will insert _ after ith index i=0 abcde==> a_bcde
/// pass by ref , so just pass output string here 
void insert( string &str , int i  ){
       
        string left = str.substr( 0,i+1 );
        string right = str.substr( i+1 , str.size() );

        str = string(left + ' ' + right ) ; 
}




void all_permutaions( string str , int i  ){

       
       if(i==str.size()-1){
          cout << str << "\n";
          return ; 
       }
        

        ///// two choice insert or not insert

        //// not inserting
        all_permutaions( str , i+1  );



        //// inserting _ at ith
        insert( str , i );
        all_permutaions( str , i+2  );


}





int main(){



   //// no need of helper string 
   // we will modify str directly , but as we doing pass by value inside permutation function so str will not change for child or sibling function call 
     
     string s = "abc" ;
     string output = "" ;
     all_permutaions(  s , 0  );
   


    return 0 ; 
}