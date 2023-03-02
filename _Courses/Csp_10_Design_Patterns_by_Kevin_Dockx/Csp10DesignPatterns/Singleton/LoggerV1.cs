using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Singleton
{
    /// <summary>
    /// Singleton using lazy 
    /// </summary>
    public class LoggerV1
    {
        private static LoggerV1? _instance;


        /// <summary>
        /// Instance
        /// </summary>
        public static LoggerV1 Instance
        {
            /*
             * Not guaranteed to be thead safe
             */
            get
            {
                if (_instance == null)
                {
                    _instance = new LoggerV1();
                }
                return _instance;
            }
        }

        /*
         * protected allows subclassed
         */
        protected LoggerV1()
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