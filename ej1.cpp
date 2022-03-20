#include <iostream>
using namespace std;

int main (){
int n1,n2;
cout<<"porfavor ingrese el primer  nùmeros"<<endl;

cin>>n1;

cout<<"ingrese el segundo nùmero"<<endl;
cin>>n2;

if(n1>n2){
	cout<<"el "<<n1<<" es mayor"<<endl;
}
if(n2>n1) {
	cout<<"el "<<n2<<" es mayor"<<endl;
}
if(n2==n1) {
        cout<<"Son iguales"<<endl;
}

}
