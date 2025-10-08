long long uu_fmt::linebreak::break_lines(void* a0, char a1[80], unsigned long long a2[3])
{
    void* v0;  // [bp-0xb0]
    struct_0 *v1;  // [bp-0xa8]
    unsigned long v2;  // [bp-0xa0]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long long
    struct_0 *v4;  // [bp-0x88]
    char v5;  // [bp-0x80]
    char v6[80];  // [bp-0x68]
    int v7;  // [bp-0x60]
    unsigned long long v8[3];  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    struct_0 *v13;  // r12
    unsigned long long v14;  // r15
    void* v15;  // rbx
    unsigned long v16;  // rbp
    unsigned long v17;  // rbx
    void* v18;  // rbp
    unsigned long v19;  // rbp
    unsigned long v20;  // rbx
    unsigned long v21;  // rbp
    unsigned long v22;  // r12
    unsigned long long v23;  // r15
    void* v24;  // rax
    unsigned long v25;  // rax

    v3.new(a1, a0);
    v13 = v4;
    v14 = *((long long *)&v5);
    if (v14)
    {
        v2 = v13->field_28;
        v0 = (long long)a0[88];
        if (a1[72] || a1[73] == 1)
        {
            v19 = (long long)a0[40];
            v20 = a2[2];
            if (v19 < a2[0] - v20)
            {
                memcpy(a2[1] + v20, (long long)a0[32], v19);
                a2[2] = v20 + v19;
LABEL_461344:
                v15 = (long long)a0[72];
LABEL_461348:
                v1 = v13;
                v21 = *((long long *)&v13->field_18);
                v22 = a2[2];
                if (v21 < a2[0] - v22)
                {
                    memcpy(a2[1] + v22, v13->field_10, v21);
                    a2[2] = v22 + v21;
                    v13 = v1;
                }
                else
                {
                    v13 = v1;
                    v18 = a2.write_all_cold(v13->field_10, v21);
                    if (v18)
                    {
                        core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v3, v13);
                        return v18;
                    }
                }
                v23 = 64 * v14 + (char *)v13;
                *((char *[80])&v6[0]) = a1;
                v9 = v15 + v2;
                *((int128_t *)&v7) = (int128_t)a0[56];
                v10 = v0;
                *((int *)&v11) = (!(char)a0[104] ? a1[78] : 1);
                v8[0] = a2;
                v24 = (!((a1[79] | (char)a0[104]) & 1) ? uu_fmt::linebreak::break_knuth_plass(&v13[1].field_10, v23, &v6) : uu_fmt::linebreak::break_simple(&v13[1].field_10, v23, &v6));
LABEL_461427:
                v18 = v24;
            }
            else
            {
                v18 = a2.write_all_cold((long long)a0[32], v19);
                if (!v18)
                    goto LABEL_461344;
            }
        }
        else if ((char)a0[104])
        {
            v15 = 0;
            goto LABEL_461348;
        }
        else
        {
            v16 = (long long)a0[64];
            v17 = a2[2];
            if (v16 < a2[0] - v17)
            {
                memcpy(a2[1] + v17, (long long)a0[56], v16);
                a2[2] = v17 + v16;
                v15 = v0;
                goto LABEL_461348;
            }
            else
            {
                v18 = a2.write_all_cold((long long)a0[56], v16);
                v15 = v0;
                if (v18)
                {
                    core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v3, v13);
                    return v18;
                }
            }
        }
    }
    else
    {
        v25 = a2[2];
        if (a2[0] - v25 > 1)
        {
            *((char *)(a2[1] + v25)) = 10;
            a2[2] = v25 + 1;
            v18 = 0;
        }
        else
        {
            v24 = a2.write_all_cold("\n   Found NoFormatLine when expecting FormatLinesrc/uu/fmt/src/parasplit.rsFound FormatLine when expecting NoFormatLine", 1);
            goto LABEL_461427;
        }
    }
    core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(v3, v13);
    return v18;
}
