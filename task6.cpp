#include <iostream>
using namespace std;
main(){
float matric;
float inter;
float ecat;

cout<<"Marks in matric are: ";
cin>> matric;
float percentageinmatric=matric/1100 *100;


cout<<"Marks in inter are: ";
cin>> inter;
float percentageininter=inter/550 *100;


cout<<"Marks in ecat are: ";
cin>> ecat;
float percentageinecat=ecat/400 *100;


float aggregate= percentageinmatric/100 *10 + percentageininter/100 * 40 + percentageinecat/100 * 50;
cout<<"Your aggregate is: "<< aggregate;
}