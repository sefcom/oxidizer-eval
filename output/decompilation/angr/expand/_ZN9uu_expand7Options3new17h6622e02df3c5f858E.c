long long uu_expand::Options::new::h6622e02df3c5f858(struct_1 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x1c8], Other Possible Types: char
    unsigned long v1;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x1a8]
    int v3;  // [bp-0x199]
    unsigned long long v4;  // [sp-0x198]
    int v5;  // [bp-0x188], Other Possible Types: char
    unsigned long long v6;  // [sp-0x178]
    int v7;  // [bp-0x168], Other Possible Types: char, unsigned long, unsigned long long
    char v8;  // [bp-0x160], Other Possible Types: unsigned long long
    char v9;  // [bp-0x15f]
    void* v10;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [sp-0x150]
    char v12;  // [bp-0x140], Other Possible Types: unsigned long long
    int v13;  // [sp-0x138]
    unsigned long long v14;  // [sp-0x128]
    int v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x108]
    char v17;  // [bp-0x100]
    char v18;  // [bp-0xf8]
    char v19;  // [bp-0xf0]
    char v20;  // [bp-0xe8]
    char v21;  // [bp-0xd8]
    char v22;  // [bp-0xc8]
    char v23;  // [bp-0xb8]
    int v24;  // [sp-0xa8]
    int v25;  // [sp-0x98]
    int v26;  // [sp-0x88]
    int v27;  // [sp-0x78]
    int v28;  // [sp-0x68]
    int v29;  // [sp-0x58]
    int v30;  // [sp-0x48]
    int v31;  // [sp-0x38]
    unsigned long long *v33;  // rax
    unsigned long long v34;  // 4098
    char v35;  // r12b
    unsigned long long v38;  // rdx
    struct_0 *v39;  // rax
    struct_0 *v40;  // r14
    int v41;  // xmm0
    int v42;  // xmm0

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(&v7, a1, "tabsAuto", 4);
    clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&v20, "tabsAuto", 4, &v7);
    if (!*((long long *)&v20))
    {
        v33 = ::0x4b0f60::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        if (!v33)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 8); /* do not return */
        *(v33) = 8;
        alloc::slice::hack::into_vec::hc80358b1381473c5(&v5, v33, 1);
        v35 = 0;
    }
    else
    {
        *((int128_t *)&v27) = *((int128_t *)&v23);
        *((int128_t *)&v26) = *((int128_t *)&v22);
        *((int128_t *)&v25) = *((int128_t *)&v21);
        *((int128_t *)&v24) = *((int128_t *)&v20);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha117f13ef90b4767(&v17, &v24);
        alloc::str::join_generic_copy::h7514b7f1927be4b5(&v0, *((long long *)&v18), *((long long *)&v19), ",", 1);
        v16 = v1;
        v15 = v0;
        uu_expand::tabstops_parse::h8e62973a242abc7f(&v7, (long long)(&v15)[8], v1);
        v34 = v7;
        v35 = v8;
        *((int128_t *)&v2) = *((int128_t *)&v9);
        v3 = v11;
        if (v34)
        {
            *((int128_t *)((char *)&a0->field_10 + 8)) = *((int128_t *)&v12);
            *((int128_t *)((char *)&a0->field_9 + 8)) = (int128_t)v3;
            *((int128_t *)&(&a0->padding_8)[1]) = (int128_t)v2;
            a0->padding_8[0] = v35;
            a0->field_0 = 0x8000000000000000;
            ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v15);
            ::0x4afd50::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&v17);
            return a0;
        }
        *((int128_t *)&v5) = (int128_t)(&v2)[7];
        v6 = (long long)(&v3)[8];
        ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v15);
        ::0x4afd50::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&v17);
    }
    v1 = v6;
    v0 = v5;
    v7 = (long long)(&v0)[8];
    v8 = v7 + v1 * 8;
    v10 = 0;
    if (!core::iter::traits::iterator::Iterator::reduce::hbc40c7c3e90a5c5b(&v7))
        core::option::unwrap_failed::h0e11329e76906eaa(&g_51cd80); /* do not return */
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v5, " --tabs=", 1, v38);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(&v7, a1, "FILES", 5);
    clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&v20, "FILES", 5, &v7);
    if (*((long long *)&v20))
    {
        *((int128_t *)&v31) = *((int128_t *)&v23);
        *((int128_t *)&v30) = *((int128_t *)&v22);
        *((int128_t *)&v29) = *((int128_t *)&v21);
        *((int128_t *)&v28) = *((int128_t *)&v20);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37edc664cc2afb29(&v2, &v28);
    }
    else
    {
        v39 = ::0x4b0f60::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 24);
        if (!v39)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v40 = v39;
        ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v7, "-", 1);
        v4 = v10;
        v41 = *((int128_t *)&v7);
        v2 = v41;
        v40->field_10 = v4;
        *((void*)&v40->field_0) = v41;
        alloc::slice::hack::into_vec::h5cf9c57446dfe35f(&v2, v40, 1);
    }
    v10 = v4;
    v42 = (int128_t)v2;
    v7 = v42;
    v12 = v1;
    v11 = v0;
    v14 = v6;
    v13 = v5;
    a0->field_28 = v14;
    *((void*)&a0->field_18) = v13;
    *((void*)&a0->field_0) = v42;
    *((long long *)&a0->field_10) = (long long)(&v11)[8];
    *((unsigned long long *)((char *)&a0->field_10 + 8)) = v12;
    a0->field_9 = *((int128_t *)&v10);
    a0->padding_30[0] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "initial", 7);
    a0->padding_30[1] = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "no-utf8", 7) ^ 1;
    a0->padding_30[2] = v35;
    return a0;
}
