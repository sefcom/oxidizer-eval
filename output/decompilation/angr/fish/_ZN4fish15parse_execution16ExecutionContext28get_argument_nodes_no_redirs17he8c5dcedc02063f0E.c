long long fish::parse_execution::ExecutionContext::get_argument_nodes_no_redirs(struct_0 *a0, unsigned int *a1, unsigned long a2)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // r14
    unsigned long long v5;  // r14
    unsigned long v7;  // r14

    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a2)
    {
        v4 = a2 * 16;
        do
        {
            v5 = v4;
            if (!*(a1))
                v0.push(a1.argument(), &g_14dd040);
            a1 += 4;
            v7 = v5 - 16;
            v4 = v7;
        } while (v5 != 16);
    }
    a0->field_10 = 0;
    a0->field_0 = v0;
    a0->field_8 = 8;
    return 8;
}
