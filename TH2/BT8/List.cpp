#include "List.h"
#include <iostream>
using namespace std;

List::List() : data(nullptr), size(0) {}
List::~List() { delete[] data; }
unsigned int List::Size() {return size;}

void List::Erase(int index){
    if (index >= size) return;

    double* newData = new double[size - 1];
    for (unsigned int i = 0, j = 0; i < size; ++i) {
        if (i != index) {
            newData[j++] = data[i];
        }
    }
    delete[] data;
    data = newData;
    --size;
}

void List::Insert(double x){
    double* newData = new double[size + 1];
    for (unsigned int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    newData[size] = x;
    delete[] data;
    data = newData;
    ++size;
}
void List::eraseFirst(double x){
    for (unsigned int i = 0; i < size; ++i) {
        if (data[i] == x) {
            Erase(i);
            return;
        }
    }
}
void List::eraseAll(double x){
    unsigned int i = 0;
    while (i < size)
    {
        if(data[i] == x)
            Erase(i);
        else ++i;
    }
}
void List::replace(unsigned int x, double y)
{
    if(x < size)
        data[x] = y;
}
void List::print(){
    cout<<'[';
    for (unsigned int i = 0; i < size; ++i)
    {
        cout<<data[i];
        if(i < size - 1)
            cout<<", ";
    }
    cout<<']';
}