long long uu_fmt::linebreak::break_knuth_plass(unsigned long long a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0xa9]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    int v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x80]
    unsigned long long v7[3];  // [bp-0x78]
    char *v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x67]
    char v11;  // [bp-0x66]
    void* v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    char v15;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x40]
    char v17;  // [bp-0x38]
    unsigned long long v20[3];  // rax
    void* v21;  // r13
    char v22;  // r12b
    struct_0 *v23;  // rax
    struct_0 *v24;  // r15
    char v25;  // r12b
    struct_1 *v26;  // rax
    struct_1 *v27;  // r13
    unsigned long long v28[3];  // rdi
    unsigned long long v29;  // rax

    v13 = a0;
    v14 = a1;
    uu_fmt::linebreak::find_kp_breakpoints(&v15, a0.clone(a1), a2, a2);
    v2 = v16;
    v3 = *((long long *)&v17) * 16 + v2;
    v20 = (long long)a2[24];
    *((int128_t *)&v4) = (int128_t)a2[8];
    v6 = a2 + 48;
    v7[0] = v20;
    v8 = &v13;
    v9.try_rfold(&v2, &(char)v4);
    if (v9 == 1)
    {
        v21 = v12;
    }
    else
    {
        v22 = v11;
        *((int128_t *)&v1) = *((int128_t *)&v13);
        v23 = v2.next();
        if (v23)
        {
            v24 = v23;
            v0 = v10;
            if (v22)
            {
                v21 = uu_fmt::linebreak::write_newline((long long)a2[8], (long long)a2[16], (long long)a2[24]);
                if (!v21)
                    goto LABEL_4617ef;
            }
            else
            {
LABEL_4617ef:
                uu_fmt::linebreak::slice_if_fresh(&(char)v4, v22, v24->field_10, v24->field_18, v24->field_20, *((char *)v6), v24->field_3a, v24->field_38, v0);
                v25 = v24->field_39;
                v21 = uu_fmt::linebreak::write_with_spaces(v5, v6, (long long)v4, (long long)a2[24]);
                if (v21)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v15, v2);
                    return v21;
                }
                while (true)
                {
                    v26 = v2.next();
                    if (!v26)
                        break;
                    v27 = v26;
                    uu_fmt::linebreak::slice_if_fresh(&(char)v4, 0, v27->field_10, v27->field_18, v27->field_20, *((char *)v6), v27->field_3a, v26->field_38, v25);
                    v25 = v27->field_39;
                    v21 = uu_fmt::linebreak::write_with_spaces(v5, v6, (long long)v4, (long long)a2[24]);
                    if (v21)
                    {
                        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v15, v2);
                        return v21;
                    }
                }
                goto LABEL_4618ce;
            }
        }
        else
        {
LABEL_4618ce:
            v28 = (long long)a2[24];
            v29 = v28[2];
            if (v28[0] - v29 > 1)
            {
                *((char *)(v28[1] + v29)) = 10;
                v28[2] = v29 + 1;
                v21 = 0;
            }
            else
            {
                v21 = v28.write_all_cold("\n   Found NoFormatLine when expecting FormatLinesrc/uu/fmt/src/parasplit.rsFound FormatLine when expecting NoFormatLine", 1);
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v15, v2);
    return v21;
}
