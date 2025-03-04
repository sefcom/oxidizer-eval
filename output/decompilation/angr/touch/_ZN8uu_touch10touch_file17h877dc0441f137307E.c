long long uu_touch::touch_file::h877dc0441f137307(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_1 *a3, unsigned long long a4, unsigned int a5, unsigned long long a6, unsigned int a7)
{
    char v0;  // [bp-0x1c8]
    char v1;  // [bp-0x1b8]
    char v2;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v4;  // [sp-0x198], Other Possible Types: char, unsigned long
    struct struct_0 **v5;  // [sp-0x190], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned int v7;  // [bp-0x180], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x178]
    unsigned long long v9;  // [sp-0x160]
    unsigned long v10;  // [sp-0x158]
    struct struct_0 **v11;  // [sp-0x150]
    unsigned long long v12;  // [sp-0x148]
    struct struct_0 **v13;  // [sp-0x140]
    int v14;  // [bp-0x138], Other Possible Types: unsigned long long
    char *v15;  // [sp-0x130]
    char v16;  // [bp-0x128], Other Possible Types: unsigned long
    char v17;  // [bp-0x120]
    char v18;  // [bp-0x118]
    unsigned long long v19;  // [sp-0x108]
    char v20;  // [bp-0xf8]
    char v21;  // [bp-0xe8]
    unsigned long v22;  // [sp-0xe0]
    unsigned long long v23;  // [sp-0xd8]
    unsigned long long v24;  // r13
    unsigned long long v25;  // rbp
    void* v26;  // rbx
    unsigned long long v27;  // r13
    unsigned int v28;  // edx
    unsigned long v29;  // rdx
    unsigned long v30;  // rdx

    if (!a2)
    {
        v22 = a0;
        v23 = a1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7b6c1f916f50a915(&v17, &v22);
    }
    else
    {
        ::0x5c0d00::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&v17, "-setting times of : No such file or directory: \n", 1);
    }
    v24 = a3->field_31;
    if (!(char)v24)
        std::fs::metadata::h73b841bac6708bdf(&v22, a0, a1);
    else
        std::fs::symlink_metadata::ha4686baccc39e49a(&v22, a0, a1);
    if ((int)v22 != 2)
    {
        v26 = uu_touch::update_times::h392cecc13adcf2b7(a0, a1, a2, v24 & 4294967295, a3->field_33, a4, *((int *)&v0), a6, *((int *)&v1));
        ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
        return v26;
    }
    v19 = a5;
    v25 = v23;
    if ((char)::0x5bedb0::std::io::error::Error::kind::hb2ff5fa058639b3d(v25))
    {
        _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h8e02b6420ed2dfd1(v25, &v17);
        ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
        return v26;
    }
    v9 = v25;
    if (!a3->field_30)
    {
        if (!(char)v24)
        {
            std::fs::File::create::h17c7edca8c2f4ade(&v2, a0, a1);
            if (*((int *)&v2))
            {
                v27 = v3;
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v4, a0, a1);
                v13 = v5;
                v14 = v6 + (char *)v13;
                if (!(int)core::str::validations::next_code_point_reverse::h49d445a14546f521(&v13) || v28 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&v4);
                    goto LABEL_5c2e4f;
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&v4);
                    if (v28 == 47)
                    {
                        v26 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h65951a50c2dce01b(std::io::error::Error::new::hffe4f6be3d139c83(39, "No such file or directory%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs20invalid date format invalid date ts format ", 25), &v17);
                        ::0x5bf2c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(v27);
                    }
                    else
                    {
LABEL_5c2e4f:
                        v26 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0cde622ef2849830(v27, a0, a1);
                        if (!a3->field_32)
                        {
                            v10 = v26;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            v11 = uucore::util_name::h60d842bf27b05e82();
                            v12 = v30;
                            v13 = &v11;
                            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
                            v15 = &v10;
                            v16 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h576a242cd5c5fa7b;
                            v4 = &g_710d68;
                            v5 = 3;
                            v8 = 0;
                            v6 = &v13;
                            v7 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h5ee190ea3c79983b(v10);
                            v26 = 0;
                        }
                    }
                }
                ::0x5bf2c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(v9);
                ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
                return v26;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h4e160d05a3d73f48(&v2);
                if (!((char)_$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::h078dd8660d87ce4c(a3->field_18)) || !(a3->field_0 == 0x8000000000000000))
                {
                    ::0x5bf2c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(v9);
                    uu_touch::update_times::h392cecc13adcf2b7(a0, a1, a2, v24 & 4294967295, a3->field_33, a4, *((int *)&v0), a6, *((int *)&v1));
                    ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
                    return v26;
                }
            }
        }
        else
        {
            v13 = 0;
            *((int128_t *)&v14) = *((int128_t *)&v18);
            v16 = 1;
            v11 = &v13;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v4 = &g_710d48;
            v5 = 2;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            ::0x5c0c60::core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&v20, &v4);
            v7 = 1;
            *((int128_t *)&v4) = *((int128_t *)&v20);
            v6 = *((long long *)&v21);
            v26 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&v4);
            if (a3->field_32)
            {
                ::0x5bf2c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(v9);
                ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
                return v26;
            }
            v2 = v26;
            v3 = &g_710e78;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)::0x5c16b0::_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v2));
            v11 = uucore::util_name::h60d842bf27b05e82();
            v12 = v29;
            v13 = &v11;
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            v15 = &v2;
            v16 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbcad17bef5b674a6;
            v4 = &g_710d68;
            v5 = 3;
            v8 = 0;
            v6 = &v13;
            v7 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2858b8dcb4cc330f(v2, v3);
        }
    }
    ::0x5bf2c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(v9);
    ::0x5bf2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&v17);
    return v26;
}
