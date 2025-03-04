long long uu_df::blocks::read_block_size::h03278a4ead33fd1d(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0x78], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x70], Other Possible Types: char
    unsigned long long v3;  // [sp-0x68]
    void* v4;  // [sp-0x60]
    char *v5;  // [sp-0x50]
    unsigned long long v6;  // [sp-0x48]
    void* v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v9;  // [sp-0x30]
    char v10;  // [sp-0x28]
    unsigned long long v12[3];  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // r14
    unsigned long long v15;  // r15
    unsigned long long v16;  // rcx

    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "blocksize", 9))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had32a7dafbe4cc99(&v0, a1, "blocksize", 9);
        v12 = clap_builder::parser::error::MatchesError::unwrap::h16d97371a8658236("blocksize", 9, &v0);
        if (!v12)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_541ed8); /* do not return */
        v14 = v12[1];
        v15 = v12[2];
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, v14, v15);
        v16 = v0;
        v13 = v1;
        if (v16 != 3)
        {
            a0->field_10 = *((int128_t *)&v2);
            a0->field_0 = v16;
            a0->field_8 = v13;
            return a0;
        }
        if (!v13)
        {
            v7 = 0;
            v8 = v14;
            v9 = v15;
            v10 = 1;
            v5 = &v7;
            v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_40ba30;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            ::0x4d3ea0::core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&a0->field_8, &v0);
            a0->field_0 = 1;
            return a0;
        }
LABEL_4d4ac0:
        a0->field_8 = v13;
    }
    else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "portability", 11))
    {
        a0->field_8 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
    }
    else
    {
        v13 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
        goto LABEL_4d4ac0;
    }
    a0->field_0 = 3;
    return a0;
}
