//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-03.
//

#include "Handler.hpp"

void Handler::handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
    Poco::URI uri(request.getURI());

    std::string method = request.getMethod();
    std::cout << "URI: " << uri.toString() << std::endl;
    std::cout << "Method: " << request.getMethod() << std::endl;

    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
    response.setContentType("application/json");
    response.send() << "{ text: Handler.cpp }";
}