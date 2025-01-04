long long uu_head::HeadOptions::get_from::h1adb6e5857002fb6(struct_1 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x128]
    int v2;  // [sp-0x120], Other Possible Types: void*
    unsigned long long v3;  // [sp-0x118]
    void* v4;  // [sp-0x110], Other Possible Types: unsigned long long
    char v5;  // [bp-0x108], Other Possible Types: unsigned int
    char v6;  // [sp-0x107]
    char v7;  // [sp-0x106]
    char v8;  // [sp-0x105]
    char v9;  // [bp-0x100]
    char v10;  // [bp-0xf8]
    char v11;  // [bp-0xf0]
    char v12;  // [bp-0xb8]
    char v13;  // [bp-0xa8]
    char v14;  // [bp-0x98]
    char v15;  // [bp-0x88]
    int v16;  // [sp-0x78]
    unsigned long long v17;  // [sp-0x68]
    int v18;  // [sp-0x58]
    int v19;  // [sp-0x48]
    int v20;  // [sp-0x38]
    int v21;  // [sp-0x28]
    unsigned long long v24;  // rdx
    unsigned long long v27;  // rdx
    struct_0 *v28;  // rax
    struct_0 *v29;  // r14
    int v30;  // xmm0
    int v31;  // xmm1

    v5 = 0xa000000;
    v0 = 0;
    v1 = 10;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "QUIET", 5);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "VERBOSE", 7);
    *((int *)&v8) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "ZEROu128", 4) ? 0 : 10);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-PRESUME-INPUT-PIPE", 19);
    uu_head::Mode::from::h53e4fee035ad00ee(&v9, a1);
    v24 = *((long long *)&v9);
    if (v24 != 0x8000000000000000)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v24;
        a0->field_10 = v0;
        *((unsigned long long *)&a0->padding_18[0]) = v1;
        a0->field_0 = 4;
        core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::he2adba56d7eff629(&v0);
        return a0;
    }
    v0 = *((long long *)&v10);
    v1 = *((long long *)&v11);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha4c1e75b78057a64(&v9, a1, "FILE", 4);
    clap_builder::parser::error::MatchesError::unwrap::h8f4dae56b5df2536(&v12, "FILE", 4, &v9);
    if (*((long long *)&v12))
    {
        *((int128_t *)&v21) = *((int128_t *)&v15);
        *((int128_t *)&v20) = *((int128_t *)&v14);
        *((int128_t *)&v19) = *((int128_t *)&v13);
        *((int128_t *)&v18) = *((int128_t *)&v12);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37bc116ad277ef43(&v9, &v18, v27);
    }
    else
    {
        v28 = ::0x4b8370::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v28)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v29 = v28;
        ::0x4b8270::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(&v9);
        v17 = *((long long *)&v11);
        *((int128_t *)&v16) = *((int128_t *)&v9);
        v29->field_10 = v17;
        *((void*)&v29->field_0) = v16;
        alloc::slice::hack::into_vec::h74676bea9ecbbd9e(&v9, v29, 1);
    }
    ::0x4b7c60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h206ae2e6ae342018(&v2);
    v4 = *((long long *)&v11);
    *((int128_t *)&v2) = *((int128_t *)&v9);
    v30 = *((int128_t *)&v0);
    v31 = (int128_t)v2;
    a0->field_20 = *((int128_t *)&v4);
    *((void*)&a0->field_10) = v31;
    *((void*)&a0->field_0) = v30;
    return a0;
}
