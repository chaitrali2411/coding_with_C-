#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a word or phrase: ";
    getline(cin, str);  // Supports spaces too

    // Remove spaces and convert to lowercase (optional)
    string cleanStr = "";
    for(char c : str) {
        if(isalnum(c)) {
            cleanStr += tolower(c);
        }
    }

    bool isPalindrome = true;
    int start = 0;
    int end = cleanStr.length() - 1;

    while(start < end) {
        if(cleanStr[start] != cleanStr[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        cout << "It's a palindrome!" << endl;
    else
        cout << "Not a palindrome." << endl;

    return 0;
}
