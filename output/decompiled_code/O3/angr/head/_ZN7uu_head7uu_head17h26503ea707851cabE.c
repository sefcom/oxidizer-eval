int uu_head::uu_head::h26503ea707851cab()
{
    char v0;  // [sp-0x10159]
    unsigned int v1;  // [sp-0x10158]
    char v2;  // [sp-0x10152]
    char v3;  // [sp-0x10151]
    char v4;  // [bp-0x10150], Other Possible Types: unsigned long long
    char v5;  // [bp-0x1014c]
    char v6;  // [bp-0x10148]
    unsigned long long v7[2];  // [sp-0x10138]
    unsigned long long v8;  // [sp-0x10130]
    char v9;  // [sp-0x10121]
    struct struct_1 **v10;  // [sp-0x10120], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x10118]
    struct struct_3 **v12;  // [sp-0x10110]
    unsigned long long v13;  // [sp-0x10108]
    char *v14;  // [sp-0x100d8]
    unsigned long long v15;  // [sp-0x100d0]
    int v16;  // [sp-0x100c8]
    unsigned long long v17;  // [sp-0x10090]
    unsigned long long v18;  // [sp-0x10088]
    char *v19;  // [sp-0x10080]
    unsigned long v20;  // [sp-0x10078], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x10068]
    unsigned long long v22;  // [sp-0x10060]
    unsigned long long v23;  // [sp-0x10058]
    unsigned long long v24;  // [sp-0x10038]
    unsigned int v25;  // [bp-0x10030], Other Possible Types: char, unsigned long long
    unsigned short v26;  // [sp-0x1002c]
    struct struct_2 **v27;  // [sp-0x10028], Other Possible Types: unsigned long long
    int v28;  // [sp-0x10020], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x10018]
    void* v30;  // [sp-0x2030]
    struct_5 *v32;  // rdi
    struct_4 *v33;  // rbx
    char *v34;  // r15
    struct_0 *v36;  // rbx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    int v39;  // ymm0
    unsigned long long v41;  // rsi
    int v42;  // xmm0
    unsigned long long v43;  // rdx
    unsigned long long v44[2];  // r15
    unsigned long long v45;  // rsi
    unsigned long long v47;  // rsi

    do
    {
        v30 = 0;
    } while (&v30 != &v25);
    v21 = v32->field_20;
    if (!v21)
        return;
    v33 = v32->field_18;
    v22 = (char *)v33 + 24 * v21;
    v9 = v32->field_2a;
    v3 = v32->field_29;
    v2 = v32->field_28 & !v3;
    v18 = v32->field_0;
    v0 = v32->field_2b;
    v8 = v32->field_8;
    v23 = v8 + 1;
    v17 = &g_4efd68;
    if (v9)
    {
        v34 = v33->field_8;
        goto LABEL_488c81;
    }
    do
    {
        v36 = &v33[1].field_8;
        v34 = v36[1].field_-10;
        if (v15 == 1 && *(v34) == 45)
        {
            goto LABEL_488c81;
        }
        else
        {
            v14 = v34;
            v15 = v36->field_-8;
            v24 = 0x1b600000000;
            v26 = 0;
            v25 = 0;
            v25 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v24, v34, v15);
            if (!*((int *)&v4))
            {
                v19 = v34;
                v1 = *((int *)&v5);
                if (v21 != 1)
                {
                    if (v2)
                        goto *((int *)(4299552 + (long long)(stack_base)[65672] * 4)) + 4299552;
                }
                else
                {
                    if (!v3)
                        goto *((int *)(4299552 + (long long)(stack_base)[65672] * 4)) + 4299552;
                }
                v10 = &v14;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5012527d5c30dc07;
                v24 = &g_4efdd8;
                v25 = 2;
                v29 = 0;
                v27 = &v10;
                v28 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v24, v47, v43);
                goto *((int *)(4299552 + (long long)(stack_base)[65672] * 4)) + 4299552;
            }
            *((double *)&v7[0]) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h8abc7f2c462b0729(*((long long *)&v6), v14, v15);
            _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
            if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
                goto LABEL_0x488d5e;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2)
                goto LABEL_488d80;
            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        }
LABEL_488d80:
        v42 = g_4f49e8;
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v16 = v42;
        v10 = &v16;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5012527d5c30dc07;
        v12 = &v7[0];
        v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea64761a4830a83;
        v24 = &g_4efdf8;
        v25 = 3;
        v29 = 0;
        v27 = &v10;
        v28 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v41, v43);
        v44 = v7;
        v45 = v44[0];
        if (v45 != 0x8000000000000000 && v45)
            __rust_dealloc(v44[1]);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdff32cea30a0f361(&v44[1 + 1]);
        __rust_dealloc(v44);
    } while (v36 != v22);
LABEL_488c81:
    v19 = v34;
    if (v21 != 1)
    {
        if (v2)
        {
            vvar_463{stack -65656} = std::io::stdio::stdin::h7215cc131abb55d8();
            vvar_465{stack -65872} = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v20);
            vvar_466{stack -65864} = (char)v43 & 1;
            goto *((int *)(4299568 + (long long)(stack_base)[65672] * 4)) + 4299568;
        }
    }
    else
    {
        if (!v3)
        {
            vvar_457{stack -65656} = std::io::stdio::stdin::h7215cc131abb55d8();
            vvar_459{stack -65872} = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v20);
            vvar_460{stack -65864} = (char)v43 & 1;
            goto *((int *)(4299568 + (long long)(stack_base)[65672] * 4)) + 4299568;
        }
    }
    v24 = &g_4efe28;
    v25 = 1;
    v27 = 8;
    *((int128_t *)&v28) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v24, v37, v38);
    v20 = std::io::stdio::stdin::h7215cc131abb55d8();
    v4 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v20);
    v6 = (char)v43 & 1;
    goto *((int *)(4299568 + (long long)(stack_base)[65672] * 4)) + 4299568;
}
