#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
	}
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

