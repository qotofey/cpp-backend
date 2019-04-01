//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//
#include <iostream>
#include <string>

#include "../include/Server.hpp"
#include "../include/RequestHandlerFactory.hpp"

int Server::main(const std::vector<std::string> &args) {
    auto params = new Poco::Net::HTTPServerParams();

    params->setTimeout(10000);
    params->setMaxQueued(100);
    params->setMaxThreads(10);

    Poco::Net::SocketAddress socketAddress("127.0.0.1:8080");
    Poco::Net::ServerSocket socket;

    socket.bind(socketAddress, true, false);
    socket.listen(100);

    Poco::Net::HTTPServer server(new RequestHandlerFactory(), socket, params);

    server.start();
    std::cerr << "Server started" << std::endl;

    waitForTerminationRequest();  // wait for CTRL-C or kill

    std::cerr << "Shutting down..." << std::endl;
    server.stopAll();
    socket.close();

    return Application::EXIT_OK;
}