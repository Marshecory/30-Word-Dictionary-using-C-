#include <iostream>
#include <string>
using namespace std;

int main() {
    string search;
    cout << "SEARCH: ";
    cin >> search;

    if (search == "ACCURACY") {
        cout << "the closeness of a measured value to the true or accepted value.";
    } 
    else if (search == "BOUNDARY") {
        cout << "a line or surface that separates two regions or mediums.";
    } 
    else if (search == "COMPONENT") {
        cout << "a distinct part of a larger system or device.";
    } 
    else if (search == "DESIGN") {
        cout << "the process of creating a solution to a problem, often involving specifications, plans, and drawings.";
    } 
    else if (search == "ENERGY") {
        cout << "the capacity to do work.";
    } 
    else if (search == "FUNCTION") {
        cout << "the intended purpose or behavior of a system or component.";
    } 
    else if (search == "GRAPH") {
        cout << "a visual representation of data, showing relationships between variables.";
    } 
    else if (search == "HAZARD") {
        cout << "a potential source of danger or harm.";
    } 
    else if (search == "INNOVATION") {
        cout << "the process of developing new ideas, products, or methods.";
    } 
    else if (search == "INERTIA") {
        cout << "the tendency of an object to resist changes in its state of motion.";
    } 
    else if (search == "JOINT") {
        cout << "a connection between two or more components.";
    } 
    else if (search == "KNOWLEDGE") {
        cout << "understanding and information acquired through experience or study.";
    } 
    else if (search == "LABORATORY") {
        cout << "a facility equipped for scientific research or experimentation.";
    } 
    else if (search == "MATERIAL") {
        cout << "a substance used in construction and manufacturing.";
    } 
    else if (search == "MEASUREMENT") {
        cout << "the process of quantifying a physical quantity.";
    } 
    else if (search == "NEUTRAL") {
        cout << "having no net electrical charge or other specific property.";
    } 
    else if (search == "OBSERVATION") {
        cout << "the act of noticing or perceiving something using the senses.";
    } 
    else if (search == "PARAMETER") {
        cout << "a variable that influences the behavior of a system.";
    } 
    else if (search == "QUALITY") {
        cout << "the degree of excellence or conformity to standards.";
    } 
    else if (search == "RANGE") {
        cout << "the difference between the highest and lowest values in a set of data.";
    } 
    else if (search == "SHEAR") {
        cout << "a force that causes one part of a material to slide relative to another.";
    } 
    else if (search == "TECHNIQUE") {
        cout << "a method or procedure for accomplishing a task.";
    } 
    else if (search == "TECHNOLOGY") {
        cout << "the application of scientific knowledge for practical purposes.";
    } 
    else if (search == "UTILITY") {
        cout << "the state of being useful or beneficial.";
    } 
    else if (search == "VISCOSITY") {
        cout << "the resistance of a fluid to flow.";
    } 
    else if (search == "WIRE") {
        cout << "a thin strand of metal used to conduct electricity.";
    } 
    else if (search == "WORK") {
        cout << "the transfer of energy when a force is applied to an object and causes displacement.";
    } 
    else if (search == "X-AXIS") {
        cout << "the horizontal axis on a Cartesian coordinate system.";
    } 
    else if (search == "YARD") {
        cout << "a unit of length equal to three feet.";
    } 
    else if (search == "ZONE") {
        cout << "a region or area with specific characteristics or boundaries.";
    } 
    else {
        cout << "SEARCH ERROR";
    }
    return 0;
}