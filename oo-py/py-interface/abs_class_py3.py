import abc


class MyABC(metaclass=abc.ABCMeta):
    @abc.abstractmethod
    def do_something(self, value):
        pass

    @abc.abstractproperty
    def some_property(self):
        pass
