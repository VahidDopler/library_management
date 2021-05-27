#include <iostream>
using namespace std;

#ifndef HEAD_H
#define HEAD_H

class matrix
{
private:
    int size;
    int ** arr=new int *[size];
public:
    matrix(int size);
    void set_matrix();
    void show_matrix();
    void chech_matrix();
    ~matrix();
};

#endif // HEAD_H