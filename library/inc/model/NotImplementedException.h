#ifndef NOTIMPLEMENTEDEXCEPTION_H
#define NOTIMPLEMENTEDEXCEPTION_H

#include <stdexcept>

class NotImplementedException final : public std::logic_error {
    public:
        NotImplementedException() : std::logic_error{"Not implemented."} {
        }
};
#endif
