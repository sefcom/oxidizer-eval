long long uu_tail::parse::parse_obsolete(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned int, unsigned long long
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r13
    unsigned long long v17;  // r13
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long v30;  // rax
    char v31;  // cl
    char v32;  // bpl

    v0.try_from(a1[1], a1[2]);
    if ((v0 & 1))
    {
        a0->field_0 = 3;
    }
    else
    {
        v12 = v6;
        v13 = v7;
        v3 = 0;
        v14 = ::0x515590::core::char::methods::encode_utf8_raw(45, &v3).strip_prefix_of(v12, v13);
        v10 = v14;
        if (!v10)
        {
            v4 = 0;
            v14 = ::0x515590::core::char::methods::encode_utf8_raw(43, &v4).strip_prefix_of(v12, v13);
            if (!v14)
            {
                a0->field_a = 3;
                return a0;
            }
        }
        if (!core::str::<impl str>::find(v14, v16))
            v17 = v16;
        else
            v17 = v15;
        v19 = v17;
        if (!v19.get(v14, v16))
            core::str::slice_error_fail(v14, v16, 0, v19, &g_637e00); /* do not return */
        if (!v15)
        {
            v8 = v15;
            v6 = 10;
            goto LABEL_515b58;
        }
        v20 = v19.get(v14, v16);
        if (!v20)
            core::str::slice_error_fail(v14, v16, 0, v19, &g_637e18); /* do not return */
        ::0x5150c0::core::num::<impl u64>::from_str_radix(&v5, v20, v15);
        if ((char)v5)
        {
            a0->field_0 = 0;
        }
        else
        {
            v8 = v15;
LABEL_515b58:
            v9 = v6;
            v22 = v19.get(v14, v16);
            if (!v22)
                core::str::slice_error_fail(v14, v16, v19, v16, &g_637e30); /* do not return */
            v23 = v22;
            v0 = 0;
            v24 = ::0x515590::core::char::methods::encode_utf8_raw(108, &v0).strip_prefix_of(v23, v15);
            if (v24)
            {
                v25 = v24;
                v24.is_contained_in(v15);
                v26 = v25 + v15;
                v0 = v25;
                goto LABEL_515bc2;
            }
            v1 = 0;
            v27 = ::0x515590::core::char::methods::encode_utf8_raw(99, &v1).strip_prefix_of(v23, v15);
            if (v27)
            {
                v27.is_contained_in(v15);
                v0 = v27;
                v6 = v0 + v15;
                if (v0.try_fold().eq())
                {
                    v28 = 1;
                    goto LABEL_515ce0;
                }
            }
            else
            {
                v2 = 0;
                v29 = ::0x515590::core::char::methods::encode_utf8_raw(98, &v2).strip_prefix_of(v23, v15);
                if (v29)
                {
                    v29.is_contained_in(v15);
                    v0 = v29;
                    v6 = v0 + v15;
                    if (!v0.try_fold().eq())
                        goto LABEL_515d02;
                    v28 = 0x200;
LABEL_515ce0:
                    v30 = v9 * v28;
                    if (!((char)amd64g_calculate_condition(0, 48, v9, v28, v18)))
                    {
                        *((unsigned long *)&a0->field_0) = v30;
                        a0->field_8 = !v10;
                        a0->field_9 = v31;
                        a0->field_a = v32;
                        return a0;
                    }
LABEL_515bf6:
                    a0->field_0 = 1;
                }
                else
                {
                    v23.is_contained_in(v15);
                    v26 = v23 + v15;
                    v0 = v23;
LABEL_515bc2:
                    v6 = v26;
                    if (v0.try_fold().eq())
                    {
                        if (!((char)amd64g_calculate_condition(0, 48, v9, 1, v18)))
                        {
                            *((unsigned long long *)&a0->field_0) = v9 * 1;
                            a0->field_8 = !v10;
                            a0->field_9 = 1;
                            a0->field_a = v32;
                            return a0;
                        }
                        goto LABEL_515bf6;
                    }
LABEL_515d02:
                    if (!v10)
                    {
                        a0->field_a = 3;
                        return a0;
                    }
                    else if (v8)
                    {
                        a0->field_0 = 2;
                    }
                    else
                    {
                        a0->field_a = 3;
                        return a0;
                    }
                }
            }
        }
    }
    a0->field_a = 2;
    return a0;
}
