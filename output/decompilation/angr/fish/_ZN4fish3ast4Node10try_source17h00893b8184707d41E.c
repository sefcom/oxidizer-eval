long long fish::ast::Node::try_source(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x18]
    char v2;  // [bp-0x14]

    v0.try_source_range(a0);
    if (v0 != 1)
        return 0;
    return fish::ast::Node::try_source::{{closure}}(a1, a2, v1, *((int *)&v2));
}
