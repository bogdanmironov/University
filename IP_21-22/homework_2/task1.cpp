#include <iostream>
#include <cstring>

const int MAX_SIZE_DICT = 128;
const int MAX_SIZE_DICT_ENTRY = 100;
const int MAX_SIZE_INPUT_TEXT = 1024;
const int MAX_SIZE_OUTPUT_TEXT = 2048;

bool isWhitespaceAfterPunc(char);
bool isWhitespaceBeforePunc(char);
// is Quote
void autoCorrect(char[MAX_SIZE_INPUT_TEXT], char[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY]);

int main()
{
    char dict[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY] = {"hi-hello", "zdr-kp"};
    autoCorrect("gi", dict);
}

void autoCorrect(char text[MAX_SIZE_INPUT_TEXT], char dict[MAX_SIZE_DICT][MAX_SIZE_DICT_ENTRY])
{
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

    for (size_t i = 0; i < strlen(text); ++i) {
        if (isWhitespaceAfterPunc(text[i])) {

        }
        if (isWhitespaceAfterPunc(text[i])) {
            
        }
    }
}

bool isWhitespaceAfterPunc(char c)
{
    const char afterPunc[] = {',', '.', '-', '?', '!', ';', ':', '+', '-', '*', '/', ']', '}', ')', '>', '\0'}; // "..."

    for (size_t i = 0; i < strlen(afterPunc); ++i)
    {
        if (afterPunc[i] == c)
        {
            return true;
        }
    }
    return false;
}

bool isWhitespaceBeforePunc(char c)
{
    const char beforePunc[] = {'-', '+', '-', '*', '/', '[', '{', '(', '<', '\0'};

    for (size_t i = 0; i < strlen(beforePunc); ++i)
    {
        if (beforePunc[i] == c)
        {
            return true;
        }
    }
    return false;
}