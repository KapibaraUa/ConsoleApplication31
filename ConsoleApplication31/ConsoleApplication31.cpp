

#include <iostream>
using namespace std;
char* mystrchr(char* str, char s) {
    while (*str) {
        if (*str == s) {
            return str;  
        }
        else
        {
            return 0;
        }
        str++;
    }
    
}
char* mystrstr(char* str1, char* str2) {
    if (*str2 == '\0') {
        return str1;  
    }

    for (; *str1 != '\0'; str1++) {
        char* p1 = str1;
        char* p2 = str2;

        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return str1;  
        }
    }

    return 0;  
}
int main()
{
    std::cout << "Hello World!\n";
}


