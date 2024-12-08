int uu_head::uu_head::hb60bd3eff0280cd6()
{
    char v1;  // [sp-0x10f]
    char v2;  // [sp-0x10e]
    char v3;  // [sp-0x10d]
    unsigned int v4;  // [sp-0x10c]
    int v5;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xf8]
    int v8;  // [bp-0xf0], Other Possible Types: unsigned int, unsigned long long
    void* v9;  // [sp-0xe8]
    unsigned long v10;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v12;  // [bp-0xcc]
    unsigned long long v13;  // [sp-0xc8]
    unsigned long v15;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xa8]
    unsigned long v18;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x90]
    unsigned long long v21;  // [sp-0x88]
    unsigned long long v22;  // [sp-0x78]
    unsigned long v23;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x68]
    unsigned long v25;  // [sp-0x60]
    char v28;  // [bp-0x48]
    char v29;  // [bp-0x38]
    struct_0 *v31;  // rdi
    unsigned long long v32[3];  // rax
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rsi
    char v36;  // r15b
    struct_0 *v38;  // rdx
    int v39;  // ymm0
    unsigned long long v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v42;  // rdx
    char v43;  // al
    int v44;  // xmm0

    do
    {
        if (v3)
            goto LABEL_4ba4a6;
        v40 = v32[1];
        v41 = v32[2];
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5d3bf803ff248c0e(v40, v41, "-src/uu/head/src/head.rs\n <==\n: ==> standard input <==\n", 1))
        {
LABEL_4ba4a6:
            if (v22 <= 1)
            {
                if (!v2)
                    goto LABEL_4ba67b;
            }
            else
            {
                if (v1)
                    goto LABEL_4ba67b;
            }
            if ((v36 & 1))
            {
                v5 = &g_52d730;
                v6 = 1;
                v7 = 8;
                *((int128_t *)&v8) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v5, v35, v38);
            }
            v5 = &g_52d790;
            v6 = 1;
            v7 = 8;
            *((int128_t *)&v8) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v5, v35, v38);
            goto LABEL_4ba67b;
        }
        v16 = v40;
        v17 = v41;
        std::fs::File::open::h0e74947ee78b2653(&v11, v40, v41);
        if (*((int *)&v11))
        {
            v15 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0425f7aa9e935cb2(v13, v16, v17);
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            v23 = uucore::util_name::h412db5e565a079f3();
            v24 = v42;
            v18 = &v23;
            v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d828bc408c44df2;
            v20 = &v15;
            v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6e90de6e8d721cf1;
            v5 = &g_52d760;
            v6 = 3;
            v9 = 0;
            v7 = &v18;
            v8 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v34, v42);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hb708e96ebe10b637(v15);
            v32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha38697990b3d5392(&v25);
            if (!v32)
                break;
            continue;
        }
        v4 = *((int *)&v12);
        if (v22 > 1)
        {
            if (!(!v1))
                goto LABEL_4ba8f9;
        }
        else
        {
            if (!v2)
                goto LABEL_4ba8f9;
        }
        if ((v36 & 1))
        {
            v5 = &g_52d730;
            v6 = 1;
            v7 = 8;
            v39 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v8) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v5, v34, v42);
        }
        v18 = &v16;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d828bc408c44df2;
        v5 = &g_52d740;
        v6 = 2;
        v9 = 0;
        v7 = &v18;
        v8 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v5, v34, v42);
LABEL_4ba8f9:
        v10 = uu_head::head_file::hea912d5e43873ce7(&v4, v31);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::he4c0b780e3780d45(v4);
        if (v10)
        {
            v43 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5d3bf803ff248c0e(v40, v41, "-src/uu/head/src/head.rs\n <==\n: ==> standard input <==\n", 1);
            if (v43)
                v40 = "standard inputerror reading : Input/output error";
            if (v43)
                v41 = 14;
            v16 = v40;
            v17 = v41;
            v18 = &v16;
            v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d828bc408c44df2;
            v5 = &g_52d7a0;
            v6 = 2;
            v9 = 0;
            v7 = &v18;
            v8 = 1;
            ::0x4b83e0::core::option::Option$LT$T$GT$::map_or_else::h0462fb60f0c9335f(&v28, &v5);
            v8 = 1;
            v44 = *((int128_t *)&v28);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            v5 = v44;
            v7 = *((long long *)&v29);
            *((double *)&v11) = alloc::boxed::Box$LT$T$GT$::new::h2ccef47457bc7094(&v5);
            v13 = &g_52d7f8;
            ::0x4b86f0::_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v11);
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            v23 = uucore::util_name::h412db5e565a079f3();
            v24 = v42;
            v18 = &v23;
            v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d828bc408c44df2;
            v20 = &v11;
            v21 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h53edf160fcd21391;
            v5 = &g_52d760;
            v6 = 3;
            v9 = 0;
            v7 = &v18;
            v8 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v34, v42);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb950d659d7dadcb2(v11, v13);
        }
        ::0x4b8100::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h02da02880d394db9(&v10);
        v32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha38697990b3d5392(&v25);
        v36 = v10 | -0x100 | 1;
    } while (v32);
    return;
LABEL_4ba67b:
    v18 = std::io::stdio::stdin::h7215cc131abb55d8();
    v5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v18);
    v6 = (char)v42 & 1;
    goto *((int *)(4316188 + (long long)(stack_base)[80] * 4)) + 4316188;
}
