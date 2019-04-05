#include "server/include/Server.hpp"
#include <iostream>

int main(int argc, char** argv) {
    Server server;
    return server.run(argc, argv);
}