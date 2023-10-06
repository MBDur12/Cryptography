// Outputs frequency analysis for a given ciphertext

#include <iostream>
#include <iomanip>
#include <string>
#include <map>

int main()
{

    std::string ciphertext;
    std::string line;

    std::cout << "Enter ciphertext (Ctrl+D or Ctrl+Z to end on Unix/Windows): ";
    std::getline(std::cin, ciphertext);

    while (std::getline(std::cin, line))
    {
        ciphertext += line;
    }

    std::map<char, int> charCountMap;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        charCountMap[c] = 0;
    }

    int totalChars = ciphertext.length();
    for (int i = 0; i < totalChars; i++)
    {
        charCountMap[ciphertext[i]] = charCountMap[ciphertext[i]] + 1;
    }

    std::cout << "FREQUENCY ANALYSIS" << std::endl;

    for (std::pair<char, int> i : charCountMap)
    {
        float percentage;
        if (i.second != 0)
            percentage = (float)(i.second) / totalChars * 100;
        else
            percentage = 0.0;

        std::cout << i.first << "\t" << std::fixed << std::setprecision(2) << percentage << "% " << i.second << std::endl;
    }

    return 0;
}