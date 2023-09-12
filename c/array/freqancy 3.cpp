#include<stdio.h>

int main()
{
    char str[1000];
    int i;

    printf("Enter a string of lowercase English letters : ");
    fgets(str, sizeof(str), stdin);

    // step 1 : creating a freq[] array
    int freq[26] = {0};

    // step 2: traversing the string
    for (i = 0; str[i] != '\0'; i++)
    {
        // increment character count at the ith position by 1
        freq[str[i]-'a'] += 1;
    }

    // step 3 : traversing the freq[] array to print character
    printf("The frequency of characters is -\n");
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            // here, we can obtain characters by adding the ASCII value of 'a'
            // ASCII(b) = ASCII(a) + 1
            char char_ = 'a' + i;
            printf("\t%c = %d\n", char_, freq[i]);
        }
    }

    return 0;
}

