long long uu_ptx::read_char_filter_file::hd2a5d0284e54d7b0(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [sp-0x64]
    void* v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    void* v3;  // [sp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x44]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    int v13;  // xmm0
    int v14;  // xmm1

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1002e1fcd4bfd645(&v4, a1, "break-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    v10 = clap_builder::parser::error::MatchesError::unwrap::h6df5109192c29e79("break-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10, &v4);
    if (!v10)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    std::fs::File::open::hee669ed2973eecd1(&v4, v10, v11);
    if (*((int *)&v4))
    {
        v12 = *((long long *)&v6);
        *((unsigned long long *)&a0->padding_8[0]) = v12;
        a0->field_0 = 0;
        return v12;
    }
    v0 = *((int *)&v5);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h16b54f4758140c12(&v0, &v1, v11))
    {
        _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hbd19d00f6f505ebe(&v4, v2, v3 + v2);
        v13 = *((int128_t *)&v4);
        v14 = *((int128_t *)&v7);
        a0->field_20 = *((int128_t *)&v8);
        *((void*)&a0->field_10) = v14;
        *((void*)&a0->field_0) = v13;
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v1);
    }
    else
    {
        *((unsigned long long *)&a0->padding_8[0]) = v11;
        a0->field_0 = 0;
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v1);
    }
    v12 = ::0x5b1bf0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hb8817b6578659f9e(&v0);
    return v12;
}
