#include<iostream>
using namespace std;
main(){
float Convertingfactor=0.45;
float kgs;

cout<<"Weight in kgs is: ";
cin>> kgs;

float weight_in_lbs=kgs/Convertingfactor;
cout <<"converted weight in lbs: "<<weight_in_lbs;
}