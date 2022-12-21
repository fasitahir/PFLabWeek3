#include <iostream>
using namespace std;
main(){
float mbs;
cout<<"Enter number of mbs: ";
cin>> mbs;

double bits=mbs*1024*1*1024*8;
cout<<"Number of bits in "<<mbs<<" mbs are: "<<bits;
}
