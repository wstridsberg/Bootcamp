#include <string>
#include "date.h"
#include "payment.h"
#include "part.h"
#include "service.h"


class Customer_record{
    public:
    date customer_date;
    full_service_specifics customer_service;
    part customer_part;
    payment customer_payment;

    void print();

};
