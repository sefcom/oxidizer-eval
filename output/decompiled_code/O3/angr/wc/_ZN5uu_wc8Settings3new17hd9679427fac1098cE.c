long long uu_wc::Settings::new::hd9679427fac1098c(struct_0 *a0, unsigned long long a1)
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
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d63e137cbdc037b(&v11, a1, "files0-from", 11);
    v16 = clap_builder::parser::error::MatchesError::unwrap::hc67b1f0db7b9c5ea("files0-from", 11, &v11);
    if (!v16)
    {
        v9 = 9223372036854775810;
    }
    else
    {
        core::ops::function::FnOnce::call_once::ha09e11c3a1ed1c14(&v11, v16, v17);
        v10 = *((long long *)&v12);
        *((int128_t *)&v9) = *((int128_t *)&v11);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had917e48542ae18c(&v11, a1, "total", 5);
    v18 = clap_builder::parser::error::MatchesError::unwrap::he0fec0ad86ddae7e("total", 5, &v11);
    v0 = (!v18 ? 0 : (int)core::ops::function::FnOnce::call_once::h9a403f92ab234d0c(v18, v19, v17));
    v2 = v10;
    *((int128_t *)&v1) = *((int128_t *)&v9);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "bytes", 5);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "chars", 5);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "lines", 5);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "words", 5);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "max-line-length", 15);
    v8 = v0;
    if (!(int)uu_wc::Settings::number_enabled::hf98a96d16a31481a(&v1, v19, v17))
    {
        a0->field_10 = v2;
        *((void*)&a0->field_0) = v1;
        v13 = 16842753;
        v14 = 0;
        v11 = 9223372036854775810;
        *((int *)&a0[1].field_0) = 16842753;
        *((char *)&a0[1].field_0 + 4) = 0;
        *((char *)&a0[1].field_0 + 5) = v8;
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hacde1ab85c9b86b8(&v11);
        return a0;
    }
    *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v1;
    return a0;
}
