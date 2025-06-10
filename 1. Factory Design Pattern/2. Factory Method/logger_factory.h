//
// Created by batman07 on 5/6/25.
//

#ifndef LOGGER_FACTORY_H
#define LOGGER_FACTORY_H
#include "ilogger.h"


class ILoggerFactory {
public:
    virtual ILogger* createLogger() = 0;
    virtual ~ILoggerFactory() = default;
};



#endif //LOGGER_FACTORY_H
