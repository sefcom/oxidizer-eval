long long uu_join::State::next_line::h4d0834fe1ff7b894(struct_0 *a0, struct_1 *a1, char a2[2])
{
    char v0;  // [sp-0x159]
    char v1;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x150], Other Possible Types: unsigned long long
    char v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x140]
    void* v5;  // [bp-0x138], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [sp-0x130]
    int v7;  // [sp-0x128]
    unsigned long long v8;  // [sp-0x118]
    unsigned long v9;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x100]
    int v11;  // [sp-0xf8]
    int v12;  // [sp-0xe8]
    unsigned long v13;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xd0]
    unsigned long long v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xc0]
    void* v17;  // [sp-0xb8]
    char v18;  // [bp-0xa8]
    void* v19;  // [sp-0x90], Other Possible Types: unsigned long, unsigned long long
    int v20;  // [bp-0x88], Other Possible Types: unsigned long
    char v21;  // [sp-0x78]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x60]
    int v24;  // [sp-0x58]
    int v25;  // [sp-0x48]
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rcx
    void* v29;  // rax
    void* v30;  // r13
    unsigned long long v31;  // r12
    unsigned long v33;  // r12
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rsi
    int v38;  // xmm0

    v27 = 0x8000000000000000;
    uu_join::State::read_line::hcb7305c7b3d40720(&v1, a1, a2 + 1);
    v28 = v1;
    v29 = v2;
    if (v28 == 9223372036854775809)
    {
        a0->field_8 = 0x8000000000000000;
        a0->field_10 = v29;
        v27 = 9223372036854775809;
    }
    else
    {
        *((int128_t *)&v25) = *((int128_t *)&v5);
        *((int128_t *)&v24) = *((int128_t *)&v3);
        if (v28 != 0x8000000000000000)
        {
            v9 = v28;
            v10 = v29;
            v12 = v25;
            v11 = v24;
            v0 = a2[1];
            if (v0 == 1)
            {
                v29 = v9;
                *((void*)&a0->field_20) = v12;
                *((void*)&a0->field_10) = v11;
                a0->field_0 = v29;
                a0->field_8 = v10;
                return v29;
            }
            v30 = uu_join::State::get_current_key::h41ed13e3cd927031(a1);
            v29 = uu_join::Line::get_field::ha4bb61e8b997f700(&v9, *((long long *)&a1->padding_28[16]));
            if (!(!v30 || !v29))
            {
                if (a2[0])
                {
                    v13 = v30;
                    v14 = v36;
                    v1 = v29;
                    v2 = v36;
                    v29 = _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::hd30d09f7a24158f3(&v13, &v1);
                }
                v31 = v36;
                v34 = memcmp(v30, v29, v33);
                v29 = v34 | -0x100 | v35;
                if (!(v35 >= 0) || !((char)v29 == 1))
                {
LABEL_4416a3:
                    v38 = *((int128_t *)&v9);
                    *((void*)&a0->field_20) = v12;
                    *((void*)&a0->field_10) = v11;
                    *((void*)&a0->field_0) = v38;
                    return v29;
                }
            }
            else if (!v30)
            {
                vvar_424{reg 224} = *((int128_t *)&v9);
                *((void*)&a0->field_20) = v12;
                *((void*)&a0->field_10) = v11;
                *((void*)&a0->field_0) = v38;
                return v29;
            }
            if (v0 == 2 || a1->padding_48[11] && !a1->padding_48[10])
            {
                v19 = 0;
                *((int128_t *)&v20) = *((int128_t *)&(&a1->padding_0)[1]);
                v21 = 0;
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v18, (long long)v12, (long long)(&v12)[8]);
                v1 = &v19;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &a1->padding_48;
                v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v5 = &v18;
                v6 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h37d78e9ddc8a0d1b;
                v13 = &g_4fb0b8;
                v14 = 3;
                v17 = 0;
                v15 = &v1;
                v16 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v22, &v13);
                if (*((long long *)&v18) != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfd731076e27d54cf();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hea1e2ac3db1ac4d1(&v18);
                }
                *((int128_t *)&v7) = *((int128_t *)&v22);
                v8 = *((long long *)&v23);
                if (v0 == 2)
                {
                    *((unsigned long long *)&a0->padding_18[0]) = v8;
                    *((void*)&a0->field_8) = v7;
                    a0->field_0 = 9223372036854775809;
                    v29 = ::0x43c2a0::core::ptr::drop_in_place$LT$uu_join..Line$GT$::hee5e27c0c773ca27(&v9);
                    return v29;
                }
                v19 = uucore::execution_phrase::hded5ccd87df1fcab();
                v20 = v36;
                v13 = &v19;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9dcb9885681632;
                v15 = &v7;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v1 = &g_4fb0e8;
                v2 = 3;
                v5 = 0;
                v3 = &v13;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v37, v36);
                a1->padding_48[10] = 1;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfd731076e27d54cf();
                v29 = _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hea1e2ac3db1ac4d1(&v7);
            }
            goto LABEL_4416a3;
        }
    }
    a0->field_0 = v27;
    return v29;
}
