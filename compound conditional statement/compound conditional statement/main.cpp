//
//  main.cpp
//  compound conditional statement
//
//  Created by Nisha Ramprasath on 26/10/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int hour;
    cout<<"enter hour";
    cin>>hour;
    if(hour>=9 && hour<=18)
    {
        cout<<"working";
    }
    else{
        cout<<"leisure";
    }
}
