#ifndef STATE_MEMBERS_H
#define STATE_MEMBERS_H

#include <iostream>
#include <string>

class Member
{
  enum Membership
  {
    FREE,
    BASIC,
    PREMIUM
  };
  Membership type;
  int current_downloads;
  std::string name;

public:
  Member(const std::string &n) : name(n), type(FREE), current_downloads(0) {}

  void upgrade()
  {
    switch (type)
    {
    case FREE:
      std::cout << "Free, upgrading to basic" << std::endl;
      type = BASIC;
      break;
    case BASIC:
      std::cout << "Basic, upgrading to premium" << std::endl;
      type = PREMIUM;
      break;
    case PREMIUM:
      std::cout << "You are at the highest level" << std::endl;

      break;
    }
  }

  bool can_download()
  {
    switch (type)
    {
    case FREE:
      return current_downloads < 1;
      break;
    case BASIC:
      return current_downloads < 5;
       break;
    case PREMIUM:
      return true;
      break;
    }
  }

  bool download()
  {
      
  }
};
#endif
