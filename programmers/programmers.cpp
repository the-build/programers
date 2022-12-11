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

#include "src/Level0.hpp"


int main()
{
    std::cout << "Hello World!\n";
    //Level0().courses_30_lessons_120812({1,2,3,3,3,4});

    //Level1().courses_30_lessons_118666({ "AN", "CF", "MJ", "RT", "NA" }, { 5, 3, 2, 7, 5 });

    //Level2().courses_30_lessons_60057("aabbaccc");

    //Level2().courses_30_lessons_12924(15);
}
