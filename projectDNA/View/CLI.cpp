//
// Created by kierszen on 12/29/18.
//

#include <string>
#include <stdio.h>
#include <iostream>
#include "CLI.h"

using std::cin;
using std::cout;
using std::string;

string CLI::get_input()
{
  string input;
  cout<<"> cmd >>> ";
  std::getline(cin, input);
  return input;
}

void CLI::print_output(std::string str)
{
  cout<<str;
}


