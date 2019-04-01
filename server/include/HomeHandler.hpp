//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//

#pragma once

#include <Poco/Net/HTTPRequestHandler.h>

#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>

#include <Poco/URI.h>

#include <string>
#include <iostream>

class HomeHandler : public Poco::Net::HTTPRequestHandler {

public:
    void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) override;
};

