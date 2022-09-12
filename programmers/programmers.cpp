// programmers.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

#pragma region LEVEL_1
#include "src/level1.hpp"  
#pragma endregion

#pragma region LEVEL_2
#include "src/level2.hpp"  
#pragma endregion


int main()
{
    std::cout << "Hello World!\n";

    C30L118666 C30L118666;
    //C30L118666.solution({ "AN", "CF", "MJ", "RT", "NA" }, { 5, 3, 2, 7, 5 });

    C30L60057 C30L60057;
    //C30L60057.solution("aabbaccc");

    C30L12924 C30L12924;
    C30L12924.solution(15);
}
