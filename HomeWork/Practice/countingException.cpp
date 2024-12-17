#include <vector>
#include <string>
#include <stdexcept>
#include "name_checker.hpp"

std::vector<int> CountExceptions(std::vector<std::string> const & input) {
    std::vector<int> result = {0, 0, 0};
    for (std::string const & name : input) {
        try {
            CheckName(name);
        } catch (std::invalid_argument & e) {
            ++result.at(0);
        } catch (std::length_error & e) {
            ++result.at(1);
        } catch (std::out_of_range & e) {
            ++result.at(2);
        }
    }
    return result;
}