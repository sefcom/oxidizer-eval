long long uu_realpath::prepare_relative_options::hce8b705a83476ef9(unsigned long long a0[6], unsigned long long a1, unsigned int a2, unsigned int a3)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd0]
    unsigned long long v3;  // [sp-0xc8]
    unsigned long long v4;  // [sp-0xc0]
    unsigned long v5;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa0]
    unsigned long long v7;  // [sp-0x98]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    char v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [sp-0x68]
    unsigned long v13;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x58]
    unsigned long long v15;  // [sp-0x50]
    char v16;  // [bp-0x48], Other Possible Types: unsigned long long
    char v17;  // [bp-0x38]
    unsigned long long v19[3];  // rax
    unsigned long long v20[3];  // rax
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // r15
    unsigned long long v24[6];  // r12
    char *v25;  // rdi
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx
    unsigned long long v30;  // rdx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&v0, a1, "relative-to", 11);
    v19 = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231("relative-to", 11, &v0);
    if (!v19)
        v16 = 0x8000000000000000;
    else
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&v16, v19[1], v19[2]);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&v0, a1, "relative-base", 13);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231("relative-base", 13, &v0);
    if (!v20)
    {
        v11 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&v0, v20[1], v20[2]);
        v12 = v1;
        *((void*)&v11) = v0;
    }
    v1 = *((long long *)&v17);
    *((int128_t *)&v0) = *((int128_t *)&v16);
    uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&v8, &v0, a2, a3);
    v21 = *((long long *)&v8);
    v22 = *((long long *)&v9);
    v23 = *((long long *)&v10);
    if (v13 == 9223372036854775809)
    {
        v24 = a0;
        v24[1] = v14;
        v24[2] = v15;
        v24[0] = 9223372036854775809;
        v25 = &v11;
    }
    else
    {
        v13 = v21;
        v14 = v22;
        v15 = v23;
        v1 = v12;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&v8, &v0, a2, a3);
        v24 = a0;
        v26 = *((long long *)&v8);
        v27 = *((long long *)&v9);
        v28 = *((long long *)&v10);
        if (v5 == 9223372036854775809)
        {
            v24[1] = v6;
            v24[2] = v7;
            v24[0] = 9223372036854775809;
        }
        else
        {
            v5 = v26;
            v6 = v27;
            v7 = v28;
            if (v5 != 0x8000000000000000)
                v6 = v6;
            else
                v6 = 0;
            v30 = v6;
            if (!(v13 != 0x8000000000000000) || !(v30) || !(!(char)std::path::Path::starts_with::heff55995860ce76c(v14, v15, v30, v7)))
            {
                v1 = v15;
                *((int128_t *)&v0) = *((int128_t *)&v13);
                v4 = v7;
                v2 = v5;
                v3 = v6;
                *((void*)&v24[0]) = v0;
                v24[4] = v3;
                v24[5] = v4;
                v24[2] = v1;
                v24[3] = v2;
                return v24;
            }
            v24[0] = 0x8000000000000000;
            v24[3] = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&v5);
        }
        v25 = &v13;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(v25);
    return v24;
}
