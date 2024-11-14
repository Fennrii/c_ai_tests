#include <iostream>



float investment(float principle, float interest, float input){
  return principle + (principle * interest/100) + input;
}

int main (int argc, char *argv[]) {

  float start = 0;
  float interest = 9;
  float input = 4500;
  float current = start;
  for (int i = 0; i <= 30; i++){
    if (i > 20){
      current = investment(current, interest, 0);
    }
    else {
    
      current = investment(current, interest, input);
    }
    std::cout << (int)current << "\n";
  }
  return 0;
}

