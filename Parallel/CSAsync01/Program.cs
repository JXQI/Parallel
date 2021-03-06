﻿using System;
using System.Threading.Tasks;

namespace CSAsync01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Main is running...");
            Task aTask = MyTask();
            Console.WriteLine("Main is finished, press RETURN to exit...");
            Console.ReadLine();
        }
        static async Task MyTask()
        {
            Console.WriteLine("MyTask is running...");
            await Task.Delay(2000);
            Console.WriteLine("MyTask is finished.");
        }
    }
}
