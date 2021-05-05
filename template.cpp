//
//  template.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

//#include <stdio.h>

//template allows using one class for different data types.

template <typename T> //used to declare T as template type so compiler doesnt throw error

class Pair {
    T x; // private properties
    T y; // private properties
    
    //for using private properties, we have used getters and setters below....

    public:

    void setx(T x){
        this -> x = x;
    }

    T getx(){
        return x;
    }

    void sety(T y){
        this -> y = y;
    }

    T gety(){
        return y;
    }

};

