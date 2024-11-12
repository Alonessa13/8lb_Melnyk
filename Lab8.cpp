#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
string processString(string input) {
    string noSpaces = ""; 
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != ' ') { 
            noSpaces += input[i]; 
        }
    }
    for (int i = 0; i < noSpaces.size(); i++) {
        for (int j = i + 1; j < noSpaces.size(); j++) {
            if (noSpaces[i] > noSpaces[j]) { 
                char temp = noSpaces[i];
                noSpaces[i] = noSpaces[j];
                noSpaces[j] = temp;
            }
        }
    }
    string uniqueChars = ""; 
    for (int i = 0; i < noSpaces.size(); i++) {
        if (uniqueChars.find(noSpaces[i]) == string::npos) {
            uniqueChars += noSpaces[i]; 
        }
    }
    return uniqueChars; 
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    cout << "Введіть рядок: "; 
    getline(cin, str); 
    string result = processString(str); 
    cout << "Результат: " << result << endl; 

    return 0;
}

    

    
   



	
