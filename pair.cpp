//
//  pair.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

//#include <stdio.h>


//when we need same class with multiple data types....we can use templates. Initially define T and later on we can substitute required data types
class pair {
    int x;
    int y;
}

public:

void setx(int x){
    this -> x = x;
}

int getx(){
    return x;
}

void sety(int y){
    this -> y = y;
}

int gety(){
    return y;
}


