#include <iostream>
#include <string.h> // string comparing

using namespace std;

int main(){
  char str[81]; //gives size (the part in the brackets)
  cout << "Give me a word or phrase with at most 40 characters" << endl;
  cin.get(str, 81); //keeps reading until 80 characters are up
  cin.get();
  char str2[81];
  
  int count = 0;
  //if (strcpy(str,str2) ==0){}
  for (int i = 81; i > -1; i--){
    if (str[i] == '\0'){
      str2[count] = '\0';
    }
   if (str[i] != '\0'){
      str2[count] = str[i];
      count++;
    }
   
  }
 
  cout << str << endl;
  cout << str2 << endl;
  if (strcmp(str, str2) == 0){
    cout << "they are equal" << endl;
  }
  return 0;
}
