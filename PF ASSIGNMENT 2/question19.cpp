#include <iostream>
using namespace std;
void table(){
    int numbers [5];
    cout << "Enter 5 Numbers To print their Tables: "<< endl;
    for (int i=0; i<5; i++){
        cin >> numbers[i];
    }

    cout <<"\Tables: \n";
    for (int i=0; i<5; i++){
        cout << "Table of "<<numbers[i] <<endl;
        for (int j=1; j<=10; j++){
            cout << numbers[i] << " * " <<j<< " " <<numbers[i]*j <<endl;
        }
        cout <<endl;
    }

}

int main()
{
    table();


    return 0;
}