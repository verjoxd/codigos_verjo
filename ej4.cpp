#include <iostream>
using namespace std;
int main (){
int n1,aux,aux2=0,c=0;
cout<<"porfavor ingrese el tamaño que desea para su array 1D "<<endl;
cin>>n1;
int v[n1];
for(int i=1;i<=n1;i++){
        v[i]=1 + rand()% 50;
	aux=v[i];
	if (aux>aux2){
		c=i;
		aux2=v[i];}}

cout<<"su array es ["<<endl;
for(int j=1;j<=n1;j++){
	cout<<" "<<v[j];}
cout<<"] El mayor nùmero se encuentra en la posiciòn "<<c<<" del array"<<endl;
}

