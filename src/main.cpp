#include "hello_world_api.h"

int main(int argc, char **argv)
{
    LOG_INFO << "Starting server on port 8090";

    drogon::app().setLogPath("./")
            .setLogLevel(trantor::Logger::kNumberOfLogLevels)
            .addListener("0.0.0.0", 8090)
            .setThreadNum(8)
            .run();
}

