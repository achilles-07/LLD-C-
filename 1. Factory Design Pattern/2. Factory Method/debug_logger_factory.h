//
// Created by batman07 on 10/6/25.
//

#ifndef DEBUG_LOGGER_FACTORY_H
#define DEBUG_LOGGER_FACTORY_H
#include "debug_logger.h"
#include "logger_factory.h"


class DebugLoggerFactory: public ILoggerFactory {
public:
    ILogger *createLogger() override {
        return new DebugLogger();
    }
};



#endif //DEBUG_LOGGER_FACTORY_H
