#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "prog2_3.hpp"


    Parser::Parser(){};
    Parser::~Parser(){};
    
    
bool Parser::Parse(vector<string> parsethis){
        

    if(parsethis.size() == 1){//compares to valid words
        if(parsethis[0] == "pop" || parsethis[0] == "add" || parsethis[0] == "sub" || parsethis[0] == "mul" || parsethis[0] == "div" || parsethis[0] == "mod"|| parsethis[0] == "skip"){//start3
            return true;
        }
    }else if(parsethis.size() == 2){
        bool has_only_digits=(parsethis[1].find_first_not_of( "0123456789") == string::npos);//compares to number
        if((parsethis[0] == "push"|| parsethis[0] == "save" || parsethis[0] == "get") && ( has_only_digits == true)){//start5
            return true;
        }
    }else{

        return false;
    }

