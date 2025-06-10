//
// Created by batman07 on 10/6/25.
//

#ifndef ERROR_LOGGER_FACTORY_H
#define ERROR_LOGGER_FACTORY_H
#include "logger_factory.h"


class ErrorLoggerFactory: public ILoggerFactory {
public:
    ILogger* createLogger() override;
};



#endif //ERROR_LOGGER_FACTORY_H
