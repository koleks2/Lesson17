#include <iostream>

using namespace std;

void GetNumToTransformToString(unsigned int num, char* str);
void GetNumToHexHex(unsigned int num, char* str);
int BinaryToDecimal(const char* binStr);
int HexToDecimal(const char* hexStr);

int main() {
    int num = 55;

    char binstr[40];
    char hexStr[9];

    GetNumToTransformToString(num, binstr);
    GetNumToHexHex(num, hexStr);

    cout << "1. Decimal to Binary: " << binstr << endl;
    cout << "2. Decimal to Hex:    " << hexStr << endl;
    cout << "3. Binary to Decimal: " << BinaryToDecimal(binstr) << endl;
    cout << "4. Hex to Decimal:    " << HexToDecimal(hexStr) << endl;

    
}

void GetNumToTransformToString(unsigned int num, char* str) {
    int bits = sizeof(num) * 8;

    str[bits] = '\0';

    for (int i = bits - 1; i >= 0; i--) {
        str[i] = (num & 1) ? '1' : '0';
        num >>= 1;
    }
}

void GetNumToHexHex(unsigned int num, char* str) {
    const char hexChars[] = "0123456789ABCDEF";
    int charsCount = sizeof(num) * 2;
    str[charsCount] = '\0';
    for (int i = charsCount - 1; i >= 0; i--) {
        str[i] = hexChars[num & 15];
        num >>= 4;
    }
}

int BinaryToDecimal(const char* binStr) {
    int result = 0;
    for (int i = 0; binStr[i] != '\0'; i++) {
        result <<= 1;
        if (binStr[i] == '1') {
            result |= 1;
        }
        else if (binStr[i] != '0') {
            return -1;
        }
    }
    return result;
}

int HexToDecimal(const char* hexStr) {
    int result = 0;
    for (int i = 0; hexStr[i] != '\0'; i++) {
        result <<= 4;
        char c = hexStr[i];
        int value = 0;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            return -1;
        }
        result |= value;
    }
    return result;
}