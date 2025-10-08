long long uu_tsort::Graph::remove_edge(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v1;  // r15
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v1 = a0 + 24;
    v2 = v1.get_inner_mut(a1, a2);
    if (!v2)
        core::option::unwrap_failed(&g_4eb2f8); /* do not return */
    uu_tsort::remove(v2 + 16, a3, a4);
    v3 = v1.get_inner_mut(a3, a4);
    if (!v3)
        core::option::unwrap_failed(&g_4eb310); /* do not return */
    v3->field_28 = v3->field_28 - 1;
    return v3;
}
