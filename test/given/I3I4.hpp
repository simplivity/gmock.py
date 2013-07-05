#ifndef I3I4_HPP
#define I3I4_HPP

namespace n1 {
namespace {

class I3
{
public:
    virtual ~I3() { }

    virtual void f0() {
        f1();
    }

private:
    virtual void f1() = 0;
};

} // namespace

class I4
{
public:
    enum Enum { OK };

    virtual ~I3() { }

    virtual void f0(bool = true) = 0;
    virtual void f1(void) = 0;
    virtual Enum f2()const = 0; // comment
};

} // namespace n1

#endif

