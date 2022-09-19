from myobjectfactory import MyObjectFactory

myObj = MyObjectFactory.create_object('myotherclass')  #"myotherclass"

if myObj:
    myObj.do_something('something')
else:
    print('Not doing anything.')