//
// Created by batman07 on 5/6/25.
//

#ifndef ERROR_LOGGER_H
#define ERROR_LOGGER_H
#include "ilogger.h"


class ErrorLogger: public ILogger
{
public:
    void log(const string &msg) override;
};



#endif //ERROR_LOGGER_H
