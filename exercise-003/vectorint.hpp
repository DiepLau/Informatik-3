#ifndef MY_INTEGER_VECTOR_HPP
#define MY_INTEGER_VECTOR_HPP

class VectorInt {
public:
    int* tmp;
    int vec_capacity;
    VectorInt(int);
    ~VectorInt();
    void push_back(const int); 
    int at(const int);
    int size();
    void resize(int, const int&);
private:
    int m_size;
    int* mp_Data;
};

#endif