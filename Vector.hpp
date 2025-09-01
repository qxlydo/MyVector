#include <iostream>

class Vector
{
private:
    /* data */
    int* data;
    int size;
    int capacity;
public:
    Vector(int cap =2) : size(0), capacity(cap){
        data = new int[capacity];
    }
    ~Vector(){
        delete[] data;
    }

    Vector(const Vector& other) :size(other.size), capacity(other.capacity){
        data = new int[capacity];
        for(int i=0; i<size; i++){
            data[i] = other.data[i];
        } 
    }
    Vector& operator=(const Vector& other) {
        if (this == &other) return *this;
        delete[] data;                    
        size = other.size;
        capacity = other.capacity;
        data = new int[capacity];
        for (int i = 0; i < size; i++){
            data[i] = other.data[i];}

        return *this;
    }
        void push_back(int value) {
        if (size >= capacity) {
            capacity *= 2;
            int* newData = new int[capacity];
            for (int i = 0; i < size; i++){
                newData[i] = data[i];}
            delete[] data;
            data = newData;
        }
        data[size++] = value;
    }

    
    int& operator[](int index) {
        return data[index];
    }

    int getSize() const { return size; }

    void print() const {
        std::cout << "[ ";
        for (int i = 0; i < size; i++){
            std::cout << data[i] << " ";}
        std::cout << "]";
    }
};

