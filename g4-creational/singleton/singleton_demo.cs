class Singleton
{
    private static Singleton _instance;
    // Lock synchronization object
    private static object syncLock = new object();

    // Constructor is 'protected' to prevent the user from instantiating a Singleton object
    protected Singleton()
    {
    }
    // user must use Instance() to get access to the one and only OneOnly instance.
    public static Singleton Instance()
    {
        // Uses lazy initialization.
        // Support multithreaded applications through 'Double checked locking' pattern 
        // which (once the instance exists) avoids locking each
        // time the method is invoked
        if (_instance == null)
        {   
            lock (syncLock)
            {
                 if (_instance == null)
                    _instance = new Singleton();
            }
        }

        return _instance;
    }
}

class MainApp
{
    static void Main()
    {
        Singleton s1 = Singleton.Instance();
        Singleton s2 = Singleton.Instance();

        if (s1 == s2)
        {
            Console.WriteLine("Objects are the same instance");
        }
    }
}