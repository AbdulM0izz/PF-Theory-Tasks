#include <iostream>
using namespace std;
int main(){
	int sum =0;
	int arr[3]={15,10,12};
	int result[3];
	for (int i=0; i<3; i++){
		result[i] = arr[i];
		if (result[i]%2==0){
			sum += result[i];
		}
	}
	cout << sum << " ";
}
