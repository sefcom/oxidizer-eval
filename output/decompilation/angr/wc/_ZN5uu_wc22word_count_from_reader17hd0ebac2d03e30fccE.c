long long uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(struct_0 *a0, unsigned int a1, char a2[29])
{
    unsigned int v0;  // [sp-0xc]
    unsigned int v2;  // esi
    char v3;  // cl
    char v4;  // al
    char v5;  // dil
    char v6;  // r8b
    char v7;  // dl
    struct_0 *v8;  // rdi
    struct_0 *v9;  // rdi
    struct_0 *v10;  // rdi
    struct_0 *v11;  // rdi
    unsigned long v12;  // rdx

    v2 = a1;
    v0 = a1;
    v3 = a2[28];
    v4 = a2[27];
    v5 = v4 | v3;
    v6 = a2[25];
    v7 = a2[26];
    if (!a2[24])
    {
        if (!v6)
        {
            if (!v7)
            {
                if (!v5)
                    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_531108); /* do not return */
LABEL_4ba0f0:
                v11 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h9bdcd99cc6378816(v11, v2);
                if (v4)
                    return uu_wc::word_count_from_reader_specialized::hcf58188208ea39bc(v11, v2);
                return uu_wc::word_count_from_reader_specialized::hb94caab2da1608c4(v11, v2);
            }
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hdfffe1c8fb5fd667(a0, &v0);
            }
            else
            {
LABEL_4ba06a:
                v10 = a0;
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::h4d593fc0f43f9bcf(v10, v2);
                if (!v4)
                    return uu_wc::word_count_from_reader_specialized::hb360281d2d35178d(v10, v2);
                return uu_wc::word_count_from_reader_specialized::hab046612f28a0bdc(v10, v2);
            }
        }
        else if (!v7)
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::haca20aa05e84b1c1(a0, &v0);
            }
            else
            {
LABEL_4ba092:
                v9 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized::h919a69502965bff9(v9, v2);
                }
                else if (!v4)
                {
                    return uu_wc::word_count_from_reader_specialized::hd3a171cb03b8bcb0(v9, v2);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::hac99886e1e61c8a7(v9, v2);
                }
            }
        }
        else
        {
            if (!v5)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcc94ccba794e2fff(a0, &v0);
            }
            else
            {
LABEL_4ba00e:
                v8 = a0;
                if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized::hf67f53152ea8a52b(v8, v2);
                }
                else if (v4)
                {
                    return uu_wc::word_count_from_reader_specialized::h2325bc60fba5da93(v8, v2);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::h42eb5bce6f526c18(v8, v2);
                }
            }
        }
    }
    else
    {
        if (v6)
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4ba092;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3d54c0eb4d87463c(a0, &v0);
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba00e;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7978f18bcbb2d44(a0, &v0);
            }
        }
        else
        {
            if (!v7)
            {
                if (!(!v5))
                    goto LABEL_4ba0f0;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(&v0);
                *((uint128_t *)&(&a0->field_0)[1]) = 0;
                *((uint128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v12;
            }
            else
            {
                if (!(!v5))
                    goto LABEL_4ba06a;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::he40ae303cc0bd17f(a0, &v0);
            }
        }
    }
    return ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
}
