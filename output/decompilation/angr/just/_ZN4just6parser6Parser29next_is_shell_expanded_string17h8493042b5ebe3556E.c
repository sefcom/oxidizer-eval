long long just::parser::Parser::next_is_shell_expanded_string(unsigned long long a0[12])
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    struct_0 *v6;  // rax

    v0 = a0[3];
    v1 = a0[3] + a0[4] * 72;
    v2 = a0[11];
    v3 = 0;
    v5 = v0.try_fold(&v3);
    if (!v5)
    {
        return 0;
    }
    else if ((char)just::parser::Parser::next_is_shell_expanded_string::{{closure}}(v5))
    {
        v6 = v0.try_fold(&v3);
        if (!v6)
            return 0;
        return v6 & 0xffffffffffffff00 | v6->field_40 == 33;
    }
    else
    {
        return 0;
    }
}
