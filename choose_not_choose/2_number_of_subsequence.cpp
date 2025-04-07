/*

count [1 2 3 ] ==> return total no of subset of this array 

count for  [2 3 ] ==> return no of subset by not seelcting 1 

count for  [ 1  2 3 ] ==> return no of subset by  seelcting 1 

ans will be sum of both 



it is like fibinachi , what we do in fibonachi 

*/






#include<iostream>
#include<vector>

using namespace std ; 



int count( vector<int>&vec ,  vector<int> &tempvec , int i  ){
          

           if(  i== vec.size()){
                
                 //// one subset created 
                 return 1 ; 
           }


            // not choosing 
            int numberofsubsetduetonotchoosing = count( vec , tempvec , i+1 );


            /// choosing it 
            tempvec.push_back( vec[i] ) ; 
            int numberofsubsetduetochoosing = count( vec , tempvec , i+1 );
            tempvec.pop_back() ; 

 

           return numberofsubsetduetochoosing + numberofsubsetduetonotchoosing ; 





}






int main(){


    vector<int> vec = {1,2,3 , 4 } ; 
    vector<int> tempvec  ;

    cout << count( vec , tempvec , 0 ) ; 

    



    return 0 ; 
}