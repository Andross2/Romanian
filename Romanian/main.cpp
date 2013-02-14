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
    
    //int factores [13] = {1,5,10,50,100,500,1000,5000,10000,50000,10000,500000,1000000};
    //string letras [13] = {'I','V','X','L','C','D','M','v','x','l','c','d','m'};
    
    int max = 13; //max(1,2);
    
    int arabic;
    
    cin >> arabic;
    
    int temp_number=arabic;
    
    string result;
    
    //for( int i = 0; i < max && temp_number > 0 ; i = i - 2  )
    for( int i = 0; i < max - 2 && temp_number > 0 ; i = i + 2  )
    {
        //int pos = max - i - 1;
        int pos = i ;
        
        int last_digit = temp_number - ((temp_number / 10)*10);
        int temp = last_digit;
        
        //9
        if( temp == 9)
        {
            //cout << letras[pos] << letras[pos+2];
            result = result + letras[pos+2] + letras[pos];
            //result = result ;
            temp -= 9;
        }
        //4
        if( temp == 4)
        {
            //cout << letras[pos+1] ;
            result = result  + letras[pos+1] + letras[pos];
            temp -= 4;
        }
        //1
        while( ( 9 > temp && temp > 5) || ( 4 > temp  && temp > 0 ) )
        {
            //cout << letras[pos] ;
            result = result + letras[pos];
            temp--;
        }
        //5
        if( temp >= 5)
        {
            //cout << letras[pos+1] ;
            result = result + letras[pos+1];
            
            temp -= 5;
        }
        
        
        temp_number = temp_number / 10;
        
        //        // 9
        //        if( temp_number >= factores[pos - 1] )
        //        {
        //            cout << letras[pos-1] ;
        //            temp_number -= factores[pos - 1];
        //        }
        //
        //        if( temp_number >= factores[pos - 1] )
        //        {
        //            cout << letras[pos-1] ;
        //            temp_number -= factores[pos - 1];
        //        }
        //
        //        // 0-3 6-8
        //        while( temp_number >= factores[pos] )
        //        {
        //            cout << letras[pos] ;
        //            temp_number -= factores[pos];
        //        }
        
    }
    
    cout << endl;
    cout << arabic << " in romanian is:" << endl;
    cout << string(result.rbegin(),result.rend()) << endl; // I google this
    
    
    // insert code here...
    //string s;
    //cin >> s;
    //cout << s;
    //std::cin >> s;
    //std::cout << "Hello, World!\n";
    return 0;
}

