int uu_ls::display_additional_leading_info::hef4dbc99596ce316()
{
    char v0;  // [bp-0x128]
    char v1;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x118]
    unsigned long long v3;  // [sp-0x110]
    unsigned long v4;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x100]
    unsigned long long v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xf0]
    void* v8;  // [sp-0xe8]
    unsigned long long v9;  // [sp-0xe0]
    char v10;  // [sp-0xd8]
    unsigned long v11;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xc8]
    struct struct_1 **v13;  // [sp-0xc0]
    unsigned long long v14;  // [sp-0xb8]
    unsigned long long v15;  // [sp-0xb0]
    unsigned long long v16;  // [sp-0xa8]
    void* v17;  // [sp-0xa0]
    unsigned long long v18;  // [sp-0x98]
    void* v19;  // [sp-0x90]
    char v20;  // [bp-0x88]
    char v21;  // [bp-0x80]
    struct struct_0 **v22;  // [sp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v23;  // [sp-0x68]
    unsigned long long v24;  // [sp-0x60]
    void* v25;  // [sp-0x58]
    int v26;  // [sp-0x50], Other Possible Types: char *
    unsigned long long v27;  // [sp-0x48]
    struct_4 *v29;  // r8
    struct_2 *v30;  // rsi
    unsigned long long v31;  // rax
    unsigned long long *v32;  // rbp
    unsigned long long v33;  // r9
    unsigned long long v34;  // rcx
    char *v36;  // rax
    unsigned long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long *v39;  // r14
    char *v40;  // rax
    unsigned long long v41;  // rcx
    void* v42;  // rsi
    unsigned long long v43;  // rdi
    struct_3 *v44;  // rdi

    v17 = 0;
    v18 = 1;
    v19 = 0;
    if (v29->field_e9)
    {
        v31 = v30->field_48;
        if (v31 == 3)
        {
            v32 = &v30->field_48;
            _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(v32, v30, v33, v34, v29, v33);
            v31 = *(v32);
        }
        if (v31 != 2)
        {
            v22 = v30->field_70;
            v11 = &v22;
            v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v5 = 1;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v4);
        }
        else
        {
            v36 = __rust_alloc(1, 1);
            if (!v36)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *(v36) = 63;
            v1 = 1;
            v2 = v36;
            v3 = 1;
        }
        v26 = v36;
        v27 = 1;
        v22 = &v26;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h237db28e9458866a;
        v24 = v37;
        v25 = 0;
        v4 = 2;
        v6 = 1;
        v7 = 1;
        v8 = 0;
        v9 = 32;
        v10 = 1;
        v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v12 = 1;
        v15 = &v4;
        v16 = 1;
        v13 = &v22;
        v14 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v11);
        v11 = &v20;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if ((char)core::fmt::write::h1b95545231c46caf(&v17, &g_5ac0e8, &v4))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        if (*((long long *)&v20))
            __rust_dealloc(*((long long *)&v21));
        if (v1)
            __rust_dealloc(v26);
    }
    if (!v29->field_ea)
    {
        v44->field_10 = v19;
        v44->field_0 = *((int128_t *)&v17);
        return;
    }
    v38 = v30->field_48;
    if (v38 == 3)
    {
        v39 = &v30->field_48;
        _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(v39, v30, v33, v34, v29, v33);
        v38 = *(v39);
    }
    if (v38 == 2)
    {
        v40 = __rust_alloc(1, 1);
        if (!v40)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *(v40) = 63;
        v1 = 1;
        v2 = v40;
        v3 = 1;
    }
    else
    {
        v41 = v29->field_f1;
        if ((0xb000 & v30->field_80 | 0x4000) == 0x6000)
        {
            v42 = 0;
            if (!(!(v41 & 255 & 255)))
                goto LABEL_4d21f3;
        }
        else
        {
            v42 = v30->field_a8 * 0x200;
            if (!(!(v41 & 255 & 255)))
                goto LABEL_4d21f3;
        }
        v43 = v29->field_d8;
        if (!v43)
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
        v42 = (!(v42 | v43) >> 32 ? (0 CONCAT (unsigned int)v42) /m (unsigned int)v43 & 4294967295 & 4294967295 : (0 CONCAT v42) /m v43);
LABEL_4d21f3:
        uucore::features::format::human::human_readable::h98ed56fc1b2b7cd1(&v1, v42, v41 & 4294967295, v41, v29, v33, *((long long *)&v0), v1);
    }
    if (v29->field_f8 != 4)
    {
        *((int128_t *)&v26) = *((int128_t *)&v2);
        v22 = &v26;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h237db28e9458866a;
        v24 = v34;
        v25 = 0;
        v4 = 2;
        v6 = 1;
        v7 = 1;
        v8 = 0;
        v9 = 32;
        v10 = 1;
        v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v12 = 1;
        v15 = &v4;
        v16 = 1;
        v13 = &v22;
        v14 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v11);
        v11 = &v20;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if ((char)core::fmt::write::h1b95545231c46caf(&v17, &g_5ac0e8, &v4))
        {
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        else if (*((long long *)&v20))
        {
            __rust_dealloc(*((long long *)&v21));
        }
    }
    else
    {
        v11 = &v1;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_5ac7a8;
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        if ((char)core::fmt::write::h1b95545231c46caf(&v17, &g_5ac0e8, &v4))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    if (v1)
        __rust_dealloc(v2);
}
