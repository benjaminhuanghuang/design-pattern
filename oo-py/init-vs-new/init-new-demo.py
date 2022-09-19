"""
__new__ is static class method, while __init__ is instance method. 

__new__ has to create the instance first, so __init__ can initialize it.

The __new__() method is called when the class is ready to instantiate itself.
The __new__() method is always a static method of the class, even if no static method decorator is added.

__init__() always called after __new__()

Use __new__ when you need to control the creation of a new instance.

Use __init__ when you need to control initialization of a new instance.

__new__ is the first step of instance creation. It's called first, and is responsible for returning a new instance of your class.

In contrast, __init__ doesn't return anything; it's only responsible for initializing the instance after it's been created.

"""

class A(object):
    _dict = dict()

    def __new__(cls):
        if 'key' in A._dict:
            print("EXISTS")
            return A._dict['key']
        else:
            print("NEW")
            return super(A, cls).__new__(cls)

    def __init__(self):
        print("INIT")
        A._dict['key'] = self
        print("")

a1 = A()
a2 = A()
a3 = A()