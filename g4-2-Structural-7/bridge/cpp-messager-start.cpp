class Messager
{

public:
  virtual void PlaySound() = 0;
  virtual void Draw() = 0;
  virtual ~Messager()
  {
  }
};

class PCMessager: Messager{

};

class PCMessagerLite: PCMessager{

};


class MacMessager: Messager{

};

class MacMessagerLite: MacMessager{

};


/*
  类的数目  1 + N + M*N

  平台数 * 服务类型数
*/