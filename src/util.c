#include "util.h"
char* trim_leading_spaces(char* str) {
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }
    const int newlen = strlen(str) - i;
    // Something here causes the next byte to get corrupted. I have no idea why. Someone plz fix.
    char dest[newlen+1];
    strncpy(dest, str + i, newlen);
    dest[newlen+1] ='\0';
    return strdup(dest);
}
