//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//
//    LPCWSTR message = L"Вы действительно хотите удалить этот файл?";
//    LPCWSTR title = L"Подтвеждение удаления";
//
//    // ... 0001 0000 - MB_YESNO
//    // ... 0010 0000 - MB_ICONWARNING
//    // ... 1000 0000 - MB_DEFBUTTON2
//    // ... 1011 0000
//
//    UINT msgBoxType = MB_YESNO | MB_ICONWARNING | MB_DEFBUTTON2;
//    int result = MessageBox(NULL, message, title, msgBoxType);
//
//    if (result == IDYES) {
//        cout << "User said yes" << endl;
//    }
//    else if (result == IDNO) {
//        cout << "User said no" << endl;
//    }
//
//
//    //unsigned short number = 10;
//    //// 0000 0000 0000 1010
//    //cout << (number << 1) << endl;
//    //// 0000 0000 0001 0100
//    //cout << (number >> 1) << endl;
//    //// 0000 0000 0000 0101
//    //cout << (~number) << endl;
//    //
//    //unsigned int num2 = 10;
//
//    //cout << (~number) << ' ' << (~num2) << endl;
//
//    //// 0000 0000 0000 1010 -> 1111 1111 1111 0101
//    //// 0000 0000 0000 0000 0000 0000 0000 1010 ->
//    //// 1111 1111 1111 1111 1111 1111 1111 0101
//
//    //unsigned short x = 5, y = 6;
//
//    //cout << (x | y) << endl;
//
//    //cout << (x ^ y) << endl;
//
//    //cout << (x & y) << endl;
//
//
//}
