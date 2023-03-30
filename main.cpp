#include <iostream>
using namespace std;

int main(){
  float a=0,b=0,c=0;
    float areatriangolo=0,areaquadrato=0,arearettangolo=0,areatrapezio=0;
  cout << "inserire tre numeri reali per calcolare area  \n";
cin >> a >> b >> c;
   areatriangolo=(a*b)/2;
    areaquadrato=(a*a);
    arearettangolo=(b*a);
    areatrapezio=((a+b)*c)/2;
  cout<<"area triangolo = "<<areatriangolo<<endl;
  cout<<"area quadrato = "<<areaquadrato<<endl;
  cout<<"area rettangolo = "<<arearettangolo<<endl;
  cout<<"area trapezio = "<<areatrapezio<<endl;
  

return 0;

}
