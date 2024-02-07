#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <random>

int randint(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

std::vector<int>
w={255,255,255},
g={128,128,128},
o={223,113,38},
b={0,0,0};

std::vector<std::vector<std::vector<int>>>honk=
{
{g,g,g,g,g,w,w,g},
{w,g,g,g,g,b,w,b},
{w,w,g,g,g,w,o,o},
{w,w,w,w,w,w,w,g},
{w,w,w,w,w,w,w,g},
{g,w,w,w,w,w,g,g},
{g,g,o,g,g,o,g,g},
{g,g,o,g,g,o,g,g}
};

std::vector<std::string>war_declaration=
{
"Peace was never an option.",
"HONK!!",
"I am in your walls.",
"bred \n ____\n(~_~_)"
};


int main()
{
for (uint16_t i=0;i<honk.size();++i)
{
 for (uint16_t n=0;n<honk[i].size();++n)
 {
  std::cout<<"\033[48;2;"<<honk[i][n][0]<<";"<<honk[i][n][1]<<";"<<honk[i][n][2]<<"m  \033[0m";
 }
 std::cout<<"\n";
}
std::cout<<"\033[0m"<<war_declaration[randint(0,war_declaration.size()-1)]<<std::endl;





}
