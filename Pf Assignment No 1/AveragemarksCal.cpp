#include <iostream>
using namespace std;
int main(){
	double average;
	cout<<"enter your name"<<endl;
 string studentname;
 cin>>studentname;
 float english;
 float urdu;
 float math;
 
 if( english < 0 || english > 100 || urdu < 0 || urdu > 100 || math < 0 || math > 100 ){
 	cout<<"invalide marks ";
 }

 cout<<"enter english marks"<<endl;
 cin>>english;
 cout<<"enter urdu marks"<<endl;
 cin>>urdu;
 cout<<"enter math marks"<<endl;
cin>>math;
 
 average = ( english + urdu + math ) /3;

 cout<< studentname <<" your average marks: "<<average;


    return 0;
}