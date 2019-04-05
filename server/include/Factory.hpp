//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-05.
//

#pragma once

#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerRequest.h>
#include "Handler.hpp"
#include "Controller.hpp"

using Poco::Net;

class Factory : public HTTPRequestHandlerFactory {

private:
    HTTPRequestHandler *getMethodHandlers(const std::string &uri) const;
    HTTPRequestHandler *postMethodHandlers(const std::string &uri) const;

    HTTPRequestHandler *createRequestHandler(const HTTPServerRequest &request) override;

};
