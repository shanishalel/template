#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>
#include "alg.h"

using namespace std;

template <typename it1,typename it2 ,typename func > it2 Transform2
(it1 b, it1 e, it2 b2, func f ){
  while(b!=e){
    *b2=f(*(b),*(b+1));
    b2++;b=b+2;
  }
  return b2;
  
}

template<typename T, typename R>
bool Fib (T a, R b) {
	while(a != b){
        if(a+(a++)==(a+2)){
            a++;
        }
        else{
            return false;
        }
    }
    return true;
}




int main(){
    // int ia[]={1,2,3,4,5,6,7,8};
    // int *p = Transpose(begin(ia),end(ia));
    // //one before
    // if(*p!=*end(ia)){
    //     for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
    //     cout<<*(p+i)<<endl;
    //     }
    // }
    // else{
    // cout<<*(p-1)<<endl;
    // p=begin(ia);
    //  for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
    //     cout<<*(p+i)<<endl;
    //     }
    // }
    
    int ia[]={1,2,3,10,8,6};
    vector<int> vec(100); 
    auto p = Transform2(begin(ia), end(ia), vec.begin(),[](const int x, const int y){return x + y;});
    cout<<*(p-3)<<endl;
}