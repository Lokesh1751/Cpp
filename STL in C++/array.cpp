// STL FULL FORM = STANDARD TEMPLATE LIBRARY
#include <iostream>
#include <array> // by deafult
using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
  
  // some operations
    cout<<"element at 2nd index :"<<" "<<a.at(2)<<endl;

    cout<<"Empty or not"<<" "<<a.empty()<<endl;
    
    cout<<"first element"<<" "<<a.front()<<endl;
     cout<<"last element"<<" "<<a.back()<<endl;
}