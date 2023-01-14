#ifndef MYUTILS_RAND_GEN_H
#define MYUTILS_RAND_GEN_H


#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

int rand_gen_range(int start, int end) {
  std::uniform_int_distribution<> distr(start, end);
  return distr(gen);
}


#endif // MYUTILS_RAND_GEN_H
