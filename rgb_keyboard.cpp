#include <iostream>
#include <stdlib.h>

int main(){

  std::cout <<"Ligando rgb...";
    system(R"(xmodmap -e "add mod3 = Scroll_Lock")");
  return 0;
}
