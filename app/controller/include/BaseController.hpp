//
// Created by Тимофей Юрьевич Шуфлетюк on 2019-04-01.
//

#pragma once

class BaseController : public Poco::Net::HTTPRequestHandler {

public:
    void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) override;

    virtual void index();
    virtual void show();
    virtual void create();
    virtual void update();
    virtual void destroy();

};
