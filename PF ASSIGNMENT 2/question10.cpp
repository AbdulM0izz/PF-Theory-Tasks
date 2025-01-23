#include <iostream>
using namespace std;
int main(){
    int matrix1[2][2];
    int matrix2[2][2];
    cout <<"Enter elements of first matrix: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin >> matrix1[i][j];
        }
    }
    cout <<"Enter elements of second matrix: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin >> matrix2[i][j];
        }
    }

    bool istrue = true;
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(matrix1[i][j] != matrix2[i][j]){
                istrue = false;
                break;
            }
        }
    }
    if (istrue){
        cout <<"Both Matrix are equal."<<endl;
    }else{
        cout <<"Both Matrix are not equal."<<endl;
    }
    return 0;
}