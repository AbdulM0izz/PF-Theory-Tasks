#include <iostream>
using namespace std;
struct student{
    int studentID;
    string name;
    float Cgpa;
    int marks[7];
};
student globalStudent = {29922,"MOiz",3.1,{5,5,5,5,5,5,5}};

void printFun (const student &student1, const student &student2){
    
    cout <<"Student 1 data: "<<endl;
    cout << "Id: "<<student1.studentID <<endl;
    cout << "Name: "<<student1.name <<endl;
    cout << "Cpga: "<<student1.Cgpa <<endl;
    for (int i=0; i<7; i++){
        cout << student1.marks[i] <<" "<< endl;
    }
    cout << endl;


    cout << "Student 2 data "<<endl;
    cout <<"Id: "<<student2.studentID<<endl;
    cout <<"Name: "<<student2.name <<endl;
    cout << "Cgpa: " <<student2.Cgpa <<endl;
    for (int i=0; i<7; i++){
        cout << student2.marks[i] <<" ";
    }

}


int main()
{
    student localstudent = {29922,"Ali",3.1,{5,5,3,5,3,2,4}};

    printFun (globalStudent,localstudent);

   








    return 0;
}