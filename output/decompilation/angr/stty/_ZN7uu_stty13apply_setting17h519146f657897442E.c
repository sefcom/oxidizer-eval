long long uu_stty::apply_setting(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    unsigned long long v6;  // 4096
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v2 = uu_stty::apply_baud_rate_flag(a0, a1, a2);
    if ((char)v2 != 2)
        return v2 & 0xffffffffffffff00 | 1;
    v0 = 0;
    v3 = ::0x457340::core::char::methods::encode_utf8_raw(&v0).strip_prefix_of(a1, a2);
    v4 = v3;
    if (v3)
    {
        v5 = v3;
        if (v3)
            goto LABEL_45981c;
LABEL_45981b:
        v6 = a2;
    }
    else
    {
        v5 = a1;
        if (!v3)
            goto LABEL_45981b;
LABEL_45981c:
        v6 = v7;
    }
    v8 = uu_stty::apply_flag(a0, v5, v6, v3);
    if ((char)v8 != 2)
        return v8;
    v9 = uu_stty::apply_flag(a0, v5, v6, v4);
    if ((char)v9 != 2)
        return v9;
    v10 = uu_stty::apply_flag(a0, v5, v6, v4);
    if ((char)v10 != 2)
        return v10;
    v11 = uu_stty::apply_flag(a0, v5, v6, v4);
    return v11 & 0xffffffffffffff00 | (char)v11 & 1;
}
