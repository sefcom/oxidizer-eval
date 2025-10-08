long long uu_join::State::print_headers(struct_0 *a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // 4096
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v0 = v2;
    if (a0->field_10)
    {
        v3 = a0;
        if (a2->field_10)
        {
            v4 = a0.combine(a1, a2);
            if (!v4)
                return 0;
            return v4;
        }
    }
    else if (a2->field_10)
    {
        v3 = a2;
    }
    else
    {
        return 0;
    }
    v5 = v3.print_first_line(a1, a3);
    if (!v5)
        return 0;
    return v5;
}
