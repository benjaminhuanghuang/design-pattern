using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Command
{
    public interface IAppCommand<T>
    {
        public T Value { get; }
        T Add(T value);
        T Remove();
    }
}
