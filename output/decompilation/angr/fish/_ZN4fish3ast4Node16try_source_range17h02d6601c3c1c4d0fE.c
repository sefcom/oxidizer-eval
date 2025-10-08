long long fish::ast::Node::try_source_range(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    char v2;  // [bp-0x20]
    unsigned int v4;  // r15d
    unsigned int v5;  // edx

    v4 = 0;
    v0 = 0.new(0);
    v1 = v5;
    v2 = 0;
    v0.visit(a1.as_node(), &g_14c4c70);
    *((long long *)&(&a0->field_0)[1]) = *((long long *)&v0);
    v4 = 1;
    a0->field_0 = v4;
    return a0;
}
