# pragma once

/**
 * Implemented interface.
 */
class Vehicle
{
    public:
        virtual void build_vehicle() = 0;
};

/**
 * Interface for internal implementation that Bridge uses.
 */
class Workshop
{
    public:
        virtual void execute_work_order() = 0;
};

/**
 * The Bridge
 */
class Bridge : public Vehicle
{
    protected:
        Workshop* implementation;

    public:
        Bridge(Workshop* backend);
};

/**
 * Different special cases of the interface
 */

class ProduceParts : public Bridge
{
    public:
        ProduceParts() = delete;
        ProduceParts(Workshop* backend);
        void build_vehicle();
};

class Assemble : public Bridge
{
    public:
        Assemble() = delete;
        Assemble(Workshop* backend);
        void build_vehicle();
};

/**
 * Different background implementations
 */

class Car : public Workshop
{
    public:
        void execute_work_order();
};

class Motorcycle : public Workshop
{
    public:
        void execute_work_order();
};
