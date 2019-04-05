//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//

#include "../include/RequestHandlerFactory.hpp"

Poco::Net::HTTPRequestHandler *RequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest &request) {
    //    using Poco::Net::HTTPRequest;

    Poco::Net::HTTPRequestHandler *result = nullptr;
    const auto &method = request.getMethod();
    const auto &uri = request.getURI();

    if (uri == "/") {
        result = new Handler(new Controller());
    }

    if (result == nullptr) {
        result = new Handler(new Controller());
    }

    return result;
}