//
//  template_use.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

//#include <stdio.h>
#include <iostream>
using namespace std;
#include "template.cpp"
#include "template_diff_types.cpp"
#include "nested_pair.cpp"

int main(){
   // pair p1; //this will throw error. Because when we create object, program assigns block of memory for all of our properties defined in that....
    
    //for one data type at once
//    Pair<int> p1; //this time p1 object gets two int values, hence we need to define data type too. 
//    p1.setx(10);
//    p1.sety(20);
//    cout << p1.getx() << " " << p1.gety() << endl;
//
//    Pair<double> p2; //this time p2 object gets two double values
//    p2.setx(34.200);
//    p2.sety(100.4532);
//    cout << p2.getx() << " " << p2.gety() << endl;
//
//    Pair<char> p3;
//
//    //Different data types at once
//    Pair2<int, double> p4;
//    p4.setx(100.34);
//    p4.sety(100.34);
//    cout << p4.getx() << " " << p4.gety() << endl;
//
    
    //nested pairs at once
    Pair3<Pair3<int, int>, int> p5;
    p5.sety(10);
    Pair3<int, int> p6;
    p6.setx(15);
    p6.sety(16);
    
    p5.setx(p6);
    cout << p5.getx().getx() << " " << p5.getx().gety() << " " << p5.gety() << endl;
}
