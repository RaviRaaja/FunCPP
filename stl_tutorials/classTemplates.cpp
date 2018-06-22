#include<bits/stdc++.h>

using namespace std;

template <typename T>
class class_name{
    /** private variables */
    T arr[100];
    int size;

    public:
        //Constructor initializes size as 0
        class_name():size(0){}
        // push an element into an array
        void push(T x){
            arr[size]=x;
            size++;
            }
        //Print all elements in array
        void print() const {
            for(int i=0; i<size; i++) {
                cout << arr[i]<< endl;
                }
            }
        //Get ith element from arr
        T get(int i) const {
            return arr[i];
        }
        //Get size of arr
        int getSize() const {
            return size;
        }

    };
/** DISADVANTAGE OF CLASS TEMPLATE:
    We have to explicitly mention the datatype which is used in place of typename */

int main(){

class_name<int> obj;
obj.push(10);
obj.push(123);
obj.push(34);
obj.push(543);
obj.push(2);
obj.print();
cout << obj.get(0) << endl;
cout << obj.getSize() << endl;

}

