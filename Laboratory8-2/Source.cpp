#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main(){

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