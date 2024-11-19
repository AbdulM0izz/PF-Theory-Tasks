#include <iostream>
using namespace  std;
int main(){
	//Veriable initialization
	cout<<" Press 1 For School of Computer science : "<<endl;
	 cout<<" Press 2 for School of Business: "<<endl;
	  cout<<" Press 3 for School of Engineering: "<<endl;
    int comp;
    cin>>comp;

    switch(comp){
    	//Departments Informations With Numbers
	
     case 1: cout<<" 1 Departament of Informatics "<<endl <<" 2 Department of Machine learning "<<endl;   
	 case 2: cout<<"School Of Business "<<"\n 1: Department Of Commerce  "<<"\n 2: Department Of Purchasing "<<endl;
	  case 3: cout<<"School Of Engineering  "<<"\n 1: Department Of Machanical Engineering "<<"\n 2: Department Of Mechatronic Engineering "<<endl;

}

    return 0;
}
