#include <iostream>
#include <string> // 문자열 입력을 위해 포함

int main() {
    std::string name;
    int age;

    std::cout << "--- 3일차 사용자 입력 받기 실습 ---" << std::endl;

    // 1. 이름 입력받기
    std::cout << "당신의 이름을 입력해주세요: ";
    std::cin >> name; // 키보드로 입력받은 값을 name 변수에 저장

    // 2. 나이 입력받기
    std::cout << "당신의 나이를 입력해주세요: ";
    std::cin >> age;  // 키보드로 입력받은 값을 age 변수에 저장

    // 3. 입력받은 결과 출력하기
    std::cout << "\n[입력 결과 확인]" << std::endl;
    std::cout << "안녕하세요, " << name << "님! (" << age << "살)" << std::endl;
    std::cout << "만나서 반갑습니다. 앞으로 C++ 열심히 해봐요!" << std::endl;

    return 0;
}
