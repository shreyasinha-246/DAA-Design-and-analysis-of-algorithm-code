#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], stuffed[200], destuffed[100];
    int i, j = 0, k = 0, count = 0;

    printf("Enter the bit stream: ");
    scanf("%s", data);

    // Bit Stuffing
    for(i = 0; data[i] != '\0'; i++)
    {
        stuffed[j++] = data[i];

        if(data[i] == '1')
            count++;
        else
            count = 0;

        if(count == 5)
        {
            stuffed[j++] = '0';
            count = 0;
        }
    }

    stuffed[j] = '\0';

    printf("After Bit Stuffing: %s\n", stuffed);

    // Bit De-stuffing
    count = 0;

    for(i = 0; stuffed[i] != '\0'; i++)
    {
        destuffed[k++] = stuffed[i];

        if(stuffed[i] == '1')
            count++;
        else
            count = 0;

        if(count == 5)
        {
            i++;          // Skip the stuffed 0
            count = 0;
        }
    }

    destuffed[k] = '\0';

    printf("After Bit De-stuffing: %s\n", destuffed);

    return 0;
}