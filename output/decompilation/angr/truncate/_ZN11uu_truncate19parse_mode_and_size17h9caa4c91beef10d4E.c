long long uu_truncate::parse_mode_and_size(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    int v5;  // [bp-0x48]
    int v6;  // [bp-0x38], Other Possible Types: char
    char v7;  // [bp-0x28]
    unsigned long long v9;  // r15
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r15
    unsigned long long v12;  // rax
    unsigned long long v13;  // r14
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    int v16;  // xmm0
    unsigned long long v17;  // rax

    v9 = core::str::<impl str>::trim_matches(a1, a2);
    v1 = v9;
    v2 = v10 + v9;
    if (!((char)core::str::validations::next_code_point(&v1) & 1))
    {
        v6.to_vec(v9, v13);
        *((unsigned long long *)a0) = 1;
        a0[8] = v6;
        v17 = *((long long *)&v7);
        *((unsigned long long *)&a0[24]) = v17;
        return v17;
    }
    v11 = v9;
    if ((unsigned int)v10 <= 62)
    {
        v0 = 0x5000a82000000000;
        v11 = v9;
        if ((*((char *)&v0 + (((unsigned int)v10 & 63) >> 3)) >> ((char)v10 & 63 & 7) & 1))
        {
            v12 = v9.get(v13);
            if (!v12)
                core::str::slice_error_fail(v9, v13, 1, v13, &g_4e4130); /* do not return */
            v11 = v12;
        }
    }
    uucore::features::parser::parse_size::parse_size_u64(&v3, v11, v13);
    v14 = uu_truncate::TruncateMode::Absolute;
    switch ((unsigned int)v10)
    {
    case 37:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return uu_truncate::TruncateMode::RoundUp;
        }
    case 43:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return uu_truncate::TruncateMode::Extend;
        }
    case 45:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return uu_truncate::TruncateMode::Reduce;
        }
    case 47:
        v14 = uu_truncate::TruncateMode::RoundDown;
        goto LABEL_459a0a;
    case 60:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return uu_truncate::TruncateMode::AtMost;
        }
    case 62:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return uu_truncate::TruncateMode::AtLeast;
        }
    default:
LABEL_459a0a:
        if (*((int *)&v3) != 4)
        {
            v16 = *((int128_t *)&v3);
            a0[16] = v5;
            *(a0) = v16;
            return v14;
        }
    }
    v15 = v4.Absolute();
    *((unsigned long long *)&a0[8]) = v15;
    *((unsigned long long *)&a0[16]) = v10;
    *((unsigned long long *)a0) = 4;
    return v15;
}
