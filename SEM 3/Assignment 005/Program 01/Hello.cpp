/*Create overloaded functions to manipulate strings in different ways:
i. concatenation,
ii. repetition,
iii. substring extraction,
iv. case conversion*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function overloading for string concatenation
string concatenate(const string& str1, const string& str2) {
    return str1 + str2;
}

string concatenate(const string& str1, const string& str2, const string& str3) {
    return str1 + str2 + str3;
}

string concatenate(const string& str1, const char* str2) {
    return str1 + str2;
}

// Function overloading for string repetition
string repeat(const string& str, int times) {
    string result;
    for (int i = 0; i < times; i++) {
        result += str;
    }
    return result;
}

string repeat(const char* str, int times) {
    string result;
    for (int i = 0; i < times; i++) {
        result += str;
    }
    return result;
}

// Function overloading for substring extraction
string substring(const string& str, int start) {
    return str.substr(start);
}

string substring(const string& str, int start, int length) {
    return str.substr(start, length);
}

string substring(const char* str, int start, int length) {
    string s(str);
    return s.substr(start, length);
}

// Function overloading for case conversion
string toUpperCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

string toTitleCase(const string& str) {
    string result = str;
    bool capitalizeNext = true;
    
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            } else {
                c = tolower(c);
            }
        } else {
            capitalizeNext = true;
        }
    }
    return result;
}

// Function to convert case of character array
string toUpperCase(const char* str) {
    string s(str);
    return toUpperCase(s);
}

string toLowerCase(const char* str) {
    string s(str);
    return toLowerCase(s);
}

int main() {
    cout << "=== String Manipulation with Overloaded Functions ===" << endl;
    
    // Testing concatenation functions
    cout << "\n1. String Concatenation:" << endl;
    string str1 = "Hello";
    string str2 = " World";
    string str3 = "!";
    
    cout << "concatenate(\"" << str1 << "\", \"" << str2 << "\") = " 
              << concatenate(str1, str2) << endl;
    
    cout << "concatenate(\"" << str1 << "\", \"" << str2 << "\", \"" << str3 << "\") = " 
              << concatenate(str1, str2, str3) << endl;
    
    cout << "concatenate(\"" << str1 << "\", \" C++\") = " 
              << concatenate(str1, " C++") << endl;
    
    // Testing repetition functions
    cout << "\n2. String Repetition:" << endl;
    string repeatStr = "ABC";
    
    cout << "repeat(\"" << repeatStr << "\", 3) = " 
              << repeat(repeatStr, 3) << endl;
    
    cout << "repeat(\"*-\", 5) = " 
              << repeat("*-", 5) << endl;
    
    // Testing substring extraction functions
    cout << "\n3. Substring Extraction:" << endl;
    string longStr = "Programming";
    
    cout << "substring(\"" << longStr << "\", 3) = " 
              << substring(longStr, 3) << endl;
    
    cout << "substring(\"" << longStr << "\", 0, 7) = " 
              << substring(longStr, 0, 7) << endl;
    
    cout << "substring(\"Hello World\", 6, 5) = " 
              << substring("Hello World", 6, 5) << endl;
    
    // Testing case conversion functions
    cout << "\n4. Case Conversion:" << endl;
    string mixedCase = "hElLo WoRlD";
    
    cout << "Original: \"" << mixedCase << "\"" << endl;
    cout << "toUpperCase(\"" << mixedCase << "\") = " 
              << toUpperCase(mixedCase) << endl;
    
    cout << "toLowerCase(\"" << mixedCase << "\") = " 
              << toLowerCase(mixedCase) << endl;
    
    cout << "toTitleCase(\"hello world programming\") = " 
              << toTitleCase("hello world programming") << endl;
    
    cout << "toUpperCase(\"c++ programming\") = " 
              << toUpperCase("c++ programming") << endl;
    
    cout << "toLowerCase(\"OVERLOADED FUNCTIONS\") = " 
              << toLowerCase("OVERLOADED FUNCTIONS") << endl;
    
    return 0;
}

/*=== String Manipulation with Overloaded Functions ===

1. String Concatenation:
concatenate("Hello", " World") = Hello World
concatenate("Hello", " World", "!") = Hello World!
concatenate("Hello", " C++") = Hello C++

2. String Repetition:
repeat("ABC", 3) = ABCABCABC
repeat("*-", 5) = *-*-*-*-*-

3. Substring Extraction:
substring("Programming", 3) = gramming
substring("Programming", 0, 7) = Program
substring("Hello World", 6, 5) = World

4. Case Conversion:
Original: "hElLo WoRlD"
toUpperCase("hElLo WoRlD") = HELLO WORLD
toLowerCase("hElLo WoRlD") = hello world
toTitleCase("hello world programming") = Hello World Programming
toUpperCase("c++ programming") = C++ PROGRAMMING
toLowerCase("OVERLOADED FUNCTIONS") = overloaded functions*/