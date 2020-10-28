#include <iostream>


enum service_type {basic_service, full_service, repair};
enum service_mechanic {Eric, John, Sandra};

std::string get_service_type(service_type);
std::string get_service_mechanic(service_mechanic);

class service{
    public:
    service_type customer_service_type=full_service;
    service_mechanic customer_service_mechanic=Sandra;  

    std::string *steps;
    size_t size_ofSteps;
};

struct b_service_steps{
    const std::string step1="Engine oil level control";
    std::string step2="Air filter cleaning";
    std::string step3="12V battery measurements";
};

struct f_service_steps{
    std::string step1="Check engine";
    std::string step2="Check brakes";
    std::string step3="Check wipers";
    std::string step4="Calibrate tyre pressure sensors";
};

class basic_service_specifics: public service{
    public:
    basic_service_specifics() {
        this->size_ofSteps =3;
        this->steps = new std::string[3];
        this->steps[0] = "Engine oil level control";
        this->steps[1] = "Air filter cleaning";
        this->steps[2] = "12V battery measurements";
    }
    ~basic_service_specifics(){
        delete [] steps;
    }

    };

class full_service_specifics: public service{
    public:
        full_service_specifics() {
        this->size_ofSteps =4;
        this->steps = new std::string[4];
        this->steps[0] = "Check engine";
        this->steps[1] = "Check brakes";
        this->steps[2] = "Check wipers";
        this->steps[3] = "Calibrate tyre pressure sensors";
    }
    ~full_service_specifics(){
        delete [] steps;
    }
};

class repair_service_specifics: public service{
    public:
};