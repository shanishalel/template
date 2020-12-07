#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

/**gets iterator b (begin) and iterator e (end) 
return true - if the the set is seb string of fibunnatchi set 
else -return false **/
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



/*getting an iterator b (begin) and e (end) and 
 if the number of vars are odd or empty return b
 if number of var is even change between 2 var nearby var and return e */
  template <typename it > it Transpose(it b, it e){
    if(b==e){
        return b;
    }else if((e-b)%2==1){
        return b;
    }
    else{
        for(;b!=e;b=b+2){
          iter_swap(b,b+1);
  
        }
        return e;
    }
}

/* getting iterator b to begin and e to end , and iterator 
b2 to  begin of container 2, function f that gets 2 parameters  */
template <typename it, function fun > it Transform2(it b, it e, it b2, fun f ){
  
  
  
  
}