long long uu_unexpand::Options::new::h3259fbf032072fe9(struct_1 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    char v1;  // [bp-0x1b0]
    unsigned long long v2;  // [sp-0x1a8]
    unsigned long long v3[4];  // [bp-0x198], Other Possible Types: int
    char v4;  // [bp-0x190]
    unsigned long v5;  // [sp-0x188], Other Possible Types: unsigned long long
    int v6;  // [bp-0x180], Other Possible Types: char
    unsigned long long v7;  // [sp-0x170]
    int v8;  // [bp-0x148], Other Possible Types: char
    unsigned long long v9;  // [sp-0x138]
    int v10;  // [sp-0x128]
    unsigned long long v11;  // [sp-0x118]
    int v12;  // [sp-0x108]
    unsigned long long v13;  // [sp-0xf8]
    char v14;  // [bp-0xe8]
    char v15;  // [bp-0xd8]
    char v16;  // [bp-0xc8]
    char v17;  // [bp-0xb8]
    int v18;  // [sp-0xa8]
    int v19;  // [sp-0x98]
    int v20;  // [sp-0x88]
    int v21;  // [sp-0x78]
    int v22;  // [sp-0x68]
    int v23;  // [sp-0x58]
    int v24;  // [sp-0x48]
    int v25;  // [sp-0x38]
    unsigned long long v27;  // rdx
    unsigned long long *v28;  // rax
    unsigned long long v29;  // 4098
    char v31;  // bpl
    struct_0 *v33;  // rax
    struct_0 *v34;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49314a34b692f5d9(v3, a1, "tabsAuto", 4);
    clap_builder::parser::error::MatchesError::unwrap::h1fe97ebab04d410e(&v14, "tabsAuto", 4, v3);
    if (!*((long long *)&v14))
    {
        v28 = ::0x4b2120::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v28) = 8;
        alloc::slice::hack::into_vec::h89858f8c80503c39(&v8, v28, 1);
    }
    else
    {
        *((int128_t *)&v21) = *((int128_t *)&v17);
        *((int128_t *)&v20) = *((int128_t *)&v16);
        *((int128_t *)&v19) = *((int128_t *)&v15);
        *((int128_t *)&v18) = *((int128_t *)&v14);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he02554ad1d40c385(&v0, &v18, v27);
        alloc::str::join_generic_copy::haa8830c6b9c7fdbd(v3, *((long long *)&v1), v2, ",", 1);
        v13 = v5;
        v12 = v3;
        uu_unexpand::tabstops_parse::h704ae6aa58a09f4a(v3, (long long)(&v12)[8], v5);
        v29 = (long long)v3;
        *((int128_t *)&v10) = *((int128_t *)&v4);
        v11 = *((long long *)&v6);
        if (v29)
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v11;
            *((void*)&(&a0->field_0)[1]) = v10;
            a0->field_0 = 0x8000000000000000;
            ::0x4b1010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdbdc8ae66812c0bf(&v12);
            ::0x4b1110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h738536096e6c019d(&v0);
            return a0;
        }
        v9 = v11;
        v8 = v10;
        ::0x4b1010::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdbdc8ae66812c0bf(&v12);
        ::0x4b1110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h738536096e6c019d(&v0);
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "all", 3) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a1, "tabsAuto", 4))
        v31 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "first-only", 10) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "first-only", 10) ^ 1;
    else
        v31 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49314a34b692f5d9(v3, a1, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h1fe97ebab04d410e(&v14, "filei128", 4, v3);
    if (*((long long *)&v14))
    {
        *((int128_t *)&v25) = *((int128_t *)&v17);
        *((int128_t *)&v24) = *((int128_t *)&v16);
        *((int128_t *)&v23) = *((int128_t *)&v15);
        *((int128_t *)&v22) = *((int128_t *)&v14);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6e59b5fda941d7f6(&v0, &v22, v27);
    }
    else
    {
        v33 = ::0x4b2120::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 24);
        if (!v33)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v34 = v33;
        ::0x4b1f30::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d6d0dd04207d7d2(v3, "-", 1);
        v2 = v5;
        v0 = v3;
        v34->field_10 = v2;
        *((void*)&v34->field_0) = v0;
        alloc::slice::hack::into_vec::h634a5e2ab16f9429(&v0, v34, 1);
    }
    v5 = v2;
    v3 = v0;
    v7 = v9;
    v6 = v8;
    *((void*)&a0->field_0) = v3;
    a0->field_18 = (long long)(&v6)[8];
    a0->field_20 = v7;
    *((unsigned long long *)&a0->field_8) = v5;
    *((long long *)((char *)&a0->field_8 + 8)) = (long long)v6;
    *((char *)&a0->field_28) = v31;
    *((char *)&a0->field_28 + 1) = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "no-utf8", 7) ^ 1;
    return a0;
}
