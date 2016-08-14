#include <dplyr.h>
#include <vector>

using namespace dplyr;

DataFrame foo( DataFrame df, CharacterVector classes){
    std::vector<int> first (4, 100);
    return subset(df, first, classes);
}
