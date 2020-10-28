#include "c_record.h"

std::string get_month(month k){

    std::string x;

    switch (k)
    {
    case january:
        x="January";
        break;
    case february:
        x="February";
        break;
    case march:
        x="March";
        break;
    case april:
        x="April";
        break;
    case may:
        x="May";
        break;
    case june:
        x="June";
        break;
    case july:
        x="July";
        break;
    case august:
        x="August";
        break;
    case september:
        x="September";
        break;
    case october:
        x="October";
        break;
    case november:
        x="November";
        break;
    case december:
        x="December";
        break;
    default:
        break;
    }
return x;

}


std::string get_service_type(service_type k){
    
    std::string x;

    switch (k)
    {
    case basic_service:
        x="Basic service";
        break;
    case full_service:
        x="Full service";
        break;
    case repair:
        x="Repair";
        break;
    default:
        break;

    }
return x;
}

std::string get_service_mechanic(service_mechanic k){
    
    std::string x;

    switch (k)
    {
    case Eric:
        x="Eric";
        break;
    case John:
        x="John";
        break;
    case Sandra:
        x="Sandra";
        break;
    default:
        break;

    }
    
    return x;
}

void Customer_record::print(){
    std::cout << std::endl << "CUSTOMER RECORD" << std::endl << std::endl;
    std::cout << "Date: " << get_month(this->customer_date.customer_month) << " " << this->customer_date.customer_day << " , " <<this->customer_date.customer_year << std::endl;
    std::cout << "Type of service: " << get_service_type(this->customer_service.customer_service_type) << " " << std::endl;
    std::cout << "Service done by: " << get_service_mechanic(this->customer_service.customer_service_mechanic) << " " << std::endl;
    std::cout << "Part changed: " << this->customer_part.part_name << " ||| part number [" << this->customer_part.part_number << "] ||| supplier [" << this->customer_part.part_supplier << "]" << std::endl;
    std::cout << "Payment method: " << this->customer_payment.pay_method << std::endl; 
    std::cout << "Payment amount: " << this->customer_payment.pay_amount << " kr" << std::endl << std::endl;

    std::cout << "Service specifics: " << std::endl;
        for(int i=0; i < this->customer_service.size_ofSteps; i++){
            std::cout << "                   " << this->customer_service.steps[i] << std::endl;
        }
}