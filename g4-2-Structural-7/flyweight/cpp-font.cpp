#include <map>
#include <string>

using namespace std;

class Font
{
public:
  Font(const string &key)
  {
  }

private:
  string key;
};

class FontFactory
{
private:
  map<string, Font *> fontPool;

public:
  Font *GetFont(const string &key)
  {
    map<string, Font*>::iterator item= fontPool.find(key);
    if(item == fontPool.end()){
      Font *f = new Font(key);
      fontPool[key] = f;
      return f;
    }
    else{
      return fontPool[key];
    }
  }
};