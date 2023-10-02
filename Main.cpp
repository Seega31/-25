#include <iostream>
#include <string>
#include <algorithm>

std::string createSubstring(const std::string& str, char sym) {
    std::string newStr;
    for (char c : str) {
        if (c == sym) {
            newStr += sym;
        }
    }
    return newStr;
}
bool isPalindrome(const std::string& word) {
    std::string lowerWord = word;
    std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);
    std::string reversedWord = lowerWord;
    std::reverse(reversedWord.begin(), reversedWord.end());
    return lowerWord == reversedWord;
}
int countSpecialCharacters(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}
std::string findLastOccurrence(const std::string& inputString, char symbol) {
    size_t lastIndex = inputString.find_last_of(symbol);
    if (lastIndex != std::string::npos) {
        return inputString.substr(lastIndex);
    }
    return "";
}int main() {
    setlocale(LC_ALL, "Russian");

    //Задача 1   
    std::string str;
    char sym;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    std::cout << "Введите символ: ";
    std::cin >> sym;
    std::string new_str;
    for (char c : str) {
       if (c == sym) {
       new_str += sym;
        }
    }
    std::cout << "Новая строка: " << new_str << std::endl;   


    //Задача 2
    std::string word;
    std::cout << "Задача №2 \nВведите слово: ";
    std::cin >> word;
    bool result = isPalindrome(word);
    std::cout << (result ? "Слово является палиндромом." : "Слово не является палиндромом.") << std::endl;

    //Задача 3
    std::string str1;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str1);
    int specialCharactersCount = countSpecialCharacters(str1);
    std::cout << "Количество специальных символов: " << specialCharactersCount << std::endl;

    //Задача 4
    std::string inputString1;
    char symbol;
    std::cout << "Задача №4 \nВведите строку: ";
    std::getline(std::cin, inputString1);
    std::cout << "Введите символ: ";
    std::cin >> symbol;
    std::string result1 = findLastOccurrence(inputString1, symbol);
    std::cout << "Подстрока с последним вхождением символа: " << result1 << std::endl;

    return 0;
}

