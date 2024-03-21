#include "Hashtable.h"




bool Hashtable::isEmpty() const {
    int sum{};
    for(int i{}; i < HasGroups; i++)
        sum+= table[i].size();

    if(!sum)
        return true;
    return false;

}
int Hashtable::HasFunction(int k) {
    return k % HasGroups;
}

void Hashtable::insertItem(int k, std::string v) {
    int HashValue = HasFunction(k);
    auto& cell = table[HashValue];
    auto bIte = begin(cell);
    bool keyExist = false;

    for(; bIte != end(cell); bIte++){
        if(bIte->first == k){
            keyExist = true;
            bIte->second = v;
            std::cout<<"KEY EXist value replaced"<<std::endl;
        }
    }

    if(!keyExist)
    {
        cell.emplace_back(k, v);
    }

}

void Hashtable::removeItem(int k) {
    int HashValue = HasFunction(k);
    auto& cell = table[HashValue];
    auto bIte = begin(cell);
    bool keyExist = false;

    for(; bIte != end(cell); bIte++){
        if(bIte->first == k){
            keyExist = true;
            bIte = cell.erase(bIte);
            std::cout<<"Item was removed"<<std::endl;
        }
    }

    if(!keyExist)
    {
        std::cout<<"Item not found, Pair removed"<<std::endl;
    }
}

void Hashtable::printable() {
    for(int i{}; i < HasGroups; i++) {
        if (table[i].size() == 0) continue;

        auto bITr = table[i].begin();
        for(; bITr != table[i].end(); bITr++){
            std::cout<<"Information "<<bITr->first<<" value "<<bITr->second<<std::endl;
        }
    }
}

std::string Hashtable::Search(int k) {
    int Hashvalue = HasFunction(k);
    auto cell = table[Hashvalue];
    auto Bit = begin(cell);

    for(; Bit != end(cell); Bit++)
    {
        if(Bit->first == k)
        {
            return Bit->second;
        }
    }


    return "";
}
