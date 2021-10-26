#include <iostream>
using namespace std;
int n, a, b, c, d;
int main() {
cout<<"masukkan barkode"<<endl;
 cin>>n;
 
 if(n == 123456 ) {
 cout<< "air mineral 600 ml = Rp3.0000"<<endl;
 a = 3000;
 }
 
 else if(n == 11122){
 cout<<"bikuit kemasan = Rp1.000"<<endl;
 b=1000;
 }
 
 else if(n == 112233){
 cout<<"minuman gelas = Rp.1000"<<endl;
 c=1000;
 }
 
 else if(n == 11223344){
 cout<<"mi instan = Rp2.500"<<endl;
 d=2.500;
 }
 
 else
 cout<<"ulangi"<<endl;
 
 return main();
}
