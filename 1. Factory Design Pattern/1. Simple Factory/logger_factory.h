//
// Created by batman07 on 5/6/25.
//

#ifndef LOGGER_FACTORY_H
#define LOGGER_FACTORY_H
#include "ilogger.h"


class LoggerFactory {
public:
    static ILogger* createLogger(LogLevel pLogLevel);
};



#endif //LOGGER_FACTORY_H
