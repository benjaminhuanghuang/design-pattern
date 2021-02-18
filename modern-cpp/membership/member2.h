#ifndef STATE_MEMBERS2_H
#define STATE_MEMBERS2_H

#include <iostream>
#include <string>

class Membership
{
  std::string _name;

public:
  Membership(const std::string &n) : _name(n) {}
  const std::string &name()
  {
    return _name;
  }
  virtual int download_per_day() const = 0;
  virtual Membership *upgrade() const = 0;
};

class PremiuMember : public Membership
{
private:
  /* data */
public:

};

class BasicMember : public Membership
{
public:
  BasicMember() : Membership("Basic") {}
  int download_per_day() const override
  {
    return 1;
  }

};

class FreeTier : public Membership
{
public:
  FreeTier() : Membership("Free") {}
  int download_per_day() const override
  {
    return 1;
  }

  virtual Membership *upgrade() const override
  {
    std::cout << "Free, upgrading to basic" << std::endl;
    return new BasicMember();
  }
};

class Member
{
  Membership *_role;
  std::string _name;
  int current_downloads;

public:
  Member(const std::string &n) : _name(n), current_downloads(0), _role(new FreeTier()) {}
  const std::string &name()
  {
    return _name;
  }

  bool can_download() const
  {
    return (_role->downloads_per_day() > current_downloads);
  }

  bool download()
  {
    if (can_download())
    {
      ++current_downloads;
      return true;
    }
    return false;
  }
  void upgrade()
  {
    _role = _role->upgrade();
  }
};
#endif
