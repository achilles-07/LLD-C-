//
// Created by batman07 on 10/6/25.
//

#ifndef INFO_LOGGER_FACTORY_H
#define INFO_LOGGER_FACTORY_H
#include "logger_factory.h"


class InfoLoggerFactory: public ILoggerFactory {
public:
    ILogger* createLogger() override;
};



#endif //INFO_LOGGER_FACTORY_H
