// 기본 입출력 함수를 내기 위한 라이브러리
#include <iostream>
// 13:41(설날까지 완료 목표!)(그전까지 알고리즘 특강은  JAVA로 풀어서 제출하기)

int main(){
    // cout에 옆쪽 문장을 넣는 개념임
    // 아마 그래서 자료에 좌측값 우측값 개념이 나온듯함.
    std::cout << "I like pizza!" << '\n'; // standard character output, ;은 컴파일러가 이문장은 끝났다는 것을 인식하기 위한 것
    std::cout << "It's really good!"<< std::ends; // ends은 출력 line을 바꾸기 위한 것 && \n도
    return 0;
}