#ifndef ENGINE_PAIR_H
#define ENGINE_PAIR_H

namespace M4
{

template<typename F, typename S>
class Pair
{

public:

    Pair(const F& f, const S& s) {
        first_ = f;
        second_ = s;
    }

    Pair(const Pair<F,S>& rvl) {
        this->second_ = rvl.second_;
        this->first_ = rvl.first_;
    }

    F& first() {
        return first_;
    }

    const F& first() const {
        return first_;
    }

    S& second() {
        return second_;
    }

    const S& second() const {
        return second_;
    }

private:

    F first_;
    S second_;
};

}

#endif
