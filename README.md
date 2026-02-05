
# 함수명 뒤에 const 가 붙으면?:
## void    displayContactInfo() const
## std::string getPhoneNumber() const

// 만약 어떤 함수가 Contact를 'const 참조'로 받았다면?
void printNick(const Contact &c)
    std::cout << c.getNickname() << std::endl;

요런식으로도 사용하고
### read 전용 멤버 변수를 바꾸지않는다.


std::setw(2); >> 2자리수로 출력.
std::setfill('0'); >> 빈공간이 생기면 0으로 채운다.

std::cin >> std::setw(10) >> buffer;
>> buffer에 10자리수만 입력받음.