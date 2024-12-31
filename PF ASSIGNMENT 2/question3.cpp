#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int positive = 0;
    int negative = 0;
cout << "Enter num to Check Positive Or Not : "<<endl;
do{
    cin >> num;
    if(num > 0){
        positive++;
    }else if (num < 0){
        negative++;
    }
}while (num != 0);
cout << " Positive Numbers are : " << positive << endl;
cout << " Negative Numbers are : " << negative << endl;



    return  0;
}