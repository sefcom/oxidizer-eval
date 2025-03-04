long long uu_tr::operation::Sequence::parse_char_repeat::hd85995b5ba07b318(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x60]
    unsigned long long v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x38]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x28]
    char v8;  // [bp-0x18]
    uint128_t v10[2];  // rdi
    int v11;  // xmm0
    unsigned long long v12;  // rax

    v0 = "[";
    v1 = 1;
    v2 = "*";
    v3 = 1;
    v4 = "]";
    v5 = 1;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::hbda65ba818a3ebf0(&v6, &v0, a1, a2);
    v10 = a0 + 1;
    if (!*((long long *)&v6))
    {
        v11 = *((int128_t *)&v7);
        v10[1] = *((int128_t *)&v8);
        *((void*)&v10[0]) = v11;
        v12 = 1;
    }
    else
    {
        uu_tr::operation::Sequence::parse_char_repeat::_$u7b$$u7b$closure$u7d$$u7d$::hb4b44df29a4e59ec(v10, &v6);
        v12 = 0;
    }
    *(a0) = v12;
    return v12;
}
