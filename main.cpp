#include <iostream>

int main(){
  
  float a,b,c;
    float areatriangolo,areaquadrato,arearettangolo,areatrapezio;
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
