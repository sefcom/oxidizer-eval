long long uu_realpath::prepare_relative_options::hce8b705a83476ef9(unsigned long long a0[6], unsigned long long a1, unsigned int a2, unsigned int a3)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd0]
    unsigned long long v3;  // [sp-0xc8]
    unsigned long long v4;  // [sp-0xc0]
    unsigned long v5;  // [sp-0xa8]
    unsigned long long v6;  // [sp-0xa0]
    unsigned long long v7;  // [sp-0x98]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    char v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v13;  // [sp-0x68]
    unsigned long v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    unsigned long long v16;  // [sp-0x50]
    char v17;  // [bp-0x48], Other Possible Types: unsigned long long
    char v18;  // [bp-0x38]
    unsigned long long v20[3];  // rax
    unsigned long long v21[3];  // rax
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25[6];  // r12
    char *v26;  // rdi
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&v0, a1, "relative-to", 11);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231("relative-to", 11, &v0);
    if (!v20)
        v17 = 0x8000000000000000;
    else
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&v17, v20[1], v20[2]);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hbfeb7723ee7ca69f(&v0, a1, "relative-base", 13);
    v21 = clap_builder::parser::error::MatchesError::unwrap::h29e62fffa74ba231("relative-base", 13, &v0);
    if (!v21)
    {
        v11 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h1ca8403b9347f80f(&v0, v21[1], v21[2]);
        v13 = v1;
        *((void*)&v11) = v0;
    }
    v1 = *((long long *)&v18);
    *((int128_t *)&v0) = *((int128_t *)&v17);
    uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&v8, &v0, a2, a3);
    v22 = *((long long *)&v8);
    v23 = *((long long *)&v9);
    v24 = *((long long *)&v10);
    if (v14 == 9223372036854775809)
    {
        v25 = a0;
        v25[1] = v15;
        v25[2] = v16;
        v25[0] = 9223372036854775809;
        v26 = &v11;
    }
    else
    {
        v14 = v22;
        v15 = v23;
        v16 = v24;
        v1 = v13;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(&v8, &v0, a2, a3);
        v25 = a0;
        v27 = *((long long *)&v8);
        v28 = *((long long *)&v9);
        v29 = *((long long *)&v10);
        if (v5 == 9223372036854775809)
        {
            v25[1] = v6;
            v25[2] = v7;
            v25[0] = 9223372036854775809;
        }
        else
        {
            v5 = v27;
            v6 = v28;
            v7 = v29;
            v30 = (v5 != 0x8000000000000000 ? v6 : 0);
            if (!(v14 != 0x8000000000000000) || !(v30) || !(!(char)std::path::Path::starts_with::heff55995860ce76c(v15, v16, v30, v7)))
            {
                v1 = v16;
                *((int128_t *)&v0) = *((int128_t *)&v14);
                v4 = v7;
                v2 = v5;
                v3 = v6;
                *((void*)&v25[0]) = v0;
                v25[4] = v3;
                v25[5] = v4;
                v25[2] = v1;
                v25[3] = v2;
                return v25;
            }
            v25[0] = 0x8000000000000000;
            v25[3] = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(&v5);
        }
        v26 = &v14;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hdd217be1dc1b5c70(v26);
    return v25;
}
