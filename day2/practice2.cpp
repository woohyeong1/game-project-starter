#include <iostream>
#include <string> // 문자열 출력을 위해 포함

int main() {
    // 1. 정수형 변수 (나이, 점수 등)
    int age = 25;
    int score = 95;

    // 2. 실수형 변수 (키, 시력, 비율 등)
    double height = 175.5;

    // 3. 문자형 변수 (알파벳 하나)
    char bloodType = 'A';

    // 4. 불리언형 변수 (참/거짓)
    bool isStudent = true; // true는 1로 출력됨

    // 5. 문자열 (단어 및 문장 - 표준 라이브러리)
    std::string name = "이우형";

    // 콘솔에 출력해보기
    std::cout << "--- 2일차 변수와 자료형 실습 ---" << std::endl;
    std::cout << "이름: " << name << std::endl;
    std::cout << "나이: " << age << "살" << std::endl;
    std::cout << "키: " << height << "cm" << std::endl;
    std::cout << "혈액형: " << bloodType << "형" << std::endl;
    std::cout << "학생 여부 (1이면 참): " << isStudent << std::endl;
    std::cout << "시험 점수: " << score << "점" << std::endl;

    return 0;
}
