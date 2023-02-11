#include <iostream>
using namespace std;
main()
{
    int counter=0;
    int size;
    cout <<"enter how many colours you want to take:";
    cin >> size;

    string array[size];
    
    for(int x=0;x<size;x++)
    {
        cout <<"enter colours name "<<x+1 <<" : ";
        cin >> array[x];
    }
    for(int x=0;x<size-1;x++)
    {
      if( array[x+1] != array[x])
      {
        counter++;
      }
    }
cout << size*2 + counter;


}