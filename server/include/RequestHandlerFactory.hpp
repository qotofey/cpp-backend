//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//

#pragma once

#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerRequest.h>
#include "Handler.hpp"
#include "ErrorHandler.hpp"
#include "HomeHandler.hpp"
#include "PostHandler.hpp"


class RequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory {

private:

    Poco::Net::HTTPRequestHandler *createRequestHandler(const Poco::Net::HTTPServerRequest &request) override;

};
