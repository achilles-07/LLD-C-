//
// Created by batman07 on 10/6/25.
//

#include "info_logger_factory.h"

#include "info_logger.h"

ILogger * InfoLoggerFactory::createLogger() {
    return new InfoLogger();
}
