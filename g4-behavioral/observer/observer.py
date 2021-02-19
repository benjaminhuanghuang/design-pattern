class Subject:
  def __init__(self):
      self.observers = set()
  

  def registere(self, observer):
    self.observers.add(observer)


  def runegistere(self, observer):
    self.observers.discard(observer)  

  def notify(self, message):
    for observer in self.observers:
      observer.update(message)

  
class Observer:
  def __init__(self, name):
      self.name = name

  def update(self, data):
    print('{} get message: {}'.format(self.name, data))



master = Subject()

clientA = Observer('A')
clientB = Observer('B')
clientC = Observer('C')

master.registere(clientA)
master.registere(clientB)
master.registere(clientC)

master.notify("hello")


 
 