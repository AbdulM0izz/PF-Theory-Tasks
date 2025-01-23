#include <iostream>
using namespace std;
int main()
{

   int startingNum;
    int endingNum;
    int product = 1;

    cout << "Enter starting num "<<endl;
    cin >> startingNum;

    cout << "Enter Ending Number "<<endl;
    cin >>endingNum;

    for (int i= startingNum; i <= endingNum; i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << endl << " Product of odd nums between " << startingNum << " and " << endingNum << endl;

    for (int i= startingNum; i <=endingNum; i++){
        if (i % 2!=0){
            product *= i;
        }
    }
    cout << product << endl;






    return 0;
}