

///    logic ///////////////////////////////////



/// mai 0th and len-1th index match kruga , if wo false hua , matlab unequal it means pallindrome nhi h , return false directly 
//// if wo same hua then , agar koi mughe yeh bata de ki kya 1st to len-2 tak pallindrom hai nhi 
/// if aage bhi pallindrom , means puri string pallindrome else not 




#include<iostream>
#include<string>


using namespace std ; 




bool checkpallindrome( string str , int i  ){
     

      int len  = str.size() ; 

      
      if( i>len/2 )return true ; 
       

      if( str[i] != str[ len-1-i ] ){
                return false ; 
      }

      else {
             
               bool  is_further_string_pallindrom =   checkpallindrome(  str , i+1  );

               return true && is_further_string_pallindrom ; 

      }




}



int main(){


   string str = "naman" ; 

   cout << checkpallindrome(str , 0 ) ;



    return 0 ; 
}