long long uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0x104]
    char v2;  // [bp-0x100]
    int v3;  // [sp-0xf8]
    int v4;  // [sp-0xe8]
    int v5;  // [sp-0xd8]
    int v6;  // [sp-0xc8]
    int v7;  // [sp-0xb8]
    char v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    unsigned long v11;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    char v14;  // [bp-0x78]
    char v15;  // [bp-0x68]
    char v16;  // [bp-0x58]
    char v17;  // [bp-0x48]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    struct_0 *v21;  // rax
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    struct_0 *v26;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, a2, a3);
    v19 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(a2, a3, &v0);
    if (!v19)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v17, v19);
    std::fs::File::open::h25307432a9f68270(&v0, &v17, v20);
    if (*((int *)&v0))
    {
        v21 = *((long long *)&v2);
        *((struct_0 **)&a0->padding_8[0]) = v21;
        a0->field_0 = 0;
        return v21;
    }
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfe08d7d96eb99100(&v14, 0x2000, *((int *)&v1));
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&v0, v22, v20);
    v7 = v4;
    v6 = v3;
    v5 = v0;
    *((int128_t *)&v4) = *((int128_t *)&v16);
    *((int128_t *)&v3) = *((int128_t *)&v15);
    *((int128_t *)&v0) = *((int128_t *)&v14);
    while (true)
    {
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7b587278e9c13b14(&v8, &v0, v23);
        v24 = *((long long *)&v8);
        if (v24 == 9223372036854775809)
        {
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&v0);
            v21 = a0;
            *((void*)&v21->field_20) = v7;
            *((void*)&v21->field_10) = v6;
            *((void*)&v21->field_0) = v5;
            return v21;
        }
        else if (v24 != 0x8000000000000000)
        {
            v11 = v24;
            v12 = *((long long *)&v9);
            v13 = *((long long *)&v10);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9782d684969e794d(&v5, &v11);
        }
        else
        {
            v26 = a0;
            *((unsigned long long *)&v26->padding_8[0]) = v12;
            v26->field_0 = 0;
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&v0);
            v21 = core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v5);
            return v21;
        }
    }
}
