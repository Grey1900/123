#include <iostream>

void UpdatelfGreater (int& a, int& b){
  if(a > b){
	  b = a;
  }
}

int main(){
  int a, b;
  std::cin > a >> b;
  
	UpdatelfGreater(a, b);
  std::cout << b;
}