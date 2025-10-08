long long fish::ast::Populator::try_parse(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a1.can_be_parsed();
    if (!(char)v3)
    {
        *(a0) = 2;
        return v3;
    }
    return a0.allocate_visit(a1);
}
