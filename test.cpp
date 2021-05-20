#include <iostream>
#include "math.h"
#include <algorithm>
using namespace std;
int main(){
    int r1,x1,y1,x3,y3;
    while (cin>>r1>>x1>>y1>>x3>>y3)
    {
        /* code */
        int r2 = r1 + pow(pow((x1-x3),2)+pow((y1-y3),2),0.5);
        
    }
    
    return 0;
}