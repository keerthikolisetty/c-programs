#include <stdio.h>

int main()
{
    char arr[30], s1[10], s2[10], s3[20];
    int opt, i, j, len = 0;

    printf("Enter any option\n");
    printf("1: Find out length of the string\n");
    printf("2: Concatenate the two strings\n");
    printf("3: Reverse of the string\n");
    printf("4: Copy of the string\n");
    printf("Enter the choice: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:   // LENGTH
        printf("Enter any string\n");
        scanf("%s", arr);

        for (i = 0; arr[i] != '\0'; i++);
        printf("The length of the string is %d\n", i);
        break;

    case 2:   // CONCATENATION
        printf("String Concatenation\n");

        printf("Enter the first string:\n");
        scanf("%s", s1);

        printf("Enter the second string:\n");
        scanf("%s", s2);

        // Copy s1 to s3
        for (i = 0; s1[i] != '\0'; i++)
            s3[i] = s1[i];

        // Append s2
        for (j = 0; s2[j] != '\0'; j++)
            s3[i + j] = s2[j];

        s3[i + j] = '\0';

        printf("The concatenated string is %s\n", s3);
        break;

    case 3:   // REVERSE
        printf("Reverse the string\n");
        printf("Enter the string:\n");

        scanf("%s", s1);

        for (i = 0; s1[i] != '\0'; i++);
        j = i - 1;

        for (i = 0; j >= 0; i++, j--)
            s2[i] = s1[j];

        s2[i] = '\0';

        printf("Reversed string is %s\n", s2);
        break;

    case 4:   // COPY
        printf("Copy the string\n");
        printf("Enter any string:\n");
        scanf("%s", s1);

        for (i = 0; s1[i] != '\0'; i++)
            s2[i] = s1[i];

        s2[i] = '\0';

        printf("Copied string is %s\n", s2);
        break;

    default:
        printf("Invalid option\n");
    }
    return 0;
}

