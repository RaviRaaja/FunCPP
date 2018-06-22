#include<bits/stdc++.h>

using namespace std;


//function template
template <typename T>
T square(T x){
    return x*x;
}

// class template
template <typename T>
class a_vector_class{
    /** private variables */
    T arr[100];
    int size;

    public:
        //Constructor initializes size as 0
        a_vector_class():size(0){}
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

template<typename T>
a_vector_class<T> operator *(const a_vector_class<T>& rhs1,
                        const a_vector_class<T>& rhs2){

     //creating tmp vector
     a_vector_class<T> tmp;

     for( int i=0; i<rhs1.getSize(); i++){
        tmp.push(rhs1.get(i)*rhs2.get(i));
        }

     return tmp;
    }

int main(){

a_vector_class<int> obj;
obj.push(10);
obj.push(123);
obj.push(34);
obj.push(543);
obj.push(2);

cout << "Print arr "<< endl;
obj = square(obj);
obj.print();

}

