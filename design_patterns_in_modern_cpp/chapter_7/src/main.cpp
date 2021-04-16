#include <bridge.hpp>

int main()
{
    Factory *my_factory = 0;
    Workshop *my_car = new Car;
    Workshop *my_motorcycle = new Motorcycle;

    /* First case */
    my_factory = new ProduceParts(my_car);
    my_factory->build_vehicle();

    my_factory = new Assemble(my_car);
    my_factory->build_vehicle();

    /* Second case */

    my_factory = new ProduceParts(my_motorcycle);
    my_factory->build_vehicle();

    my_factory = new Assemble(my_motorcycle);
    my_factory->build_vehicle();

    return 0;
}