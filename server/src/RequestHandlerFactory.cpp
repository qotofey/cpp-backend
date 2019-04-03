//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-03-12.
//

#include "../include/RequestHandlerFactory.hpp"
#include "../../app/controller/include/BaseController.hpp"

Poco::Net::HTTPRequestHandler *RequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest &request) {
    //    using Poco::Net::HTTPRequest;

    Poco::Net::HTTPRequestHandler *result = nullptr;
    const auto &method = request.getMethod();
    const auto &uri = request.getURI();

//    if (uri == "/") {
//        result = new Handler();
//    } else if (uri == "/posts") {
//        result = new PostHandler();
//    }
    BaseController *controller = new BaseController(new Handler());
    if (uri == "/") {
        result = controller->index();
    }

    if (result == nullptr) {
        result = new Handler();
    }

    return result;
}