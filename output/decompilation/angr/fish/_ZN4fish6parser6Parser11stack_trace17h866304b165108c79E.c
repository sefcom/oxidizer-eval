long long fish::parser::Parser::stack_trace(unsigned long long a0, unsigned long long a1[8])
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x20]

    v3.blocks_iter_rev(a1);
    v4 = 0;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    a0.fold(&v3, &v0, a1);
    return a0;
}
