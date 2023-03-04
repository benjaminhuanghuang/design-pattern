using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Command
{
    public class AddNumbersCommand : BaseCommand<int>
    {
        public AddNumbersCommand(int value) : base(value)
        {
            InternalValue = value;
        }

        public override int Add(int value)
        {
            Entries.Add(value);
            InternalValue += value;
            return Value;
        }
        public override int Remove()
        {
            //Should add error checking here
            var lastEntry = Entries[^1];
            InternalValue -= lastEntry;
            Entries.RemoveAt(Entries.Count - 1);
            return Value;
        }
    }
}
