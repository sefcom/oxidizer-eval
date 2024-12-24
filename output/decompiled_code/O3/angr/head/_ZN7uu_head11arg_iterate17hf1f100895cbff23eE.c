long long uu_head::arg_iterate::hf1f100895cbff23e(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1a8]
    int v1;  // [bp-0x198], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x180], Other Possible Types: unsigned int
    void* v5;  // [sp-0x178]
    int v6;  // [sp-0x138]
    unsigned long long v7;  // [sp-0x128]
    char v8;  // [bp-0x120]
    char v9;  // [bp-0x110]
    int v10;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x100]
    int v12;  // [sp-0xf8]
    void* v13;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v14;  // [sp-0xe0]
    unsigned long v15;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v16;  // [sp-0xd0]
    int v17;  // [sp-0xa8]
    unsigned long long v18;  // [sp-0x98]
    char v19;  // [bp-0x88]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    struct_0 *v28;  // rax
    unsigned long long v29;  // r15
    unsigned long long v30;  // r14
    unsigned long long v31;  // rax
    struct_1 *v32;  // rax
    struct_0 *v33;  // rax
    unsigned long long v34;  // rax

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6fac7317843850a5(&v1, &v0);
    if (v1 == 0x8000000000000000)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v7 = v3;
    *((int128_t *)&v6) = *((int128_t *)&v1);
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6fac7317843850a5(&v8, &v0);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        *((int128_t *)&v17) = *((int128_t *)&v8);
        v18 = *((long long *)&v9);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, (long long)(&v17)[8], *((long long *)&v9));
        if (v1)
        {
            ::0x46b560::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h079b6c6ad4ecf8aa(&v13);
            v3 = v15;
            *((int128_t *)&v1) = *((int128_t *)&v13);
            v4 = 1;
            v31 = alloc::boxed::Box$LT$T$GT$::new::hc6eaee8284c61d20(&v1);
            goto LABEL_46c41f;
        }
        else
        {
            v29 = v2;
            v30 = v3;
            uu_head::parse::parse_obsolete::h2bb4bedd7f044b94(&v19, v29, v30);
            if (!*((long long *)&v19))
            {
                v32 = ::0x46b620::alloc::alloc::Global::alloc_impl::hf61749d460433fff(48);
                if (v32)
                {
                    v3 = v18;
                    v1 = v17;
                    v32->field_10 = v7;
                    *((void*)&v32->field_0) = v6;
                    *((int128_t *)&(&v32->field_10)[1]) = (int128_t)v1;
                    *((unsigned long long *)((char *)&v32->field_18 + 8)) = v3;
                    alloc::slice::hack::into_vec::hbb757ee697749968(&v1, v32, 2);
                    ::0x46cd20::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7960fee80d6e8b2a(&v13, &v1);
                    core::iter::traits::iterator::Iterator::chain::h2b7a6059e6e7d168(&v1, &v13, a1, a2);
                    *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h2cc740175903b920(&v1);
                    a0[2] = &g_52abf8;
                    a0[0] = 0;
                    return &g_52abf8;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            if (*((long long *)&v20))
            {
                *((int128_t *)&v12) = *((int128_t *)&v22);
                *((int128_t *)&v10) = *((int128_t *)&v20);
                v33 = ::0x46b620::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
                if (!v33)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v33->field_10 = v7;
                *((void*)&v33->field_0) = v6;
                alloc::slice::hack::into_vec::hbb757ee697749968(&v13, v33, 1);
                ::0x46cd20::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7960fee80d6e8b2a(&v1, &v13);
                core::iter::traits::iterator::Iterator::chain::he36ad139964a6a6e(&v13, &v1, &v10);
                core::iter::traits::iterator::Iterator::chain::h628b7ef84f11f12a(&v1, &v13, a1, a2);
                *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hbe56b28b26649f84(&v1);
                a0[2] = &g_52ac30;
                a0[0] = 0;
            }
            else
            {
                if (!v21)
                {
                    v13 = 0;
                    v14 = v29;
                    v15 = v30;
                    v16 = 1;
                    v10 = &v13;
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v1 = &g_52ac68;
                    v2 = 1;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h95b4b87e55325123(&v23, &v1);
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v23);
                    v3 = *((long long *)&v24);
                    v31 = alloc::boxed::Box$LT$T$GT$::new::hc6eaee8284c61d20(&v1);
                }
                else
                {
                    v13 = 0;
                    v14 = v29;
                    v15 = v30;
                    v16 = 1;
                    v10 = &v13;
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v1 = &g_52ad20;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h95b4b87e55325123(&v25, &v1);
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v25);
                    v3 = *((long long *)&v26);
                    v31 = alloc::boxed::Box$LT$T$GT$::new::hc6eaee8284c61d20(&v1);
                }
LABEL_46c41f:
                a0[1] = v31;
                a0[2] = &g_52acb0;
                a0[0] = 1;
            }
            v34 = ::0x46a920::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h72c1fa8df5b3d3c4(&v17);
            v34 = ::0x46a920::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h72c1fa8df5b3d3c4(&v6);
            return v34;
        }
    }
    else
    {
        v28 = ::0x46b620::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v28->field_10 = v7;
        *((void*)&v28->field_0) = v6;
        alloc::slice::hack::into_vec::hbb757ee697749968(&v13, v28, 1);
        ::0x46cd20::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7960fee80d6e8b2a(&v1, &v13);
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h0849e684e156484f(&v1);
        a0[2] = &g_52ad40;
        a0[0] = 0;
        if (*((long long *)&v8) != 0x8000000000000000)
        {
            v34 = ::0x46a920::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h72c1fa8df5b3d3c4(&v8);
            return v34;
        }
        return &g_52ad40;
    }
}
