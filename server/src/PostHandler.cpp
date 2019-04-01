//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-01.
//

#include "../include/PostHandler.hpp"

void PostHandler::handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
    Poco::URI uri(request.getURI());

    std::string method = request.getMethod();
    std::cout << "URI: " << uri.toString() << std::endl;
    std::cout << "Method: " << request.getMethod() << std::endl;

    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
    response.setContentType("application/json");
    response.send() << "{ page: \"/posts\" }";
}

//void PostHandler::Index(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
//    Poco::URI uri(request.getURI());
//
//    std::string method = request.getMethod();
//    std::cout << "URI: " << uri.toString() << std::endl;
//    std::cout << "Method: " << request.getMethod() << std::endl;
//
//    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
//    response.setContentType("application/json");
//    response.send() << "{ page: \"/posts\" }";
//}
//
//void PostHandler::New(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
//    Poco::URI uri(request.getURI());
//
//    std::string method = request.getMethod();
//    std::cout << "URI: " << uri.toString() << std::endl;
//    std::cout << "Method: " << request.getMethod() << std::endl;
//
//    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
//    response.setContentType("application/json");
//    response.send() << "{ page: \"/posts/new\" }";
//}
//
//void PostHandler::Edit(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
//    Poco::URI uri(request.getURI());
//
//    std::string method = request.getMethod();
//    std::cout << "URI: " << uri.toString() << std::endl;
//    std::cout << "Method: " << request.getMethod() << std::endl;
//
//    response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
//    response.setContentType("application/json");
//    response.send() << "{ page: \"/posts/edit\" }";
//}