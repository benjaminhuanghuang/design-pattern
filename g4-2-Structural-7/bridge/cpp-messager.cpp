class MessagerImp{
public:
  virtual void PlaySound() = 0;
  virtual void Draw() = 0;
  virtual ~MessagerImp()
  {
  }
};

class Messager
{
protected:
  MessagerImp *messagerImp;


};
// 纬度： 平台实现 
class PCMessagerImp: public MessagerImp{

};

class MacMessagerImp: public MessagerImp{

};

// 纬度： 业务抽象
class MessagerLite: Messager{
  // can be PC or Mac
};


class MessagerPerfect: Messager{
  // can be PC or Mac
};


/*
  类的数目  1 + N + M

  平台数 + 服务类型数
*/