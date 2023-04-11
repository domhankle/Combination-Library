#include <iostream>
#include <vector>
#include <algorithm>
#include "Combination.h"

int main()
{
    std::vector<int> myInts = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<std::vector<int>> combinationsOfMyInts;

    combinationsOfMyInts = GetCombinations(myInts);

    PrintCombinationCollection(combinationsOfMyInts);
    return 0;
}
