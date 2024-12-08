long long uu_touch::touch_file::h4b1b86463075d5ee(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3, unsigned long long a4, unsigned int a5)
{
    char v0;  // [bp-0x1c8]
    char v1;  // [bp-0x1b8]
    char v2;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x1a0], Other Possible Types: unsigned long long
    int v4;  // [sp-0x198], Other Possible Types: char, unsigned long long
    unsigned long v5;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x180], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x178]
    unsigned long long v9;  // [sp-0x160]
    unsigned long v10;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x148]
    void* v13;  // [sp-0x140], Other Possible Types: unsigned long, unsigned long long
    int v14;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x130]
    char v16;  // [bp-0x128], Other Possible Types: unsigned long
    char v17;  // [bp-0x120]
    char v18;  // [bp-0x118]
    unsigned long long v19;  // [sp-0x108]
    char v20;  // [bp-0xf8]
    char v21;  // [bp-0xe8]
    unsigned long v22;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0xd8]
    unsigned long long v24;  // [bp+0x8]
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbp
    void* v27;  // rax
    unsigned long long v28;  // r13
    unsigned int v29;  // edx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rsi

    if (!a2)
    {
        v22 = a0;
        v23 = a1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h36f06a784c19db67(&v17, &v22);
    }
    else
    {
        ::0x5c0490::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdab2b52bf4bb0014(&v17, "-No such file or directory: \nsetting times of : No such file or directory", 1);
    }
    v25 = a3->field_31;
    if (!(char)v25)
        std::fs::metadata::hc730f79ea82ccfd9(&v22, a0, a1);
    else
        std::fs::symlink_metadata::h88e4286c34c8ba25(&v22, a0, a1);
    if ((int)v22 != 2)
    {
        v27 = uu_touch::update_times::h5d7dda066229025f(a0, a1, a2, v25 & 4294967295, a3->field_33, a4, *((int *)&v0), v24, *((int *)&v1));
        ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
        return v27;
    }
    v19 = a5;
    v26 = v23;
    if ((char)::0x5be540::std::io::error::Error::kind::hb2ff5fa058639b3d(v26))
    {
        _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb93c6ffdc0953f4c(v26, &v17);
        ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
        return v27;
    }
    v9 = v26;
    if (!a3->field_30)
    {
        if (!(char)v25)
        {
            std::fs::File::create::ha2229eb505e710f3(&v2, a0, a1);
            if (*((int *)&v2))
            {
                v28 = v3;
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v4, a0, a1);
                v13 = v5;
                v14 = v6 + v13;
                if (!(int)core::str::validations::next_code_point_reverse::h6da68b37c145c7ce(&v13) || v29 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcfc5c362f1c8c1b6(&v4);
                    goto LABEL_5c259f;
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcfc5c362f1c8c1b6(&v4);
                    if (v29 == 47)
                    {
                        v27 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h9e8b3dacb3287a70(std::io::error::Error::new::h2651aa53cb679e95(39, "No such file or directory: \nsetting times of : No such file or directory", 25), &v17);
                        ::0x5bea50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha5fa96607c5ab058(v28);
                    }
                    else
                    {
LABEL_5c259f:
                        v27 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha884ba9a9e8e1cc5(v28, a0, a1);
                        if (!a3->field_32)
                        {
                            v10 = v27;
                            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                            v11 = uucore::util_name::h412db5e565a079f3();
                            v12 = v32;
                            v13 = &v11;
                            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
                            v15 = &v10;
                            v16 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h28043a53676fd517;
                            v4 = &g_711098;
                            v5 = 3;
                            v8 = 0;
                            v6 = &v13;
                            v7 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v33, v32);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h7014c7fc156d4dd5(v10);
                            v27 = 0;
                        }
                    }
                }
                ::0x5bea50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha5fa96607c5ab058(v9);
                ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
                return v27;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hfa4c0738d6ac90f5(&v2);
                if (!((char)_$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbc32c2dc0a3e8ab0(a3->field_18)) || !(a3->field_0 == 0x8000000000000000))
                {
                    ::0x5bea50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha5fa96607c5ab058(v9);
                    uu_touch::update_times::h5d7dda066229025f(a0, a1, a2, v25 & 4294967295, a3->field_33, a4, *((int *)&v0), v24, *((int *)&v1));
                    ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
                    return v27;
                }
            }
        }
        else
        {
            v13 = 0;
            *((int128_t *)&v14) = *((int128_t *)&v18);
            v16 = 1;
            v11 = &v13;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v4 = &g_7110c8;
            v5 = 2;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            ::0x5c03f0::core::option::Option$LT$T$GT$::map_or_else::h6c890dc428d2f1b8(&v20, &v4);
            v7 = 1;
            *((int128_t *)&v4) = *((int128_t *)&v20);
            v6 = *((long long *)&v21);
            v27 = alloc::boxed::Box$LT$T$GT$::new::h69239a382e39ef01(&v4);
            if (a3->field_32)
            {
                ::0x5bea50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha5fa96607c5ab058(v9);
                ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
                return v27;
            }
            v2 = v27;
            v3 = &g_711120;
            ::0x5c0e40::_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::hc1cfb9e598268e23(v2);
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            v11 = uucore::util_name::h412db5e565a079f3();
            v12 = v30;
            v13 = &v11;
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h67ad0f203204cc95;
            v15 = &v2;
            v16 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha307e2bce824a6b9;
            v4 = &g_711098;
            v5 = 3;
            v8 = 0;
            v6 = &v13;
            v7 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v31, v30);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hfe0b10cc6910e3fd(v2, v3);
        }
    }
    ::0x5bea50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha5fa96607c5ab058(v9);
    ::0x5bea40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h450bc0dd6b0d5735(&v17);
    return v27;
}
