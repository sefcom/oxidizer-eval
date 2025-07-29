long long uu_od::parse_nrofbytes::parse_number_of_bytes(unsigned long long a0[2], unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x61]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    int v3;  // [bp-0x4f]
    unsigned long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // r13
    unsigned long v12;  // rbp
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16[2];  // r13
    unsigned long long v17;  // rax
    unsigned long long v19;  // cc_ndep

    v8 = 2;
    if (!(char)core::slice::<impl [T]>::starts_with(a1, a2, "0x0X", 2))
    {
        v8 = 2;
        if (!(char)core::slice::<impl [T]>::starts_with(a1, a2, "0X", 2))
        {
            v2 = 0;
            if ((char)core::slice::<impl [T]>::starts_with(a1, a2, ::0x4baa80::core::char::methods::encode_utf8_raw(48, &(char)v2), v9))
            {
                v8 = 0;
            }
            else
            {
                v10 = a1.get(a2);
                if (!v10)
                    core::str::slice_error_fail(a1, a2, 0, a2, &g_5960b0); /* do not return */
                uucore::features::parser::parse_size::parse_size_u64(a0, v10, a2);
                return a0;
            }
        }
    }
    v5 = a1;
    v6 = a1 + a2;
    v11 = 1;
    if ((int)core::str::validations::next_code_point_reverse(&v5))
    {
        switch ((unsigned int)v9)
        {
        case 66:
            v12 = a2;
            goto LABEL_4baf67;
        case 69:
            v11 = 0x1000000000000000;
            break;
        case 71:
            v12 = a2 - 1;
            v11 = 0x40000000;
            goto LABEL_4baf67;
        case 75: case 107:
            v12 = a2 - 1;
            v11 = 0x400;
            goto LABEL_4baf67;
        case 77: case 109:
            v12 = a2 - 1;
            v11 = 0x100000;
            goto LABEL_4baf67;
        case 80:
            v12 = a2 - 1;
            v11 = 0x4000000000000;
            goto LABEL_4baf67;
        case 84:
            v12 = a2 - 1;
            v11 = 0x10000000000;
            goto LABEL_4baf67;
        case 98:
            v11 = 0x200;
            break;
        default:
            v12 = a2;
            goto LABEL_4baf67;
        }
    }
    else
    {
        v12 = a2;
    }
LABEL_4baf67:
    v14 = v8.get(v12, a1, a2);
    if (!v14)
        core::str::slice_error_fail(a1, a2, v8, v12, &g_5960c8); /* do not return */
    ::0x4ba710::core::num::<impl u64>::from_str_radix(&(char)v2, v14, a2, v1);
    if ((char)v2)
    {
        v0 = (char)v3;
        a0[1].spec_to_string(&v0);
        a0[0] = 1;
        return a0;
    }
    v15 = v11;
    if ((char)amd64g_calculate_condition(0, 48, v15, v4, v19))
    {
        v16 = a0;
        a0[1].to_vec(a1, a2);
        v17 = 2;
    }
    else
    {
        v16 = a0;
        a0[1] = v15 * v4;
        v17 = 4;
    }
    v16[0] = v17;
    return v16;
}
