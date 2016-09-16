#include <iostream>
#include <string.h> // string comparing

using namespace std;

int main(){
  char str[41]; //gives size (the part in the brackets)
  cout << "Give me a word or phrase with at most 40 characters" << endl;
  cin.get(str, 41); //keeps reading until 20 characters are up
  //a comment to see what austins messing up
  cout << str << endl;
  
  //if (strcpy(str,str2) ==0)
  return 0;
}
