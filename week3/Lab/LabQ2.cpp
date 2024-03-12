#include <iostream>
#include <string>

using namespace std;

string reverseString(string text) {
    string reversedText = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversedText += text[i];
    }
    return reversedText;

    // // lecturer answer much more efficient
    // char a;
    // for (int i = 0; i < text.length() /2; i++) {
    //     a = text[i];
    //     text[i] = text[text.length() - 1 - i];
    //     text[text.length() - 1 - i] = a;
    // }
    // return text;
};

bool compareString(string text1, string text2){
    return text1 == text2;

    // lecturer answer
};

int main () {
    string text;
    cout << "Enter an string: ";
    cin >> text;

    string reversedText = reverseString(text);
    cout << "Reversed string: " << reversedText << endl;

    if (compareString(text, reversedText)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome!" << endl;
    }
    return 0;
}