#include <iostream>
using namespace std;
int main()
{
    int array1[]= {15,10,12};
    int size = sizeof(array1)/sizeof(array1[0]);

    int array2[3];
    int evenSum = 0;

    for (int i=0;i<size;i++){
        array2[i] = array1[i];
        if (array2[i] % 2 == 0){
            evenSum += array2[i];
        }
    }

    cout << evenSum << endl;
    






 return 0;
}




