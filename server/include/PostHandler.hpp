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

class PostHandler : public Poco::Net::HTTPRequestHandler {

public:
    void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) override;
//    void Index(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response);
//    void New(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response);
//    void Edit(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response);
};
