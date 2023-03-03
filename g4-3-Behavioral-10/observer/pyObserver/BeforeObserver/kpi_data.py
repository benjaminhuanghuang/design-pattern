from collections import namedtuple
from itertools import starmap

data = (('new', 10), ('open', 20), ('closed',30))
# factory function for creating tuple subclasses with named fields
# typename is 'KPI', field_names are name and value
nt = namedtuple('KPI', 'name value')
KPI_Data = starmap(nt, data)

# for kpi in KPI_Data:
#     print kpi