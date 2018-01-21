#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    int isLowercaseVowel, isUppercaseVowel;

    do {
        printf("Enter an alphabet: ");
        scanf(" %a", &a);
    }
    while (!isalpha(a)
    isLowercaseVowel = (a== 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'_):
    isUppercaseVowel = (a== 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%a is a vowel.", a);
    else
        printf("%a is a consonant.", a);
    return 0;
}
