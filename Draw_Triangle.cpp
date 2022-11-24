#include <iostream>
#include <cstring>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int row, temp,temp2, flag=1, flag2=1;

    cout << "Nhap row: ";
    cin >> row;

    // Bài 1: Vẽ tam giác đặc

    // temp = temp2 = row;

    // while(temp != 0) {
    //     for(int i=0; i<row; i++) {
    //         if(flag == 1) {
    //             for(int j=0; j<temp2-temp; j++) {
    //                 cout << " ";
    //             }
    //             flag = 0;
    //         }

    //         cout << "* ";
    //         if(i == row-1) 
    //             cout << endl;
    //     }
    //     flag = 1;
    //     temp--;
    //     row = temp;
    // }

    // Bai 2: Vẽ tam giác rỗng
    
    temp = temp2 = row;

    while(temp != 0) {
        for(int i=0; i<row; i++) {
            if(flag == 1) {
                for(int j=0; j<temp2-temp; j++) {
                    cout << " ";
                }
                flag = 0;
            }

            if(row == temp2)
                cout << "* ";

            if(row != temp2) {
                if(flag2 == 1) {
                    for(int k=0; k<(row*2); k++) {
                        if(k == 0 || k == (row*2)-2)
                            cout << "*";
                        else if(k < (row*2)-2)
                            cout << " ";
                    }
                }
                flag2 = 0;
            }         

            if(i == row-1) 
                cout << endl;
        }
        flag2 = 1;
        flag = 1;
        temp--;
        row = temp;
    }

    return 0;
}