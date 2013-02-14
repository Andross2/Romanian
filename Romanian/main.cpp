//
//  main.cpp
//  Romanos
//
//  Created by Luis Eduardo Hernandez Diaz on 13/02/13.
//  Copyright (c) 2013 Luis Eduardo Hernandez Diaz. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    int factores [13] = {1,5,10,50,100,500,1000,5000,10000,50000,10000,500000,1000000};
    char letras [13] = {'I','V','X','L','C','D','M','v','x','l','c','d','m'};
    
    int max = 13; 
    
    int arabic;
    
    cin >> arabic;
    
    int temp_number=arabic;
    
    string result;
    
    for( int i = 0; i < max - 2 && temp_number > 0 ; i = i + 2  )
    {
        int pos = i ;
        
        int last_digit = temp_number - ((temp_number / 10)*10);
        int temp = last_digit;
        
        //9
        if( temp == 9)
        {
            result = result + letras[pos+2] + letras[pos];
            temp -= 9;
        }
        //4
        if( temp == 4)
        {
            result = result  + letras[pos+1] + letras[pos];
            temp -= 4;
        }
        //1
        while( ( 9 > temp && temp > 5) || ( 4 > temp  && temp > 0 ) )
        {
            result = result + letras[pos];
            temp--;
        }
        //5
        if( temp >= 5)
        {
            result = result + letras[pos+1];
            temp -= 5;
        }
        
        
        temp_number = temp_number / 10;
        
    }
    
    cout << endl;
    cout << arabic << " in romanian is:" << endl;
    cout << string(result.rbegin(),result.rend()) << endl;
    
    return 0;
}

