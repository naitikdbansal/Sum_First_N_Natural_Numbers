#include <iostream>
using namespace std;

int main(){
int n;
long long sum=0;

cout<<"Enter : ";
cin>>n;

for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"Sum is : "<<sum<<endl;
return 0;
}