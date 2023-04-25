//
// Created by Илья Бурлак on 25.04.2023.
//

#ifndef LAB_6_ALGORITM_H
#define LAB_6_ALGORITM_H


class Algoritm {
private:

public:
    template <class InputIterator, class UnaryPredicate>
     static bool none_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    static bool any_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred);

};



#endif //LAB_6_ALGORITM_H
