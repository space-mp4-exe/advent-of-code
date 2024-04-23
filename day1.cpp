#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // open and read file
  string lines[1000];
  ifstream stream;
  stream.open("day1data.txt");
  string line;
  if (stream.is_open()) {
    int i = 0;
    while (getline(stream, line)) {
      lines[i] = line;
      i++;
    }
  }

  // go through each line and find the first and last number in the line
  int sum = 0;
  for (string line : lines) {
    int firstNum;
    int lastNum;
    int pos;
    pos = line.find_first_of("0123456789");
    firstNum = line.at(pos) - '0';
    firstNum *= 10;
    pos = line.find_last_of("0123456789");
    lastNum = line.at(pos) - '0';
    sum += firstNum + lastNum;
  }
  cout << sum << endl;
  return 0;
}
