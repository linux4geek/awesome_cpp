//sizeofʹ���ܽ�
#include "sizeof.h"
#include <string>
#include <iostream>

using namespace std;

void Dump(int* data, int len) {
    //���뺯��֮���������ᱻת��Ϊָ�룬sizeofֻ���ָ��ռ���ֽ�����
    int data_size = sizeof(data); 
    cout << "data_size: " << data_size << endl;
    for (int i=0; i<len; i++){
        cout << data[i] << ",";
    }
    cout << endl;
}

void SizeOfMain() {
    cout << "SizeOfMain" << endl;
    int data[] = { 1, 4, 6, 9, 8, 5};
    int data_size = sizeof(data);
    cout << "before data_size: " << data_size << endl;
    Dump(data, sizeof(data)/sizeof(data[0]));
}
