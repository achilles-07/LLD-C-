//
// Created by batman07 on 5/6/25.
//

#include "logger_factory.h"

#include "debug_logger.h"
#include "error_logger.h"
#include "info_logger.h"

ILogger* LoggerFactory::createLogger(LogLevel pLogLevel) {
    if (pLogLevel == LogLevel::DEBUG)
        return new DebugLogger();
    else if (pLogLevel == LogLevel::INFO)
        return new InfoLogger();
    else if (pLogLevel == LogLevel::ERROR)
        return new ErrorLogger();
    else return nullptr;
}
