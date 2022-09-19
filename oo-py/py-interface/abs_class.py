import abc

class MyABC(object):
    # Abstract Base Class Definition
    __metaclass__ = abc.ABCMeta

    @abc.abstractmethod
    def do_something(self, value):
        pass

    @abc.abstractproperty
    def some_property(self):
        pass

