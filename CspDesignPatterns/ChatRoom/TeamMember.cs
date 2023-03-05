using ChatRoom;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace ChatRoom
{   /// <summary>
    /// Colleague
    /// </summary>
    public abstract class TeamMember
    {
        public string Name { get; set; }

        private IChatRoom? _chatroom;

        public TeamMember(string name)
        {
            Name = name;
        }

        internal void SetChatroom(IChatRoom chatRoom)
        {
            _chatroom = chatRoom;
        }

        public void Send(string message)
        {
            _chatroom?.Send(Name, message);
        }

        public void Send(string to, string message)
        {
            _chatroom?.Send(Name, to, message);
        }

        public void SendTo<T>(string message) where T : TeamMember
        {
            _chatroom?.SendTo<T>(Name, message);
        }

        public virtual void Receive(string from, string message)
        {
            Console.WriteLine($"message from {from} to {Name}: {message}");
        }
    }
}


/// <summary>
/// ConcreteColleague
/// </summary>
public class Lawyer : TeamMember
{
    private List<TeamMember> _teamMembersInChat = new();

    public Lawyer(string name) : base(name)
    {
    }

    public override void Receive(string from, string message)
    {
        Console.Write($"{nameof(Lawyer)} {Name} received: ");
        base.Receive(from, message);
    }
}


/// <summary>
/// ConcreteColleague
/// </summary>
public class AccountManager : TeamMember
{
    public AccountManager(string name) : base(name)
    {
    }

    public override void Receive(string from, string message)
    {
        Console.Write($"{nameof(AccountManager)} {Name} received: ");
        base.Receive(from, message);
    }
}
