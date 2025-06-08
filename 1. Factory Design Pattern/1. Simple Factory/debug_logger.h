//
// Created by batman07 on 5/6/25.
//

#ifndef DEBUG_LOGGER_H
#define DEBUG_LOGGER_H
#include "ilogger.h"


class DebugLogger: public ILogger
{
public:
    void log(const string &msg) override;
};



#endif //DEBUG_LOGGER_H
