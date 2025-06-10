#include "debug_logger_factory.h"
#include "error_logger_factory.h"
#include "info_logger_factory.h"
#include "logger_factory.h"

int main() {
    ILoggerFactory* loggerFactory1 = new InfoLoggerFactory();
    ILogger* infoLogger = loggerFactory1->createLogger();

    ILoggerFactory* loggerFactory2 = new DebugLoggerFactory();
    ILogger* debugLogger = loggerFactory2->createLogger();

    ILoggerFactory* loggerFactory3 = new ErrorLoggerFactory();
    ILogger* errorLogger = loggerFactory3->createLogger();

    debugLogger->log("This is a debug log");
    infoLogger->log("This is a info log");
    errorLogger->log("This is a error log");

    delete infoLogger;
    delete debugLogger;
    delete errorLogger;

    delete loggerFactory1;
    delete loggerFactory2;
    delete loggerFactory3;

    return 0;
}