long long uu_join::parse_print_settings::h5834fb8087a0dc88(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x1c0]
    int v1;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x1b0]
    int v3;  // [bp-0x1a8], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x1a0]
    int v5;  // [bp-0x198]
    void* v6;  // [sp-0x190]
    int v7;  // [bp-0x188]
    void* v8;  // [sp-0x180]
    int v9;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x170]
    int v11;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x160]
    int v13;  // [bp-0x158]
    void* v14;  // [sp-0x150]
    int v15;  // [bp-0x148]
    void* v16;  // [sp-0x140]
    char v17;  // [bp-0x130]
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x110]
    char v20;  // [bp-0x100]
    char v21;  // [bp-0xf0]
    char v22;  // [bp-0xe0]
    char v23;  // [bp-0xd0]
    char v24;  // [bp-0xc0]
    char v25;  // [bp-0xb0]
    char v26;  // [bp-0x70]
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rdx
    unsigned long long v36[3];  // rax
    void* v37;  // rbp
    void* v38;  // r13
    char v39;  // r13b
    char v40;  // bpl
    unsigned long long v42;  // rcx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf52c5986791bde7a(&v25, a1, "v", 1);
    clap_builder::parser::error::MatchesError::unwrap::h48e5e268b493a2f1(&v21, "v", 1, &v25);
    v0 = *((long long *)&v21);
    if (!v0)
    {
        v1 = core::ops::function::FnOnce::call_once::hb6400d83e4cbaace;
        v2 = "&";
        v3 = "&";
        v4 = 0;
        v6 = 0;
        v8 = 0;
    }
    else
    {
        v28 = *((int128_t *)&v21);
        v29 = *((int128_t *)&v22);
        v30 = *((int128_t *)&v23);
        *((int128_t *)&v7) = *((int128_t *)&v24);
        v5 = v30;
        v3 = v29;
        v1 = v28;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf52c5986791bde7a(&v25, a1, "a", 1);
    clap_builder::parser::error::MatchesError::unwrap::h48e5e268b493a2f1(&v17, "a", 1, &v25);
    if (!*((long long *)&v17))
    {
        v9 = core::ops::function::FnOnce::call_once::hb6400d83e4cbaace;
        v10 = "&";
        v11 = "&";
        v12 = 0;
        v14 = 0;
        v16 = 0;
    }
    else
    {
        v31 = *((int128_t *)&v17);
        v32 = *((int128_t *)&v18);
        v33 = *((int128_t *)&v19);
        *((int128_t *)&v15) = *((int128_t *)&v20);
        v13 = v33;
        v11 = v32;
        v9 = v31;
    }
    core::iter::traits::iterator::Iterator::chain::h21540e2e8dd53797(&v25, &v1, &v9);
    v36 = core::option::Option$LT$T$GT$::or_else::h3792600567fb4605(core::iter::adapters::chain::and_then_or_clear::h10b24cc4f479a018(&v25, v34, v35), &v26, v35);
    if (!v36)
    {
        v39 = 0;
        v40 = 0;
    }
    else
    {
        v37 = 0;
        v38 = 0;
        do
        {
            uu_join::parse_file_number::he28e1e609b35509d(&v17, v36[1], v36[2]);
            v36 = *((long long *)&v17);
            if (v36)
            {
                v42 = *((long long *)&(&v17)[8]);
                a0->field_0 = v36;
                *((unsigned long long *)&a0->field_8) = v42;
                return v36;
            }
            v38 = ((&v17)[8] ? 1 : v38 & 4294967295 & 4294967295);
            v37 = (!(&v17)[8] ? 1 : v37 & 4294967295 & 4294967295);
            v36 = core::option::Option$LT$T$GT$::or_else::h3792600567fb4605(core::iter::adapters::chain::and_then_or_clear::h10b24cc4f479a018(&v25, v34, v35), &v26, v35);
        } while (v36);
        v40 = v37 | -0x100 | (char)v37 & 1;
        v39 = v38 | -0x100 | (char)v38 & 1;
    }
    a0->field_8 = !v0;
    *((char *)&a0[1].field_0) = v40;
    *((char *)&a0[1].field_0 + 1) = v39;
    a0->field_0 = 0;
    return v36;
}
