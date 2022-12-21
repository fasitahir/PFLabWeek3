#include <iostream>
using namespace std;
main(){
float bits;
cout<<"Number of bits are: ";
cin>>bits;

float MB=(bits)/(8*1024*1*1024);
cout<<"Number of mbs in "<<bits<<" bits are: "<< MB;
}
