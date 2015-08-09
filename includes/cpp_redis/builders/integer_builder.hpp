#pragma once

#include "cpp_redis/builders/builder_iface.hpp"
#include "cpp_redis/replies/integer_reply.hpp"

namespace cpp_redis {

namespace builders {

class integer_builder : public builder_iface {
public:
    //! ctor & dtor
    integer_builder(void);
    ~integer_builder(void) = default;

    //! copy ctor & assignment operator
    integer_builder(const integer_builder&) = delete;
    integer_builder& operator=(const integer_builder&) = delete;

public:
    //! builder_iface impl
    builder_iface& operator<<(std::string&);
    bool reply_ready(void) const;
    std::shared_ptr<reply> get_reply(void) const;

    //! getter
    int get_integer(void) const;

private:
    void build_reply(void);

private:
    int m_nbr;
    char m_negative_multiplicator;
    bool m_reply_ready;

    std::shared_ptr<replies::integer_reply> m_reply;
};

} //! builders

} //! cpp_redis