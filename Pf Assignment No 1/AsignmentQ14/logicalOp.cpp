#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;cin>>a;
	int b;cin>>b;
    string name;
    cout << "Enter name: ";
    cin >> name;

    int pass;
    cout << "Enter password: ";
    cin >> pass;

    // Compare string 
    if (name == "moiz" && pass == 2723) {
        cout << "Welcome" << endl;
    } else {
        cout << "Invalid username or password." << endl;
}
   if ( if a== 1 || b==2 ){
	cout<<"Con true "<<endl;
}else{
	cout<<"False"<<endl;
}
    return 0;
}
