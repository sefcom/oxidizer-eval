long long uu_join::State::print_headers::h05236247a85dc117(struct_0 *a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v4;  // 4096
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx

    v0 = v2;
    v3 = a2->field_10;
    if (a0->field_10)
    {
        v4 = a0;
        if (v3)
        {
            v6 = uu_join::State::combine::hef9cb824dfbe07fa(a0, a1, a2, v5);
            if (v6)
                return v6;
            return 0;
        }
    }
    else if (v3)
    {
        v4 = a2;
    }
    else
    {
        return 0;
    }
    v6 = uu_join::State::print_first_line::h5910ce581bed7f0a(v4, a1, v7);
    if (v6)
        return v6;
    return 0;
}
