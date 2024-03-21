//
// Created by hp on 3/19/2024.
//

#ifndef UNTITLED_HASHTABLE_H
#define UNTITLED_HASHTABLE_H

#include <iostream>
#include <cassert>
#include <list>


class Hashtable{
private:
    static const int HasGroups = 10;
    std::list<std::pair<int,std::string>> table[HasGroups];
public:
    bool isEmpty() const;
    int HasFunction(int k);
    void removeItem(int k);
    void insertItem(int k, std::string v);
    std::string Search(int k);
    void printable();
};



#endif //UNTITLED_HASHTABLE_H
