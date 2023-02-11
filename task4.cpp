#include <iostream>
using namespace std;

main()
 {
 
    int size,result;
    cout <<"enter how many numbers do you want :";
    cin >> size;

    int array[size];
    
    for(int x=0;x<size;x++)
    {
        cout <<"enter array elements:";
        cin >> array[size];
       

    }
        
        for(int x=0;x<size;x++)
        {
            int num = array[size];
        if(num % 10 == 7)
        {
            result=true;
        }
        else
        {
            result = false;
            break;
        }
        num = num /10;
        }



        if(result = true)
        {
            cout <<"boom";
        }
        else
        {
            cout <<"not present 7";
        }
        
        
        
 }