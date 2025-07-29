long long uu_truncate::parse_mode_and_size(struct_0 *a0, unsigned long long a1, unsigned long long a2)
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
    unsigned int v14[4];  // rax
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rax
    int v17;  // xmm0
    unsigned long long v18;  // rax

    v9 = core::str::<impl str>::trim_matches(a1, a2);
    v1 = v9;
    v2 = v10 + v9;
    if (!(int)::0x49dc30::core::str::validations::next_code_point(&v1))
    {
        v6.to_vec(v9, v13);
        *((unsigned long long *)&a0->field_0) = 1;
        *((void*)&a0->field_8) = v6;
        v18 = *((long long *)&v7);
        a0->field_10[1] = v18;
        return v18;
    }
    v11 = v9;
    if ((unsigned int)v10 <= 62)
    {
        v0 = 0x5000a82000000000;
        v11 = v9;
        if (((char)(*((char *)&v0 + (((unsigned int)v10 & 63) >> 3)) >> ((char)v10 & 63 & 7)) & 1))
        {
            v12 = v9.get(v13);
            if (!v12)
                core::str::slice_error_fail(v9, v13, 1, v13, &g_577f00); /* do not return */
            v11 = v12;
        }
    }
    v14 = uucore::features::parser::parse_size::parse_size_u64(&v3, v11, v13);
    v15 = uu_truncate::TruncateMode::Absolute;
    switch ((unsigned int)v10)
    {
    case 37:
        v15 = uu_truncate::TruncateMode::RoundUp;
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return &g_41565c[0];
        }
    case 43:
        v15 = uu_truncate::TruncateMode::Extend;
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return &g_41565c[0];
        }
    case 45:
        v15 = uu_truncate::TruncateMode::Reduce;
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return &g_41565c[0];
        }
    case 47:
        v15 = uu_truncate::TruncateMode::RoundDown;
        goto LABEL_49f68a;
    case 60:
        v15 = uu_truncate::TruncateMode::AtMost;
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return &g_41565c[0];
        }
    case 62:
        v15 = uu_truncate::TruncateMode::AtLeast;
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return &g_41565c[0];
        }
    default:
LABEL_49f68a:
        if (*((int *)&v3) != 4)
        {
            v17 = *((int128_t *)&v3);
            *((void*)&a0->field_10[0]) = v5;
            *((void*)&a0->field_0) = v17;
            return v14;
        }
    }
    v16 = (unsigned long long)v15.call_once(v4);
    *((unsigned long long *)&a0->field_8) = v16;
    a0->field_10[0] = v10;
    *((unsigned long long *)&a0->field_0) = 4;
    return v16;
}
