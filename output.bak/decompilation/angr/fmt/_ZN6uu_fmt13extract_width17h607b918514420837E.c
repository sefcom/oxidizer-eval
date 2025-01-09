long long uu_fmt::extract_width::h607b918514420837(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned int, unsigned long
    unsigned long v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0xa8]
    unsigned long long v3;  // [sp-0xa0]
    void* v4;  // [sp-0x98]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char *v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    void* v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [sp-0x50]
    char v13;  // [bp-0x48]
    unsigned int v14;  // [sp-0x30]
    unsigned long long v16[3];  // rax
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    unsigned long long v19;  // rax
    unsigned long long v21[3];  // r13
    void* v22;  // rcx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rdx
    unsigned long long v26[3];  // rax
    unsigned long long v27;  // r14
    unsigned long long v28;  // r15

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v0, a1, "widthinvalid width: src/uu/fmt/src/fmt.rs", 5);
    v16 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("widthinvalid width: src/uu/fmt/src/fmt.rs", 5, &v0);
    if (v16)
    {
        v17 = v16[1];
        v18 = v16[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v5, v17, v18);
        if (!v5)
        {
            v23 = *((long long *)&v6);
            v19 = 1;
            v24 = 0;
        }
        else
        {
            v9 = 0;
            v10 = v17;
            v11 = v18;
            v12 = 1;
            v7 = &v9;
            v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_526520;
            v1 = 1;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            ::0x4b48a0::core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23();
            v14 = 1;
            v19 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v13);
            v24 = 1;
            v23 = &g_526400;
        }
        a0[1] = v19;
        a0[2] = v23;
        a0[0] = v24;
        return v19;
    }
    else
    {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(a1, "files", 5);
        v21 = 8;
        v22 = 0;
        if (v19 == 1)
        {
            v22 = 0;
            if (v25 == 1)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&v0, a1, "files", 5);
                v26 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b("files", 5, &v0);
                if (!v26)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_526530); /* do not return */
                v27 = v26[1];
                v28 = v26[2];
                v0 = 0;
                v19 = ::0x4b4940::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x4b4840::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v0), v27, v28);
                if (!v19)
                {
                    v22 = 0;
                }
                else
                {
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v19, v25);
                    v19 = (char)v0 ^ 1;
                    a0[1] = v19;
                    v21 = 16;
                    v22 = v1;
                }
            }
        }
        *((void* *)(a0 + v21)) = v22;
        a0[0] = 0;
        return v19;
    }
}
