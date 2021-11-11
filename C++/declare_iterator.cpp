#include <iostream>
#include <map>

using namespace std;


template <typename T1, typename T2>

class myMap
{
    public:
    map<T1,T2> m;

    //function to inset data
    bool insert(pair<T1, T2> pa)
    {
        /// TO DO: Add your code here
    }

    //function find() to check if the key is found
    typename map<T1, T2>::iterator * find(char c) /// Return a pointer
    {
        //declare iterator
        typename map<T1, T2>::iterator iter;
        iter = m.find(c);

        /// TO DO: Add your code here

    }

    //function to check and print the result
    int *display(pair<T1,T2> pa)
    {
        //declare iterator
        typename map<T1, T2>::iterator iter;

        //output all data
        for(iter = m.begin(); iter !=m.end(); iter++)
        {
            /// TO DO: Add your code here
        }

        return 0;
    }

};


int main()
{
    myMap <char,int> mp1;
    mp1.insert( pair<char, int>('z', 900));
    mp1.insert ( pair<char, int>('a', 100));
    mp1.insert ( pair<char, int>('c', 300));

    bool ret = mp1.insert ( pair<char,int>('z', 500) );  /// This insertion should fail since the key exists

    if (ret == false)
    {
        cout << "The element 'z' already existed" << endl;
    }
    else  /// True
    {
        cout << "It is inserted.";
    }
    cout << endl;

    //Test the find() function here with
    // Return a pointer which points to the 'c' element
    mp1.find('c');
    typename map<char, int>::iterator * test_ptr;
    test_ptr = mp1.find('c');
    cout << (*test_ptr)->second << endl;
    cout << endl;

    // Return a nullptr to indicate that the element cannot be found.
    mp1.find('x');
    if (mp1.find('x') == nullptr)
    {
        cout << "The element 'x' cannot be found. " << endl;
    }
    cout << endl;

    /// The following display() function will display
    ///  a -> 100
    ///  c -> 300
    ///  z -> 900
    /// This function is not member function of the map in STL.
    /// But in order to check the result of our works we need this function.
    mp1.display(pair<char,int>());

    return 0;
}
