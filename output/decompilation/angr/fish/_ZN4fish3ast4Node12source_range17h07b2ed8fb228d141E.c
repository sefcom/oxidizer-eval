long long fish::ast::Node::source_range(unsigned long long a0)
{
    char v0;  // [bp-0xc]
    char v1;  // [bp-0x8]

    v0.try_source_range(a0);
    if (!v0)
        return 0;
    return *((int *)&v1);
}
