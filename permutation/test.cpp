#include<iostream>

#include<vector>



using namespace std ; 






void f( int i ,   int n , vector<int>&vec ,  vector<bool>&boolvec  ){
                
              
            

              
              int copy = 0 ;

       

                 bool got = false ; 
                for(int j = 0 ; j<n ; j++ ){

                               copy = i^( 1<< j );
                               if(  boolvec[copy] == false  ){
                                                 boolvec[copy] = true ; 
                                               got = true ;
                                                cout << copy << " " ; 
                                              vec.push_back( copy ) ; 
                                               break ; 
                                             
                               }

                }

                if(!got){
                     return ; 
                }

                 f( copy , n , vec , boolvec  ) ; 



}





int main(){


int n = 3 ; 
// int i = 0 ; 
// vector<int> vec ; 
// vector<bool> boolvec( pow(2,n), false) ; 
// boolvec[0] = true ; 
// vec.push_back(0) ; 
// f( i , n , vec , boolvec ) ; 



     for (int i = 0; i < (1 << n); ++i)
        {
            cout << (i ^ (i >> 1)) << "  ";
        }



       return 0 ; 
}