#include <fstream>
#include <iostream>

using namespace std;

const int MAX_RED = 12;
const int MAX_GREEN = 13;
const int MAX_BLUE = 14;

int main() {
  // move input into an array
  string lines[100];
  ifstream stream;
  stream.open("day2data.txt");
  string line;
  if (stream.is_open()) { // there has to be a better way to do this...
    int i = 0;
    while (getline(stream, line)) {
      lines[i] = line;
      i++;
    }
  }

  return 0;
}
