//Task 1 
#include <iostream>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <limits>

const int MAX_SIZE_DICT = 128;
const int MAX_SIZE_DICT_ENTRY = 100;
const int MAX_SIZE_INPUT_TEXT = 1024;
const int MAX_SIZE_OUTPUT_TEXT = 2048;

bool isWhitespaceAfterPunc(char);
bool isWhitespaceBeforePunc(char);
// is Quote
void autoCorrect(char[MAX_SIZE_INPUT_TEXT], char[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY]);

int main() {
    size_t textlen;
    char text[MAX_SIZE_INPUT_TEXT];
    do {
        std::cout<< "Enter text size" << std::endl;
        std::cin>> textlen;
    } while(textlen <= 0 || textlen > MAX_SIZE_INPUT_TEXT);
    std::cout<< "Enter text" << std::endl;
    std::cin.getline(text, textlen);
    
    size_t dictlen;
    char dict[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY];
    do {
        std::cout<< "Enter dict size" << std::endl;
        std::cin>> dictlen;
    } while(dictlen <= 0 || dictlen > MAX_SIZE_DICT);
    std::cout<< "Enter dict" << std::endl;
    for (size_t i = 0; i < dictlen; ++i) {
        std::cin.getline(text, MAX_SIZE_DICT_ENTRY);
    }

    std::cout<< "Correcting..." << std::endl;
    autoCorrect(text, dict);
}

void autoCorrect(char text[MAX_SIZE_INPUT_TEXT], char dict[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY]) {
    char dictA[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY / 2];
    char dictB[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY / 2];
    char out[MAX_SIZE_OUTPUT_TEXT];

    for (size_t i = 0; strcmp(dict[i], ""); ++i) {
        size_t j = 0;

        for (; j < strlen(dict[i]); ++j) {
            if (dict[i][j] == '-')
            {
                break;
            }
            dictA[i][j] = dict[i][j];
        }

        ++j;

        for (size_t k = 0; j < strlen(dict[i]); ++j, ++k) {
            dictB[i][k] = dict[i][j];
        }
    }

    for (size_t i = 0; strcmp(dictA[i], ""); ++i) {
        while (true) {
            char *wrongWord;
            wrongWord = strstr(text, dictA[i]);
            if (wrongWord == NULL) {
                break;
            }
            strncpy (wrongWord,dictB[i],strlen(dictB[i]));
        }
        
    }

    size_t j = 0;
    bool isFirstQuote = true;
    bool isFirstDoubleQuote = true;
    for (size_t i = 0; i < strlen(text); ++i) {
        if (text[i] == '\n') {
            out[j++] = '.';
            out[j++] = '\n';
            continue;
        }

        if (isWhitespaceBeforePunc(text[i])) {
            if (out[j-1] == ' ') {
                out[j++] = text[i];
                continue;
            } else if ((text[i] == '\'')) {
                if (isFirstQuote) {
                    out[j++] = ' ';
                    out[j++] = text[i];
                    isFirstQuote = false;
                    continue;
                }
            } else if ((text[i] == '\"')) {
                if (isFirstDoubleQuote) {
                    out[j++] = ' ';
                    out[j++] = text[i];
                    isFirstDoubleQuote = false;
                    continue;
                }
            } else {
                out[j++] = ' ';
            }
        }
        out[j++] = text[i];
        if (isWhitespaceAfterPunc(text[i])) {
            if (text[i+1] == ' ') {
                continue;
            } else if ((text[i] == '\'')) {
                if (!isFirstQuote) {
                    out[j++] = ' ';
                    isFirstQuote = true;
                }
            } else if ((text[i] == '\"')) {
                if (!isFirstDoubleQuote) {
                    out[j++] = ' ';
                    isFirstDoubleQuote = true;
                }
            } else if (text[i] == '.' && text[i+1] == '.') {
                continue;
            } else {
                out[j++] = ' ';
            }
        }
    }

    if (j > MAX_SIZE_OUTPUT_TEXT) {
        std::cout << "Too many mistakes." << std::endl;
        return;
    } else {
        std::cout<< out << std::endl;
    }
}

bool isWhitespaceAfterPunc(char c) {
    const char afterPunc[] = {'\"', '\'', ',', '.', '-', '?', '!', ';', ':', '+', '-', '*', '/', ']', '}', ')', '>', '\0'}; // "..."

    for (size_t i = 0; i < strlen(afterPunc); ++i) {
        if (afterPunc[i] == c) {
            return true;
        }
    }
    return false;
}

bool isWhitespaceBeforePunc(char c) {
    const char beforePunc[] = {'\"', '\'', '-', '+', '-', '*', '/', '[', '{', '(', '<', '\0'};

    for (size_t i = 0; i < strlen(beforePunc); ++i) {
        if (beforePunc[i] == c) {
            return true;
        }
    }
    return false;
}