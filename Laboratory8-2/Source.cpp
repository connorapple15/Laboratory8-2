#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string str);

int main(){
    string input;

    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        int wordCount = countWords(input);
        cout << "Word count: " << wordCount << endl;
    }
    return 0;
}


int countWords(string str) {
    int count = 0;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        count++;
    }
    return count;
}