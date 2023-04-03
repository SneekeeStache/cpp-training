//
// Created by kyle on 03/04/23.
//
#include <iostream> //importe depuis le system
#include <memory.h>



class Log{
public:
    //valeur design des level avec des int
    const int LogLevelError= 0;
    const int LogLevelWarning=1;
    const int LogLevelInfo=2;
private:
    int m_LogLevel = LogLevelInfo; //m pour memeber variable a l'interieur d'une classe. C'est une convention en code.
public:
    void SetLevel(int level){
        m_LogLevel=level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]:" << message << std::endl;
    }

    void Warn(const char* message){
        if(m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]:" << message << std::endl;
    }

    void Info(const char* message){
        if(m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]:" << message << std::endl;
    }
};

int main(){

    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("Hello !");
    log.Info("Hi !");
    log.Error("Hola !");

}