long long uu_join::State::print_headers::h9c33b910610aa5ae(struct_0 *a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v4;  // 4096
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a2->field_10;
    if (a0->field_10)
    {
        v4 = a0;
        if (v3)
        {
            v5 = uu_join::State::combine::he1c3f6ec163eb0f7(a0, a1, a2);
            if (v5)
                return v5;
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
    v5 = uu_join::State::print_first_line::h93d7e60e203eff8f(v4, a1, a3);
    if (v5)
        return v5;
    return 0;
}
