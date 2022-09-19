class Vehicle(object):

    def __init__(self, type_name):
        self.type = type_name
        self.wheels = None
        self.doors = None
        self.seats = None

    def view(self):
        print(
            "This vehicle is a " +
            self.type +
            " with; " +
            str(self.wheels) +
            " wheels, " +
            str(self.doors) +
            " doors, and " +
            str(self.seats) +
            " seats."
            )

class VehicleBuilder(object):
    """
    An abstract builder class, for concrete builders to be derived from.
    """
    __metadata__ = abc.ABCMeta

    @abc.abstractmethod
    def make_wheels(self):
        raise

    @abc.abstractmethod
    def make_doors(self):
        raise

    @abc.abstractmethod
    def make_seats(self):
        raise