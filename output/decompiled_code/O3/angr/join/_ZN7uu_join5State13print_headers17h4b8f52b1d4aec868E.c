long long uu_join::State::print_headers::h4b8f52b1d4aec868(unsigned long a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx

    v0 = v2;
    v3 = a2->field_10;
    if (!a2->field_10)
    {
        if (!v3)
            return 0;
    }
    else
    {
        if (v3)
        {
            v5 = uu_join::State::combine::h71dca64a51e3130b(a2, a1, a2, v4);
            if (v5)
                return v5;
            return 0;
        }
    }
    v5 = uu_join::State::print_first_line::h134b022a37a02d3e(a2, a1, v6);
    if (v5)
        return v5;
    return 0;
}
