//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-01.
//

#include "../include/Handler.hpp"

Handler::Handler(Controller *controller) {
    m_controller = controller;
}

void Handler::handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {

    Poco::URI uri(request.getURI());

    std::string method = request.getMethod();
    std::cout << "URI: " << uri.toString() << std::endl;
    std::cout << "Method: " << request.getMethod() << std::endl;

    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
    response.setContentType("application/json");
//    response.send() << "{ success: true }";

    if (method == "GET") { //Poco::Net::HTTPRequest::HTTP_GET

        if (uri == "/posts") {
            response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
            m_controller->index();
            response.send() << "{}";
        } else if (uri == "/posts/1") {
            response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
            m_controller->show();
//            nlohamn::json
            response.send() << "{ \"id\": 1 }";
        }

    } else if (method == "POST") {
        response.setStatus(Poco::Net::HTTPResponse::HTTP_CREATED);
        if (uri == "/posts") {
            m_controller->create();
        }

    } else if (method == "PUT" || method == "PATCH") {
        m_controller->update();
    } else if (method == "DELETE") {
        response.setStatus(Poco::Net::HTTPResponse::HTTP_NO_CONTENT);
        m_controller->destroy();
    } else {
        response.setStatus(Poco::Net::HTTPResponse::HTTP_NOT_FOUND);
    }
}

