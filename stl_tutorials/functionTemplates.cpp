#include<bits/stdc++.h>

using namespace std;

// Templates Example
template <typename T>
T func_name(T param){
    cout << "Template function is called" << endl;
    return param;
}

int main(){

    /**
    compiler can understand inbuilt datatypes
    cout << func_name<int>(10) << endl; // not necessary
    */
    cout << func_name(100) << endl; // infered that datatype is int
    cout << func_name(1500) << endl;
    cout << func_name(10.234) << endl; // infered that datatype is double
    return 0;
}

/** DISADVANTAGE OF TEMPLATES :
    Code bloat - line #18 and line #19 where two times function is invoked
    so the compiler make 2 instances of same function twice in memory.This is
    insufficient usage of memory */

