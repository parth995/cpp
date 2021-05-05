//
//  nested_pair.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

//#include <stdio.h>

template <typename T, typename V> //used to declare T as template type so compiler doesnt throw error

class Pair3 {
    T x; // private properties
    V y; // private properties
    
    //for using private properties, we have used getters and setters below....
     
    public:

    void setx(T x){
        this -> x = x;
    }

    T getx(){
        return x;
    }

    void sety(V y){
        this -> y = y;
    }

    V gety(){
        return y;
    }

};
