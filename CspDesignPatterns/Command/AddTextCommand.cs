﻿
namespace Command
{
    public class AddTextCommand : BaseCommand<string>
    {
        public AddTextCommand(string value) : base(value)
        {
            InternalValue = value;
        }

        public override string Add(string textToAdd)
        {
            Entries.Add(textToAdd);
            InternalValue += textToAdd;
            return Value;
        }

        public override string Remove()
        {
            //Should add error handling
            var lastEntry = Entries[^1];
            InternalValue = InternalValue.Remove(InternalValue.LastIndexOf(lastEntry, StringComparison.OrdinalIgnoreCase));
            Entries.RemoveAt(Entries.Count - 1);
            return Value;
        }

    }
}
