#include <iostream>

int main(){
  
  float a=0,b=0,c=0;
    float areatriangolo=0,areaquadrato=0,arearettangolo=0,areatrapezio=0;
  std::cout << "inserire tre numeri reali per calcolare area  \n";
std::cin >> a >> b >> c;
   areatriangolo=(a*b)/2;
    areaquadrato=(a*a);
    arearettangolo=(b*a);
    areatrapezio=((a+b)*c)/2;
  std::cout<<"area triangolo = "<<areatriangolo<<std::endl;
   std::cout<<"area quadrato = "<<areaquadrato<<std::endl;
   std::cout<<"area rettangolo = "<<arearettangolo<<std::endl;
   std::cout<<"area trapezio = "<<areatrapezio<<std::endl;
  

return 0;

}
