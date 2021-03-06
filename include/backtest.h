#pragma once
#ifndef testcppclient_h__INCLUDED
#define testcppclient_h__INCLUDED

#include <string>
#include "mysql.h"

struct Bar
{
        std::string time;
        double open, high, low, close, bid, ask;
};

// void back_test(MYSQL *db);
// void back_test(MYSQL *db, long long max);

void back_test(const char *dictionary, const int time_step, const char period);

void file_test(std::string file, const int time_step, const char period);

void time_trail(std::string &time, const int time_step, const char period);

void seconds_test(const Bar &bar);

void macd_test(const Bar &bar);

void ma_cross_test(const Bar &bar);

void place_order(double quantity, double price);

#endif