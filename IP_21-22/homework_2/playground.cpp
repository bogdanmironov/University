#include <iostream>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <limits>

const char punct[] = {',', '.', '-', '?', '!', ';', ':', '\0'}; // "..."

bool isPunctoation(char c)
{
    for (size_t i = 0; i < strlen(punct); ++i) {
        if (punct[i] == c) {
            return true;
        }
    }
    return false;
}

int main() {

}