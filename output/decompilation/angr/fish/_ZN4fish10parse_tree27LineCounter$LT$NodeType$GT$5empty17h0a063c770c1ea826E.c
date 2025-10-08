long long fish::parse_tree::LineCounter<NodeType>::empty(struct_0 *a0)
{
    void* v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    void* v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v4 = fish::parse_tree::parse_source(&v0, 0, 0);
    if (!v4)
        core::option::unwrap_failed(&g_14dd518); /* do not return */
    a0->field_0 = v4;
    *((uint128_t *)&(&a0->field_0)[1]) = 0;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
    return v4;
}
