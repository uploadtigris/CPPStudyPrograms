#include <iostream>

//THIS IS A SIMPLIFIED EXAMPLE

class Log
{
public:// it's good to separate public variables and public methods.
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:// variable to log what the level the member is actually set to.
    int m_LogLevel = LogLevelInfo; //"m_" is useful for distinguishing member variables from non-member variables.
                                    //default LogLevelInfo means that everything should be printed.
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    //usually strings wont use "const char" pointers but this is a simple example.
    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main() {
    Log log;
    //log.SetLevel(log.LogLevelWarning);
    log.SetLevel(log.LogLevelError);

    log.Warn("Warning!");
    log.Info("Warning!");
    log.Error("Warning!");

    std::cin.get();
}
