long long fish::ast::Node::source(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0.try_source(a1, a2);
    if (v3)
        return v3;
    return 4;
}
