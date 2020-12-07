#include <iterator>
#include <iostream>
#include <vector>
#include "alg.h"

using namespace std;



int main(){
    int ia[]={1,2,3,4,5,6,7,8};
    int *p = Transpose(begin(ia),end(ia));
    //one before
    if(*p!=*end(ia)){
        for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
        cout<<*(p+i)<<endl;
        }
    }
    else{
    cout<<*(p-1)<<endl;
    p=begin(ia);
     for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
        cout<<*(p+i)<<endl;
        }
    }
    

}