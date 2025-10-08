long long fish::parse_execution::ExecutionContext::get_argument_nodes(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long long v4;  // r13
    unsigned long long v5;  // r13
    unsigned long v6;  // r13

    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a2)
    {
        v4 = a2 * 12;
        do
        {
            v5 = v4;
            v0.push(a1, &g_14dd028);
            a1 += 12;
            v6 = v5 - 12;
            v4 = v6;
        } while (v5 != 12);
    }
    a0->field_10 = 0;
    a0->field_0 = v0;
    a0->field_8 = 8;
    return 8;
}
