#include <iostream>

using namespace std;
template <class T>
class tumi{
    T first , second;
    public:
        tumi(T a,T b){
            first = a;
            second = b;
        }
        T bigger();

};
template <class T>
T tumi<T>::bigger(){
    return (first>second?first:second);
}

int main()
{
   tumi <int> tobj(19,46);
   cout<<tobj.bigger()<<endl;;
    return 0;
}
