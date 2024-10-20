long long uu_dd::parseargs::Parser::parse_n::hfa36df9401c1988c(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12
    char *v6;  // rcx

    uu_dd::parseargs::parse_bytes_with_opt_multiplier::h7704982fe4152c96(&v0, a1, a2);
    v4 = *((long long *)&v0);
    v5 = *((long long *)&v1);
    if (v4 != 14)
    {
        *((int128_t *)&a0[2]) = *((int128_t *)&v2);
        a0[0] = v4;
        a0[1] = v5;
        return v4;
    }
    if (a2 > 15)
    {
        if (core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(66, a1) == 1)
            goto LABEL_49708a;
        v4 = 0;
    }
    else
    {
        if (!a2)
        {
            a0[1] = 0;
            a0[2] = v5;
            a0[0] = 14;
            return v4;
        }
        v6 = 0;
        while (*((char *)(a1 + v6)) != 66)
        {
            v6 += 1;
            if (a2 == v6)
            {
                a0[1] = 0;
                a0[2] = v5;
                a0[0] = 14;
                return v4;
            }
        }
LABEL_49708a:
        v4 = 1;
    }
    a0[1] = v4;
    a0[2] = v5;
    a0[0] = 14;
    return v4;
}
