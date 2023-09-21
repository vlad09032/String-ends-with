/*
Complete the solution so that it returns true if the first argument(string) passed in ends
with the 2nd argument (also a string).
*/
#include<iostream>
#include <string>

bool solution(std::string const& str, std::string const& ending) {
    std::string newstr = str;
    int stepstr = str.length();
    int stepend = ending.length();
    newstr.erase(0,stepstr-stepend);
    if(newstr==ending)
        return true;
    return false;
}

int main()
{
    std::cout << solution("abc", "");
}