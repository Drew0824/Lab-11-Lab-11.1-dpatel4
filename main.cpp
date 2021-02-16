#include <iostream>
using namespace std;

int main() {
  string answer;
  cout << "What is the capital of France? \n";
  cin >> answer;

  while (answer != "Paris")
  {
    cout << "Incorrect! Try again.\n";
    cout << "What is the capital of France? \n";
    cin >> answer;
  }

  cout << "Correct!\n";
}
// What is the capital of France? is in the loop and will keep repeating until the correct answer is enterted which is Paris.If the answer is correct it will stop looping but if the answer is incorrect everytime it will keep looping forever.