#ifndef ENGINE_MAP_H
#define ENGINE_MAP_H

#include <vector>

namespace M4
{

class Allocator;

template<typename K, typename T>
class Map
{

public:

    Map(Allocator* allocator) {}

    void Insert(const K& key, const T& element)
    {
        elements_[key] = element;
    }

    T& PushBackNew(const K& key)
    {
        elements_[key] = T();
        return elements_[key];
    }

    int GetSize() const
    {
        return static_cast<int>(elements_.size());
    }

    T& operator[](const K& key)
    {
        return elements_[key];
    }

    const T& operator[](const K& key) const
    {
        return elements_[key];
    }

private:

    std::map<K, T> elements_;

};

}

#endif
