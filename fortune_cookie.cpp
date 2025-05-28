#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  string fortunes[] = {
    "Don't pursue happiness – create it.",
    "All things are difficult before they are easy.",
    "The early bird gets the worm, but the second mouse gets the cheese.",
    "Someone in your life needs a letter from you.",
    "The fortune you search for is in another cookie.",
    "Help! I'm being held prisoner in a Chinese bakery!"
  };
  srand(time(NULL));
  int index = rand() % 6;
  cout << "🥠 " << fortunes[index] << endl;

  cout << "\nLucky numbers: ";
  for(int i = 0; i < 6; i++){
    cout << rand() % 51 << " ";
  }
  return 0;
}
