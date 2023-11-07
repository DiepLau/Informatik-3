#include "vectorint.hpp"
#include <fmt/chrono.h>
#include <iostream>

#include "CLI/CLI.hpp"


VectorInt::VectorInt(int capacity) {
    mp_Data = new int[capacity];
    vec_capacity = capacity; 
    for(int i = 0; i<vec_capacity; i++){
        
    }
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}

void VectorInt::push_back(const int value)
{
    // Second variant of push_back (trivial)
    /*auto start = std::chrono::system_clock::now();

    m_size += 1;
    tmp = new int[m_size];
    for (int i; i < m_size; i++){
        *tmp = *mp_Data;
    }
    tmp[m_size-1] = value;

    delete[] mp_Data;
    mp_Data = tmp;
    tmp = nullptr;
     
    auto end = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    fmt::print("Pushing back a vector with the trivial method took {}\n", elapsed);*/

    // Second variant of push_back (better)
    auto start = std::chrono::system_clock::now();
    for (int i; i < vec_capacity; i++){
        if (*mp_Data == 0){
            *mp_Data = value;
        }
        mp_Data += 1;

        if(mp_Data = nullptr){
            vec_capacity *= 2; 
            tmp = new int[vec_capacity]; 
            for (int i; i < m_size; i++){
            *tmp = *mp_Data;
            }
            tmp[m_size-1] = value;
        }  
    } 
    auto end = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    fmt::print("Pushing back a vector with the trivial method took {}\n", elapsed);
    
    delete[] mp_Data;
    mp_Data = tmp;
    tmp = nullptr;
}


// at(): Access specified element with bounds checking 
&int VectorInt::at(const int position){
    for (int i; i < vec_capacity; i++){
        if (i == position){
            return *mp_Data;
        }
    }
}

// size(): returns the number of elements 
int VectorInt::size(){
    int* last; int* first;
    first = mp_Data;
    for (last = mp_Data; *last; last++){
    }
    return last - first;
}

//resize(): changes the number of elements stored 
void VectorInt::resize(int count, const int& value){
    if (count = mp_Data.size())
}