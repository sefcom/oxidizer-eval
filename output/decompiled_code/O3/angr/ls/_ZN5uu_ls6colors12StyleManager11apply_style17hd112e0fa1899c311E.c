long long uu_ls::colors::StyleManager::apply_style::hd112e0fa1899c311(struct_0 *a0, struct_2 *a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    void* v0;  // [sp-0x110]
    unsigned int *v1;  // [sp-0x108]
    unsigned int *v2;  // [sp-0x100], Other Possible Types: unsigned long long
    int v3;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned int *v4;  // [sp-0xf0]
    unsigned int v5;  // [bp-0xe8], Other Possible Types: unsigned long
    int v6;  // [bp-0xd8], Other Possible Types: char, unsigned long long, unsigned long
    char v7;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0xc8], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0xc0]
    unsigned long long v11;  // [sp-0xb8]
    unsigned long long v12;  // [sp-0xb0]
    unsigned long long v13;  // [sp-0xa8]
    unsigned long long v14;  // [sp-0xa0]
    unsigned long v15;  // [sp-0x98], Other Possible Types: char
    int v16;  // [bp-0x97]
    unsigned long long v17;  // [sp-0x90]
    unsigned long v18;  // [bp-0x88]
    unsigned int v19;  // [sp-0x87]
    unsigned long long v20;  // [sp-0x80]
    void* v21;  // [sp-0x78]
    unsigned long v22;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x60]
    unsigned long v24;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x50]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x38]
    unsigned long long v29;  // rbp
    struct_1 *v30;  // rax
    unsigned int *v32;  // r15
    unsigned long long v33;  // r13
    unsigned long v34;  // r15
    unsigned int *v37;  // rdi
    unsigned int *v38;  // rax
    unsigned int *v40;  // rax
    unsigned int *v41;  // r13
    unsigned int *v42;  // r15
    unsigned int *v43;  // rax
    unsigned int *v44;  // r12
    unsigned int *v45;  // r15
    unsigned long long v46;  // r15
    unsigned long v47;  // r12
    unsigned int *v48;  // r13
    unsigned int *v49;  // r13
    unsigned int *v50;  // rax
    unsigned long long v53;  // rax

    v29 = a5;
    v22 = a3;
    v23 = a4;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (a1->field_8 != 2 || (v30 = lscolors::LsColors::style_for_indicator::h42d4a0cedd22bade(a1->field_0, 0), !(v30) || !((v5 = (unsigned int)*((int *)((char *)&v30->field_1 + 1)), *((int128_t *)&v3) = *((int128_t *)&(&v30->field_0)[1]), v15 != 2))))
    {
        v32 = 0;
    }
    else
    {
        v15 = v30->field_0;
        *((int128_t *)&v16) = (int128_t)v3;
        v19 = v5;
        _ZN5uu_ls6colors12StyleManager14get_style_code17h2c1541457e7d94a4E.llvm.15944453427201852302(&v6, a1, &v15);
        v33 = *((long long *)&v7);
        v34 = v9;
        if (v34)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb10d2e3b114b7e19(&v0, 0, v34);
            v37 = v1;
            v38 = v2;
        }
        memcpy(v37 + v38, v33, v34);
        v32 = v34 + (char *)v2;
        v2 = v32;
        if (v6)
            __rust_dealloc(v33);
    }
    if (a2)
    {
        if (!(char)uu_ls::colors::StyleManager::is_current_style::h583cafd996507022(a1, a2))
        {
            if (!a1->field_1d || a1->field_8 != 2)
            {
                a1->field_1d = 1;
                a1->field_8 = 2;
                v40 = __rust_alloc(4, 1);
                if (!v40)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v41 = v40;
                *(v40) = 1831885595;
                if (v0 - v32 <= 3)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb10d2e3b114b7e19(&v0, v32, 4);
                    v42 = v2;
                }
                *((unsigned int *)(v1 + v42)) = *(v41);
                v2 = v42 + 1;
                __rust_dealloc(v41);
            }
            else
            {
                v2 = v32;
            }
            _ZN5uu_ls6colors12StyleManager14get_style_code17h2c1541457e7d94a4E.llvm.15944453427201852302(&v6, a1, a2);
            v46 = *((long long *)&v7);
            v47 = v9;
            v48 = v2;
            if (v0 - v48 < v47)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb10d2e3b114b7e19(&v0, v48, v47);
                v49 = v2;
            }
            memcpy(v1 + v49, v46, v47);
            v2 = (char *)v49 + v47;
            if (v6)
                __rust_dealloc(v46);
        }
    }
    else
    {
        if (lscolors::LsColors::style_for_indicator::h42d4a0cedd22bade(a1->field_0, 0) && (char)v6 != 2 && (char)uu_ls::colors::StyleManager::is_current_style::h583cafd996507022(a1, &v6))
        {
            if (a1->field_8 == 2)
            {
                v2 = v32;
                goto LABEL_4e2c14;
            }
            else
            {
                a1->field_1d = 1;
                a1->field_8 = 2;
                v43 = __rust_alloc(4, 1);
                if (!v43)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v44 = v43;
                *(v43) = 1831885595;
                if (v0 - v32 <= 3)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb10d2e3b114b7e19(&v0, v32, 4);
                    v42 = v2;
                }
                *((unsigned int *)(v1 + v45)) = *(v44);
                v2 = v45 + 1;
                __rust_dealloc(v44);
LABEL_4e2c14:
                v50 = 1;
                *((int *)&v24) = (!(v29 & 255 & 255) ? 1 : &g_42fbe8);
                v25 = (v29 & 4294967295) * 3;
                a1->field_1d = 1;
                a1->field_8 = 2;
                v50 = __rust_alloc(4, 1);
                if (v50)
                {
                    *(v50) = 1831885595;
                    v3 = 4;
                    v4 = v50;
                    v5 = v3;
                    v6 = &v0;
                    v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v9 = &v22;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h237db28e9458866a;
                    v11 = &v3;
                    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v13 = &v24;
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h237db28e9458866a;
                    v15 = &g_42fbf0;
                    v17 = 4;
                    v21 = 0;
                    v18 = &v6;
                    v20 = 4;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v26, &v15);
                    if (v3)
                        __rust_dealloc(v4);
                    v53 = *((long long *)&v27);
                    a0->field_10 = v53;
                    a0->field_0 = *((int128_t *)&v26);
                    if (!v0)
                        return v53;
                    __rust_dealloc(v1);
                }
            }
        }
    }
    goto LABEL_4e2c14;
}
