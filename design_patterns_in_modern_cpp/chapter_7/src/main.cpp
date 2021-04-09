#include <bridge.hpp>

int main()
{
    Vehicle *my_vehicle = 0;
    Workshop *my_car = new Car;
    Workshop *my_motorcycle = new Motorcycle;

    /* First case */
    my_vehicle = new ProduceParts(my_car);
    my_vehicle->build_vehicle();

    my_vehicle = new Assemble(my_car);
    my_vehicle->build_vehicle();

    /* Second case */

    my_vehicle = new ProduceParts(my_motorcycle);
    my_vehicle->build_vehicle();

    my_vehicle = new Assemble(my_motorcycle);
    my_vehicle->build_vehicle();

    return 0;
}