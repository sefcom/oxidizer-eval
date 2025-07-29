long long uu_tsort::Graph::add_edge(unsigned int a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // r15
    unsigned long long v3;  // rax
    struct_0 *v4;  // rax

    a0.add_node(a1, a2);
    v1 = a1.equal(a2, a3, a4);
    if ((char)v1)
        return v1;
    a0.add_node(a3, a4);
    v2 = a0 + 24;
    v3 = v2.get_inner_mut(a1, a2);
    if (!v3)
        core::option::unwrap_failed(&g_576200); /* do not return */
    v3 + 16.add_successor(a3, a4);
    v4 = v2.get_inner_mut(a3, a4);
    if (!v4)
        core::option::unwrap_failed(&g_576218); /* do not return */
    v4->field_28 = v4->field_28 + 1;
    return v4;
}
