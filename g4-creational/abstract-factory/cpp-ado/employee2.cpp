#include <vector>

using namespace std;
/*
  DB base classes
*/
class IDBConnection{
  
};
class IDBCommand{

};
class IDataReader{

};

class IDBFactory {
  public:
  virtual IDBConnection *CreateDBConnection()=0;
  virtual IDBCommand *CreateDBCommand()=0;
  virtual IDataReader *CreateDataReader()=0;
};

/*
  Sql family
*/
class SqlConnection: public IDBConnection{

};
class SqlCommand: public IDBCommand{

};
class SqlReader: public IDataReader{

};

class SqlDBFactory: public IDBFactory{
public:
  virtual IDBConnection *CreateDBConnection()=0;
  virtual IDBCommand *CreateDBCommand()=0;
  virtual IDataReader *CreateDataReader()=0;
};

/*
  Oracle family
*/
class OracleConnection: public IDBConnection{

};
class OracleCommand: public IDBCommand{

};
class OracleReader: public IDataReader{

};


/*
如果使用 Factory Method， 每个接口都需要一个Factory
IDBConnection -> IDBConnectionFactory
IDBCommand -> IDBCommandFactory
IDataReader-> IDataReaderFactory
*/


class Employee
{
  int id;
}; 

class EmployeeDAO
{
public:
  vector<Employee> GetEmployees()
  {
    // SqlConnection = new SqlConnection();
    // SqlCommand = new 
    // SqlDataReader
  }
};