//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-01.
//

#pragma once

#include <Poco/Net/HTTPRequestHandler.h>

#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>

#include <Poco/URI.h>

#include <string>
#include <iostream>

#include "Controller.hpp"

class Handler : public Poco::Net::HTTPRequestHandler {

private:
    Controller *m_controller;

public:
    Handler(Controller *controller);

    void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) override;

};