#include <stdio.h>
#include <string.h>

// function to encrypt/decrypt file using XOR encryption
// inputFile: pointer to input file
// outputFile: pointer to output file
// key: pointer to encryption key
void xorEncryptDecrypt(FILE *inputFile, FILE *outputFile, const char *key)
{
    // read input file
    char ch;
    int keyIndex = 0;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        // encrypt character
        ch = ch ^ key[keyIndex];

        // write encrypted character to output file
        fputc(ch, outputFile);

        // increment keyIndex use modulo
        keyIndex = (keyIndex + 1) % 8;
    }
}

// main function
// take input file name and output file name as command line arguments
int main(int argc, char *argv[])
{
    // check for correct number of arguments
    if (argc != 3)
    {
        printf("Usage: %s <input file> <output file>\n", argv[0]);
        return 1;
    }

    // encryption key for XOR encryption 8 characters long including null character or any other whitespace
    char key[9];
    printf("Enter encryption key (8 characters):  ");
    // read key from user input excluding newline character or any other whitespace
    scanf("%8s", key);

    // Check if the key is exactly 8 characters long
    if (strlen(key) != 8)
    {
        printf("Encryption key must be 8 characters long.\n");
        return 1;
    }

    // use pointers to input and output file names
    char *inputFileName = argv[1];
    char *outputFileName = argv[2];

    // open input file
    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        printf("Error opening input file: %s\n", inputFileName);
        return 1;
    }

    // open output file
    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL)
    {
        printf("Cannot create output file: %s\n", outputFileName);
        return 1;
    }

    // encrypt/decrypt file
    xorEncryptDecrypt(inputFile, outputFile, key);

    // close files
    fclose(inputFile);
    fclose(outputFile);

    // print success message
    printf("File %s encrypted/decrypted to %s\n", inputFileName, outputFileName);
    printf("Encryption key: %s\n", key);

    return 0;
}