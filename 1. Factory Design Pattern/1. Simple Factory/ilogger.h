//
// Created by batman07 on 5/6/25.
//
#ifndef ILOGGER_H
#define ILOGGER_H

#include "common.h"

class ILogger {
public:
    virtual void log(const string &msg) = 0;
    virtual ~ILogger() {}
};

#endif //ILOGGER_H
