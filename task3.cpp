#include <iostream>
using namespace std;
main()
{

    string name;
    cout <<"enter word:";
    cin >> name;
    int size=name.length();
    

    
    if(size%2 == 0 )
    {
        cout << "true";
    }
    else{
        cout <<"false";
    }
}