#OAinclude <iostream>
#include <string.h> // string comparing

using namespace std;

int main(){

  char strog[81]; //gives size (the part in the brackets)
  cout << "Give me a word or phrase with at most 80 characters" << endl;
  cin.get(strog, 81); //keeps reading until 80 characters are up
  cin.get();
  char str2[81];
  char str[81];
  
  int count = 0;
  int together = 0;
 
  for (int k = 0; k < 80; k++){
    if(strog[k] != ' ' && (ispunct(strog[k]) == false)){
      str[together] = tolower(strog[k]);
      together++;
    }
  }

  // make compare
  for (int i = 80; i > -1; i--){
    if (str[i] == '\0'){
      str2[count] = str[i];
      count = 0;
      }
   if (str[i] != '\0'){
      str2[count] = str[i];
      count++;
    }
   str2[count] = '\0';
   
  }

  cout << str << endl;
  cout << str2 << endl;
  if (strcmp(str, str2) == 0){
    cout << "Your word, " << strog << " was a pallindrome" << endl;
  }
  else {
    cout << "not a pallindrome" << endl;
  }
  return 0;
}
