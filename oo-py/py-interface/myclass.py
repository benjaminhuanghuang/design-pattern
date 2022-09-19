from abs_class_py3 import MyABC

class MyClass(MyABC):
    ''' Implementation of MyABC '''

    def __init__(self, value=None):
        self._myprop = value

    def do_somthing(self, value):
        ''' Implementation of abstract method '''
        self._myprop *= 2 + value

    @property
    def some_property(self):
        ''' Implementation of abstract property '''
        return self._myprop


if __name__ == "__main__":
    pass
