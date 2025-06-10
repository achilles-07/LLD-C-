//
// Created by batman07 on 5/6/25.
//

#ifndef INFO_LOGGER_H
#define INFO_LOGGER_H
#include "ilogger.h"


class InfoLogger: public ILogger
{
    void log(const string &msg) override;
};



#endif //INFO_LOGGER_H
