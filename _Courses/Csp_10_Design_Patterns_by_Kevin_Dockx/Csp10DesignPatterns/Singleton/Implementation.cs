using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Singleton
{
    /// <summary>
    /// Singleton
    /// </summary>
    public class Logger
    {
        /*
         *  .Net Lazy<T> provide threa-safe manner, compiler takes care of making this thread-safe
         *   new Logger() when first access the _lazyLogger.Value
         */
        private static readonly Lazy<Logger> _lazyLogger = new Lazy<Logger>(() => new Logger());

        /// <summary>
        /// Instance
        /// </summary>
        public static Logger Instance
        {
            get { return _lazyLogger.Value; }
        }

        // protected allow subclassing the Logger
        protected Logger()
        {
        }

        /// <summary>
        /// SingletonOperation
        /// </summary> 
        public void Log(string message)
        {
            Console.WriteLine($"Message to log: {message}");
        }
    }
}
