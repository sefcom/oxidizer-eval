long long uu_head::uu_head::h50c9b533b8c9e19e(struct_1 *a0)
{
    char v0;  // [sp-0x110]
    char v1;  // [sp-0x10f]
    char v2;  // [sp-0x10e]
    char v3;  // [sp-0x10d]
    unsigned int v4;  // [sp-0x10c]
    int v5;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x100], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xf0], Other Possible Types: unsigned int, unsigned long long
    void* v9;  // [sp-0xe8]
    unsigned long v10;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v12;  // [bp-0xcc]
    unsigned long long v13;  // [sp-0xc8]
    unsigned long long v14;  // [sp-0xc0]
    unsigned long v15;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xa8]
    char *v18;  // [sp-0xa0]
    unsigned long long v19;  // [sp-0x98]
    char *v20;  // [sp-0x90]
    unsigned long long v21;  // [sp-0x88]
    unsigned long long v22;  // [sp-0x78]
    unsigned long v23;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x68]
    unsigned long v25;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x58]
    unsigned long long v27;  // [sp-0x50]
    char v28;  // [bp-0x48]
    char v29;  // [bp-0x38]
    unsigned long long v31[3];  // rax
    char v32;  // r15b
    int v33;  // ymm0
    unsigned long long v34;  // rbx
    unsigned long long v35;  // r12
    unsigned long v36;  // rdx
    char v37;  // al
    int v38;  // xmm0

    v22 = a0->field_20;
    v25 = a0->field_18;
    v26 = v25 + v22 * 24;
    v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&v25);
    if (!v31)
        return 0;
    v3 = a0->field_2a;
    v2 = a0->field_29;
    v1 = a0->field_28 & !v2;
    v27 = a0->field_0;
    v14 = a0->field_8;
    v0 = a0->field_2b;
    v32 = 0;
LABEL_4ba303:
    if (!v3)
    {
        while (true)
        {
            v34 = v31[1];
            v35 = v31[2];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(v34, v35, "-: \nsrc/uu/head/src/head.rs==> standard input <==\n <==\nerror reading : Input/output error", 1))
                break;
            v16 = v34;
            v17 = v35;
            std::fs::File::open::h0c25e6f8dfd437ae(&v11, v34, v35);
            if (*((int *)&v11))
            {
                v15 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha41e17c1af67ee82(v13, v16, v17);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v23 = uucore::util_name::h60d842bf27b05e82();
                v24 = v36;
                v18 = &v23;
                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                v20 = &v15;
                v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha092e32133e67aba;
                v5 = &g_52ce60;
                v6 = 3;
                v9 = 0;
                v7 = &v18;
                v8 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v5);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hc0cdad0ceeb81ca9(v15);
                v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&v25);
                if (!v31)
                    return 0;
            }
            else
            {
                v4 = *((int *)&v12);
                if (v22 > 1)
                {
                    if (!(!v1))
                        goto LABEL_4ba769;
                }
                else
                {
                    if (!v2)
                        goto LABEL_4ba769;
                }
                if ((v32 & 1))
                {
                    v5 = &g_52cf20;
                    v6 = 1;
                    v7 = 8;
                    v33 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((uint128_t *)&v8) = 0;
                    std::io::stdio::_print::he918bceb0c89db46(&v5);
                }
                v18 = &v16;
                v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                v5 = &g_52cf40;
                v6 = 2;
                v9 = 0;
                v7 = &v18;
                v8 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v5);
LABEL_4ba769:
                v10 = uu_head::head_file::h48e6bcfaf0dc6df4(&v4, a0);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hcd6f8a6171cb1cbe();
                if (v10)
                {
                    v37 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(v34, v35, "-: \nsrc/uu/head/src/head.rs==> standard input <==\n <==\nerror reading : Input/output error", 1);
                    if (v37)
                        v34 = "standard input";
                    if (v37)
                        v35 = 14;
                    v16 = v34;
                    v17 = v35;
                    v18 = &v16;
                    v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                    v5 = &g_52cf60;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v18;
                    v8 = 1;
                    ::0x4b8250::core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2();
                    v8 = 1;
                    v38 = *((int128_t *)&v28);
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                    v5 = v38;
                    v7 = *((long long *)&v29);
                    *((double *)&v11) = alloc::boxed::Box$LT$T$GT$::new::h92b1183da66f27c9(&v5);
                    v13 = &g_52cfb8;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)::0x4b8560::_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v11));
                    v23 = uucore::util_name::h60d842bf27b05e82();
                    v24 = v36;
                    v18 = &v23;
                    v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                    v20 = &v11;
                    v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8560145aaa71c4e2;
                    v5 = &g_52ce60;
                    v6 = 3;
                    v9 = 0;
                    v7 = &v18;
                    v8 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v5);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb08365f676f654b9(v11, v13);
                }
                ::0x4b7f70::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6d35cd5749ca4149(&v10);
                v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&v25);
                v32 = v10 & 0xffffffffffffff00 | 1;
                if (!v31)
                    return 0;
                goto LABEL_4ba303;
            }
        }
    }
    if (v22 <= 1)
    {
        if (!v2)
        {
            vvar_553{stack -160} = std::io::stdio::stdin::h7215cc131abb55d8();
            vvar_555{stack -264} = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v18);
            v6 = (char)v36 & 1;
            goto *((int *)(4316068 + (long long)(stack_base)[80] * 4)) + 4316068;
        }
    }
    else
    {
        if (v1)
        {
            vvar_558{stack -160} = std::io::stdio::stdin::h7215cc131abb55d8();
            vvar_560{stack -264} = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v18);
            v6 = (char)v36 & 1;
            goto *((int *)(4316068 + (long long)(stack_base)[80] * 4)) + 4316068;
        }
    }
    if ((v32 & 1))
    {
        v5 = &g_52cf20;
        v6 = 1;
        v7 = 8;
        *((uint128_t *)&v8) = 0;
        std::io::stdio::_print::he918bceb0c89db46(&v5);
    }
    v5 = &g_52cf30;
    v6 = 1;
    v7 = 8;
    *((uint128_t *)&v8) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v5);
    v18 = std::io::stdio::stdin::h7215cc131abb55d8();
    v5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v18);
    v6 = (char)v36 & 1;
    goto *((int *)(4316068 + (long long)(stack_base)[80] * 4)) + 4316068;
}
