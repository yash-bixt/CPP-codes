#include <iostream>
#include <vector>
using namespace std;
int main()
{
 
    vector<int> v;       // declaring a vector

    vector<int> a(5, 1);

    vector<int> last(a);      //copied the elements of vector a in new vector 'last' 

    for (int i : last)
    {
        cout << i << " \n";
    }

    cout << "Size--->"
         << " " << v.capacity() << endl;

    v.push_back(1);           // adds an element

    cout << "Size--->"
         << " " << v.capacity() << endl;

    v.push_back(2);

    cout << "Size--->"
         << " " << v.capacity() << endl;

    v.push_back(3);

    cout << "Size--->"
         << " " << v.size() << endl;

    cout << " " << v.front() << endl;

    cout << " " << v.back() << endl;

    cout << "Before pop" << endl;

    for (int i : v)
    {

        cout << i << " ";
    }

    cout << endl;

    v.pop_back();           // removes last element

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " " << endl;
    }

    v.clear();               // clears the vector
    cout << "Size of vector is " << v.size() << endl;

    return 0;
}