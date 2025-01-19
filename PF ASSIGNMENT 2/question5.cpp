#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = n;
    do {
        int j = i;
      do{
        cout << j;
        j--;
    
    }
    }while (j >= 1){
        cout << endl;
        i--;
    }while (i >= 1);




    return 0;
}