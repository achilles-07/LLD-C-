#include "logger_factory.h"

int main() {
    ILogger* debugLogger = LoggerFactory::createLogger(LogLevel::DEBUG);
    ILogger* infoLogger = LoggerFactory::createLogger(LogLevel::INFO);
    ILogger* errorLogger = LoggerFactory::createLogger(LogLevel::ERROR);

    debugLogger->log("This is a debug log");
    infoLogger->log("This is an  info log");
    errorLogger->log("This is an error log");

    delete debugLogger;
    delete infoLogger;
    delete errorLogger;

    return 0;
}