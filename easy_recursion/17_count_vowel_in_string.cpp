




///////////////        logic  ///////////////////////////////////////

//     if ith index pe vower hai   toh answer kya hoga    1 + no_of_vowel in further string   
//     else agar vowel nhi h toh ,  toh ans hoga 0+ no of vowel in further string 


#include<iostream>
#include<string>



using namespace std ; 




int count_vowel( string str , int i ){

      

      if(    i== str.size()  )return 0 ; 
      

      if(   str[i] =='a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] =='u'   ){
                 
                 return 1 + count_vowel( str , i+1 ) ;
      }
      else{
                 return 0+ count_vowel( str , i+1) ;
      }

        
}




int main(){





  string str = "aeioudddaa" ; 

  cout << count_vowel(   str , 0   ) ;  



    return 0 ; 
}