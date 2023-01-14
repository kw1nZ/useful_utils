#ifndef MYUTILS_PAIR_H
#define MYUTILS_PAIR_H


template<typename TypeA, typename TypeB>
struct Pair {
    TypeA first;
    TypeB second;

    Pair(TypeA first, TypeB second) : first{first}, second{second} {};

    Pair(Pair const &pi) : first{pi.first}, second{pi.second} {};  // copy constructor
    Pair(Pair &&pi) noexcept: first{pi.first}, second{pi.second} {};  // move constructor
};

typedef Pair<int, int> PairInt;
typedef Pair<double, double> PairDou;


#endif //MYUTILS_PAIR_H
