//
// Created by batman07 on 10/6/25.
//

#include "error_logger_factory.h"

#include "error_logger.h"

ILogger * ErrorLoggerFactory::createLogger() {
    return new ErrorLogger();
}
