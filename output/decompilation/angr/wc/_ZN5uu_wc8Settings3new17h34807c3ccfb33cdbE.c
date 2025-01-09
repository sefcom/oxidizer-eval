long long uu_wc::Settings::new::h34807c3ccfb33cdb(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [sp-0x9c]
    int v1;  // [sp-0x98]
    unsigned long v2;  // [sp-0x88], Other Possible Types: unsigned long long
    char v3;  // [sp-0x80]
    char v4;  // [sp-0x7f]
    char v5;  // [sp-0x7e]
    char v6;  // [sp-0x7d]
    char v7;  // [sp-0x7c]
    char v8;  // [sp-0x7b]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [sp-0x68]
    char v11;  // [bp-0x58], Other Possible Types: unsigned long long
    char v12;  // [bp-0x48]
    unsigned int v13;  // [sp-0x40]
    unsigned short v14;  // [sp-0x3c]

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&v11, a1, "files0-from", 11);
    if (!clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4("files0-from", 11, &v11))
    {
        v9 = 9223372036854775810;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hd72670be98e9ca09();
        v10 = *((long long *)&v12);
        *((int128_t *)&v9) = *((int128_t *)&v11);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he5d9c5ec371f7c77(&v11, a1, "total", 5);
    v0 = (!clap_builder::parser::error::MatchesError::unwrap::h3533af4150754c61("total", 5, &v11) ? 0 : (int)core::ops::function::FnOnce::call_once::h04c9fe66688ddd3e());
    v2 = v10;
    *((int128_t *)&v1) = *((int128_t *)&v9);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "bytes", 5);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "chars", 5);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "lines", 5);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "wordscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "max-line-length", 15);
    v8 = v0;
    if (!(int)uu_wc::Settings::number_enabled::he133dd856851d2dc(&v1))
    {
        a0->field_10 = v2;
        *((void*)&a0->field_0) = v1;
        v13 = 16842753;
        v14 = 0;
        v11 = 9223372036854775810;
        *((unsigned int *)&a0[1].field_0) = 16842753;
        *((char *)&a0[1].field_0 + 4) = 0;
        *((char *)&a0[1].field_0 + 5) = v8;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hcafeb69c0c0d0c8c(&v11);
        return a0;
    }
    *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v1;
    return a0;
}
