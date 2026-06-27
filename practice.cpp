#include <iostream>

using namespace std;

unsigned short num = 14;

void everybit(unsigned short num);
void EvenOdd(unsigned short num);
unsigned short ClearBit(unsigned short num, short index);
unsigned short SetBit(unsigned short number, short index);
unsigned short InvertBit(unsigned short number, short index);
void BitsCounter(unsigned short number);
bool isPowerTwo(unsigned short number);
unsigned short getLowestBitIndex(unsigned short number);

int main() {
    // task 1
    /*
    everybit(num);
    cout << endl;
    */
    // task 2
    /*
    EvenOdd(num);
    */
    // task 3
    /*
    unsigned short newnum = SlearBit(num, 2);
    cout << newnum << endl;
    */
    // task 4
    /*
    unsigned short newnum = SetBit(num, 2);
    cout << newnum << endl;
    */
    // task 5
    /*
    unsigned short newnum = InvertBit(num, 3);
    cout << newnum << endl;
    */
    // task 6
    /*
    BitsCounter(num);
    */
    // task 7
    /*
    bool IsPower = isPowerTwo(num);
    if (IsPower) {
        cout << "Number is power of two" << endl;
    }
    else {
        cout << "Number is not power of two" << endl;
    }
    */
    // task 8
    /*
    short lowestIndex = getLowestBitIndex(num);
    cout << "Index of lowest bit: " << lowestIndex << endl;
    */
    // task 9
    unsigned short updatedNum = clearLowestSetBit(num);

    cout << "New num: " << updatedNum << endl;
    cout << "Became a bit: ";
    everybit(updatedNum);
}

void everybit(unsigned short num) {
	for (int i = 16; i >= 0; i--) {
        int mask = 1 << i;
        if ((num & mask) != 0) {
            cout << '1';
        }
        else {
            cout << '0';
        }
	}
}
void EvenOdd(unsigned short num) {
    if ((num & 1) != 0) {
        cout << "number is odd" << endl;
    }
    else {
        cout << "number is even" << endl;
    }
}
unsigned short ClearBit(unsigned short num, short index) {
    return num & ~(1 << index);
}
unsigned short SetBit(unsigned short number, short index) {
    return number | (1 << index);}
unsigned short InvertBit(unsigned short number, short index) {
    return number ^ (1 << index);
}
void BitsCounter(unsigned short number) {
    int zero = 0;
    int one = 0;
    for (int i = 16; i >= 0; i--) {
        if ((number & (1 << i)) != 0) {
            one++;
        }
        else {
            zero++;
        }
    }
    cout << "Zeros: " << zero << endl << "Ones: " << one << endl;
}
bool isPowerTwo(unsigned short number) {
    if (number <= 0) return false;
    return (number & (number - 1)) == 0;
}
unsigned short getLowestBitIndex(unsigned short number) {
    if (number == 0) return -1;
    short index = 0;
    while ((number & 1) == 0) {
        number >>= 1;
        index++;
    }
    return index;
}
unsigned short clearLowestSetBit(unsigned short number) {
    return number & (number - 1);
}