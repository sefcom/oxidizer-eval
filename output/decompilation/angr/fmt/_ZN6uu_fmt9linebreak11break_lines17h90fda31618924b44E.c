long long uu_fmt::linebreak::break_lines::h90fda31618924b44(struct_2 *a0, char a1[80], struct_0 *a2)
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    char v4[80];  // [sp-0x90]
    int v5;  // [sp-0x88]
    struct_0 *v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    char v9;  // [sp-0x60]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    unsigned long long v14;  // r13
    unsigned long long v15[6];  // rax
    unsigned long long v16[6];  // r12
    char v17;  // 4100
    char *v18;  // rax
    void* v19;  // rsi
    unsigned long v20;  // r13
    char *v21;  // rbp
    void* v22;  // r13
    unsigned long long v23;  // rax
    void* v24;  // rsi
    unsigned long v25;  // r13
    char *v26;  // rbp
    void* v27;  // rsi
    unsigned long v28;  // r12
    char *v29;  // r13

    v14 = a0->field_58;
    uu_fmt::parasplit::ParaWords::new::h0f4d6dca046f9bf2(&v10, a1, a0);
    v1 = *((long long *)&v11);
    v2 = *((long long *)&v12) * 64 + v1;
    v15 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&v1);
    if (!v15)
    {
        v18 = a2->field_10;
        if (a2->field_0 - v18 > 1)
        {
            v18[a2->field_8] = 10;
            a2->field_10 = &v18[1];
            ::0x4bac60::core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&v10);
            return 0;
        }
        v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a2, "\n", 1);
    }
    else
    {
        v16 = v15;
        v3 = v15[5];
        v17 = a1[73];
        v0 = v14;
        if (!(!a1[72]) || !(!v17))
        {
            v19 = a0->field_20;
            v20 = a0->field_28;
            v21 = a2->field_10;
            if (v20 < a2->field_0 - v21)
            {
                memcpy(&v21[a2->field_8], v19, v20);
                a2->field_10 = &v21[v20];
            }
            else
            {
                v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a2, v19, v20);
                if (v22)
                {
                    ::0x4bac60::core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&v10);
                    return v22;
                }
            }
        }
        else if (!a0->field_68)
        {
            v24 = a0->field_38;
            v25 = *((long long *)&a0->padding_40[0]);
            v26 = a2->field_10;
            if (v25 < a2->field_0 - v26)
            {
                memcpy(&v26[a2->field_8], v24, v25);
                a2->field_10 = &v26[v25];
            }
            else
            {
                v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a2, v24, v25);
                if (v22)
                {
                    ::0x4bac60::core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&v10);
                    return v22;
                }
            }
        }
        v27 = v16[2];
        v28 = v16[3];
        v29 = a2->field_10;
        if (v28 < a2->field_0 - v29)
        {
            memcpy(&v29[a2->field_8], v27, v28);
            a2->field_10 = &v29[v28];
        }
        else
        {
            v22 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a2, v27, v28);
            if (v22)
            {
                ::0x4bac60::core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&v10);
                return v22;
            }
        }
        if (!a0->field_68)
        {
            *((char *[80])&v4[0]) = a1;
            v7 = v7;
            *((int128_t *)&v5) = *((int128_t *)&a0->field_38);
            v8 = v0;
            v9 = a1[78];
            v6 = a2;
            if (!(!a1[79]))
                goto LABEL_4bb3e3;
            v23 = uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(v1, v2, v4);
        }
        else
        {
            *((char *[80])&v4[0]) = a1;
            v7 = v7;
            *((int128_t *)&v5) = *((int128_t *)&a0->field_38);
            v8 = v0;
            v9 = 1;
            v6 = a2;
LABEL_4bb3e3:
            v23 = uu_fmt::linebreak::break_simple::h99fb810256b9c0af(v1, v2, v4);
        }
    }
    v22 = v23;
    ::0x4bac60::core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&v10);
    return v22;
}
