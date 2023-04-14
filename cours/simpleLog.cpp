//
// Created by kyle on 03/04/23.
//
#include <iostream> //importe depuis le system
#include <memory.h>



class Log{
public:
    enum Level
    {
        LevelError, LevelWarning, LevelInfo
    };
    //valeur design des level avec des int
private:
    Level m_LogLevel = LevelInfo; //m pour memeber variable a l'interieur d'une classe. C'est une convention en code.
public:
    void SetLevel(Level level){
        m_LogLevel=level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LevelError)
            std::cout << "[ERROR]:" << message << std::endl;
    }

    void Warn(const char* message){
        if(m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]:" << message << std::endl;
    }

    void Info(const char* message){
        if(m_LogLevel >= LevelInfo)
            std::cout << "[INFO]:" << message << std::endl;
    }
};

int main(){

    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello !");
    log.Info("Hi !");
    log.Error("Hola !");

}