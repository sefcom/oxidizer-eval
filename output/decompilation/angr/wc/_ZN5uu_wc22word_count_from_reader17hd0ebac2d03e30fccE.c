long long uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(struct_0 *a0, unsigned int a1, char a2[29])
{
    unsigned int v0;  // [bp-0xc]
    char v2;  // cl
    char v3;  // al
    char v4;  // dil
    char v5;  // r8b
    char v6;  // dl
    struct_0 *v7;  // rdi
    struct_0 *v8;  // rdi
    struct_0 *v9;  // rdi
    struct_0 *v10;  // rdi
    unsigned long v11;  // rdx

    v2 = a2[28];
    v3 = a2[27];
    v4 = v3 | v2;
    v5 = a2[25];
    v6 = a2[26];
    if (!a2[24])
    {
        if (!v5)
        {
            if (!v6)
            {
                if (!v4)
                    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_531108); /* do not return */
LABEL_4ba0f0:
                v10 = a0;
                if (!v2)
                    return uu_wc::word_count_from_reader_specialized::h9bdcd99cc6378816(v10, a1);
                if (v3)
                    return uu_wc::word_count_from_reader_specialized::hcf58188208ea39bc(v10, a1);
                return uu_wc::word_count_from_reader_specialized::hb94caab2da1608c4(v10, a1);
            }
            if (!v4)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hdfffe1c8fb5fd667(a0, &v0);
            }
            else
            {
LABEL_4ba06a:
                v9 = a0;
                if (!v2)
                    return uu_wc::word_count_from_reader_specialized::h4d593fc0f43f9bcf(v9, a1);
                if (!v3)
                    return uu_wc::word_count_from_reader_specialized::hb360281d2d35178d(v9, a1);
                return uu_wc::word_count_from_reader_specialized::hab046612f28a0bdc(v9, a1);
            }
        }
        else if (!v6)
        {
            if (!v4)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::haca20aa05e84b1c1(a0, &v0);
            }
            else
            {
LABEL_4ba092:
                v8 = a0;
                if (!v2)
                {
                    return uu_wc::word_count_from_reader_specialized::h919a69502965bff9(v8, a1);
                }
                else if (!v3)
                {
                    return uu_wc::word_count_from_reader_specialized::hd3a171cb03b8bcb0(v8, a1);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::hac99886e1e61c8a7(v8, a1);
                }
            }
        }
        else
        {
            if (!v4)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcc94ccba794e2fff(a0, &v0);
            }
            else
            {
LABEL_4ba00e:
                v7 = a0;
                if (!v2)
                {
                    return uu_wc::word_count_from_reader_specialized::hf67f53152ea8a52b(v7, a1);
                }
                else if (v3)
                {
                    return uu_wc::word_count_from_reader_specialized::h2325bc60fba5da93(v7, a1);
                }
                else
                {
                    return uu_wc::word_count_from_reader_specialized::h42eb5bce6f526c18(v7, a1);
                }
            }
        }
    }
    else
    {
        if (v5)
        {
            if (!v6)
            {
                if (!(!v4))
                    goto LABEL_4ba092;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3d54c0eb4d87463c(a0, &v0);
            }
            else
            {
                if (!(!v4))
                    goto LABEL_4ba00e;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7978f18bcbb2d44(a0, &v0);
            }
        }
        else
        {
            if (!v6)
            {
                if (!(!v4))
                    goto LABEL_4ba0f0;
                a0->field_0 = uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(&v0);
                *((uint128_t *)&(&a0->field_0)[1]) = 0;
                *((uint128_t *)((char *)&a0->field_8 + 8)) = 0;
                *((unsigned long *)((char *)&a0->field_18 + 8)) = v11;
            }
            else
            {
                if (!(!v4))
                    goto LABEL_4ba06a;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::he40ae303cc0bd17f(a0, &v0);
            }
        }
    }
    return ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(a1);
}
