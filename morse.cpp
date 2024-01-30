#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <list>
#include <map>
#define ever ;;

int main() {

    std::map<char, std::string> morseCodeMap = {
            {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
            {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
            {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
            {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
            {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
            {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
            {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
            {'0', "-----"}, {' ', " "}, {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."},
            {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"},
            {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"},
            {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
            {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"},
            {'z', "--.."}
    };

    std::map<std::string, char> inverseMorseCodeMap = {};
    for(std::pair<char, std::string> keyPair : morseCodeMap){
        inverseMorseCodeMap.insert({keyPair.second, keyPair.first});
    }

//    for(std::pair<std::string, char> keyPair : inverseMorseCodeMap){
//        std::cout << keyPair.first << " -> " << keyPair.second << std::endl;
//    }

    for(ever) {
        std::cout << "1. Text to morse " << std::endl;
        std::cout << "2. Morse to text " << std::endl;
        std::cout << "3. Quit " << std::endl;


        int userinputoptions; //#valid
        std::cin >> userinputoptions;

        if (userinputoptions == 1) {
            std::vector<std::string> cppArray;
            std::string text;
            std::cout << "Input text to translate into morse :)";
            std::cin.ignore(1, '\n');
            std::getline(std::cin, text);
            const char *characters = text.c_str();
            for (int i = 0; i < text.length(); i++) {
//                std::cout << "character : " << characters[i] << std::endl;
                auto b = morseCodeMap[characters[i]];
                cppArray.push_back(b);

            }
            for (std::string poggers: cppArray) {
                std::cout << poggers << " ";
            }
            std::cout << std::endl;


        }


        if (userinputoptions == 2) {
            std::string text;
            std::cout << "Input morse to translate into text :)";
            std::cin.ignore(1, '\n');
            std::getline(std::cin, text);

//            std::cin >> text;
            std::string delimiter = " ";
            size_t start;
            size_t end = 0;
            std::vector<std::string> out;
            std::vector<char> cppArray;

            while ((start = text.find_first_not_of(delimiter, end)) != std::string::npos) {
                end = text.find(delimiter, start);
                out.push_back(text.substr(start, end - start));
            }
            for (std::string omg: out) {
                char b = inverseMorseCodeMap[omg];
                cppArray.push_back(b);
            }
            for (char lol: cppArray) {
                std::cout << lol;
            }
            std::cout << std::endl;
        }
        if (userinputoptions == 3) {
            return 0;
        }
    }
}