/*
  1 data  -> multi view or UI

  Delegations + Inheritance
*/
#include <vector>
using namespace std;

class Subject
{
private:
  int m_value;
  vector<Observer *> m_views;

public:
  void attach(Observer *obs)
  {
    m_views.push_back(obs);
  }

  void nofify()
  {
    for (int i; i < m_views.size(); i++)
    {
      m_views[i]->update(this);
    }
  }
};

class Observer
{
public:
  // refresh when data/subject was changed
  virtual void update(Subject *subject) = 0;
};