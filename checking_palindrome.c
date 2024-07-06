#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag==0) printf("%s is Not Palindrome!\n",str);
    else printf("%s is Palindrome !\n",str);

    return 0;
}
