long long uu_fmt::extract_files::hac217ce8fe7d1aa0(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x17a]
    char v1;  // [bp-0x179]
    char v2;  // [bp-0x178]
    char v3;  // [bp-0x168]
    char v4;  // [bp-0x160]
    char v5;  // [bp-0x150]
    int v6;  // [sp-0x118]
    unsigned long long v7;  // [sp-0x108]
    unsigned long long v8;  // [sp-0x100]
    char v9;  // [bp-0xf8]
    void* v10;  // [sp-0xb8]
    void* v11;  // [sp-0x78]
    void* v12;  // [sp-0x38]
    unsigned long long v13;  // [sp-0x30]
    unsigned long long v14;  // [sp-0x28]
    unsigned long v16;  // rdx
    struct_0 *v17;  // rax
    struct_0 *v18;  // r14

    v0 = v16 == 1 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of::haf8d761826f8168d(a1, "files");
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7b3516a1872ed082(&v4, a1, "files", 5);
    clap_builder::parser::error::MatchesError::unwrap::h4ceabf8aeeeedc74(&v9, "files", 5, &v4);
    v8 = 1;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = &v1;
    v14 = &v0;
    core::iter::adapters::try_process::h30b0d9ac73f79452(&v2, &v8);
    if (!(char)core::result::Result$LT$T$C$E$GT$::is_ok_and::hd35e10a4d96cb7f6(-0x100 | *((long long *)&v2) == 0x8000000000000000, &(&v2)[8 * (-0x100 | *((long long *)&v2) == 0x8000000000000000)]))
    {
        a0->field_10 = *((long long *)&v3);
        a0->field_0 = *((int128_t *)&v2);
        return a0;
    }
    v17 = ::0x4b4ee0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 24);
    if (v17)
    {
        v18 = v17;
        ::0x4b4db0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h48383af824827ec4(&v4, "-", 1);
        v7 = *((long long *)&v5);
        *((int128_t *)&v6) = *((int128_t *)&v4);
        v18->field_10 = v7;
        *((void*)&v18->field_0) = v6;
        alloc::slice::hack::into_vec::h4550f893734f497e(&v4, v18, 1);
        a0->field_10 = *((long long *)&v5);
        a0->field_0 = *((int128_t *)&v4);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h0fd37e3fd655f808(&v2);
        return a0;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
