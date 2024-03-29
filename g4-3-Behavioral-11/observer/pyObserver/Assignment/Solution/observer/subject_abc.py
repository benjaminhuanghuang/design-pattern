import abc
from observer import AbsObserver

class AbsSubject(object):
    __metaclass__ = abc.ABCMeta
    _observers = set()
    
    def attach(self, observer):
        if not isinstance(observer, AbsObserver):
            raise TypeError('Observer not derived from AbsObserver')
        # add new observer to the set
        self._observers |= {observer}
        
    def detach(self, observer):
        # remove observer
        self._observers -= {observer}
        
    def notify(self, value=None):
        for observer in self._observers:
            if value is None:
                observer.update()
            else:
                observer.update(value)

    def __enter__(self):
        return self
        
    def __exit__(self, exc_type, exc_value, traceback):
        self._observers.clear()