#include <iostream>
using namespace std;


int main (){
int n1,f;
cout<<"porfavor ingrese un entero positivo  nùmeros"<<endl;
cin>>n1;

f=0;
for(int i=1;i<=n1;i++){
	f=n1*i+f;
}

cout<<"el factorial de "<<n1<<" es "<<f<<endl;
}
