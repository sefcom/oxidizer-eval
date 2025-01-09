long long uu_head::arg_iterate::h2f4030183cfe2e94(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1a8]
    char *v1;  // [bp-0x198], Other Possible Types: unsigned long
    unsigned long v2;  // [sp-0x190], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [bp-0x180], Other Possible Types: unsigned int
    void* v5;  // [sp-0x178]
    char *v6;  // [sp-0x138]
    unsigned long long v7;  // [sp-0x128]
    char v8;  // [bp-0x120]
    char v9;  // [bp-0x110]
    char *v10;  // [bp-0x108]
    unsigned long long v11;  // [sp-0x100]
    char *v12;  // [sp-0xf8]
    void* v13;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v14;  // [sp-0xe0]
    unsigned long v15;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v16;  // [sp-0xd0]
    char *v17;  // [sp-0xa8]
    unsigned long long v18;  // [sp-0x98]
    char v19;  // [bp-0x88]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    struct_1 *v28;  // rax
    unsigned long long v29;  // r15
    unsigned long long v30;  // r14
    unsigned long long v31;  // rax
    struct_2 *v32;  // rax
    struct_1 *v33;  // rax
    unsigned long long v34;  // rax

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&v1, &v0);
    if (v1 == 0x8000000000000000)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_52a3d0); /* do not return */
    v7 = v3;
    *((int128_t *)&v6) = *((int128_t *)&v1);
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96bd9273904dbf8c(&v8, &v0);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        *((int128_t *)&v17) = *((int128_t *)&v8);
        v18 = *((long long *)&v9);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, (&v17)[1], *((long long *)&v9));
        if (v1)
        {
            ::0x46b380::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40b4874b68ac2e0f(&v13);
            v3 = v15;
            *((int128_t *)&v1) = *((int128_t *)&v13);
            v4 = 1;
            v31 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&v1);
            goto LABEL_46c23f;
        }
        else
        {
            v29 = v2;
            v30 = v3;
            uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(&v19, v29, v30);
            if (!*((long long *)&v19))
            {
                v32 = ::0x46b440::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
                if (v32)
                {
                    v3 = v18;
                    v1 = v17;
                    v32->field_10 = v7;
                    *((char **)&v32->field_0) = v6;
                    *((int128_t *)&(&v32->field_10)[1]) = *((int128_t *)&v1);
                    *((unsigned long long *)((char *)&v32->field_18 + 8)) = v3;
                    alloc::slice::hack::into_vec::hf4b4861c96976c7f(&v1, v32, 2);
                    ::0x46cb40::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&v13, &v1);
                    core::iter::traits::iterator::Iterator::chain::h3acfa52a063c782b(&v1, &v13, a1, a2);
                    *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h74b85d809da0db73(&v1);
                    a0[2] = &g_52a3e8;
                    a0[0] = 0;
                    return &g_52a3e8;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 48); /* do not return */
            }
            if (*((long long *)&v20))
            {
                *((int128_t *)&v12) = *((int128_t *)&v22);
                *((int128_t *)&v10) = *((int128_t *)&v20);
                v33 = ::0x46b440::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
                if (!v33)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
                v33->field_10 = v7;
                *((char **)&v33->field_0) = v6;
                alloc::slice::hack::into_vec::hf4b4861c96976c7f(&v13, v33, 1);
                ::0x46cb40::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&v1, &v13);
                core::iter::traits::iterator::Iterator::chain::ha0a0ba46a8cbd376(&v13, &v1, &v10);
                core::iter::traits::iterator::Iterator::chain::he5b09284c7fcbb4e(&v1, &v13, a1, a2);
                *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h8b06367608b97cc0(&v1);
                a0[2] = &g_52a420;
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
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v1 = &g_52a3a0;
                    v2 = 1;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a();
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v23);
                    v3 = *((long long *)&v24);
                    v31 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&v1);
                }
                else
                {
                    v13 = 0;
                    v14 = v29;
                    v15 = v30;
                    v16 = 1;
                    v10 = &v13;
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v1 = &g_52a3b0;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h1dd76b100b962b8a();
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v25);
                    v3 = *((long long *)&v26);
                    v31 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(&v1);
                }
LABEL_46c23f:
                a0[1] = v31;
                a0[2] = &g_52a490;
                a0[0] = 1;
            }
            v34 = ::0x46a740::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a();
            v34 = ::0x46a740::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a();
            return v34;
        }
    }
    else
    {
        v28 = ::0x46b440::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v28->field_10 = v7;
        *((char **)&v28->field_0) = v6;
        alloc::slice::hack::into_vec::hf4b4861c96976c7f(&v13, v28, 1);
        ::0x46cb40::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd786cb26383b0852(&v1, &v13);
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hc4846b01d8406131(&v1);
        a0[2] = &g_52a500;
        a0[0] = 0;
        if (*((long long *)&v8) != 0x8000000000000000)
        {
            v34 = ::0x46a740::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h04b221221386ed4a();
            return v34;
        }
        return &g_52a500;
    }
}
