cmake_minimum_required(VERSION 3.31)
project(1__Simple_Factory)

set(CMAKE_CXX_STANDARD 20)

add_executable(1__Simple_Factory main.cpp
        logger_factory.h
        ilogger.h
        common.h
        error_logger.cpp
        error_logger.h
        debug_logger.cpp
        debug_logger.h
        info_logger.cpp
        info_logger.h
        error_logger_factory.cpp
        error_logger_factory.h
        info_logger_factory.cpp
        info_logger_factory.h
        debug_logger_factory.cpp
        debug_logger_factory.h)
