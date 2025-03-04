long long uu_join::parse_print_settings::h7df2ac24ec40344e(struct_0 *a0, unsigned long long a1)
{
    struct_0 *v0;  // [sp-0x1c8]
    unsigned long long v1;  // [sp-0x1c0]
    int v2;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x1a8], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x1a0]
    int v5;  // [bp-0x198]
    void* v6;  // [sp-0x190]
    int v7;  // [bp-0x188]
    void* v8;  // [sp-0x180]
    int v9;  // [bp-0x178], Other Possible Types: unsigned long long
    int v10;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x160]
    int v12;  // [bp-0x158]
    void* v13;  // [sp-0x150]
    int v14;  // [bp-0x148]
    void* v15;  // [sp-0x140]
    char v16;  // [bp-0x130]
    char v17;  // [bp-0x120]
    char v18;  // [bp-0x110]
    char v19;  // [bp-0x100]
    char v20;  // [bp-0xf0]
    char v21;  // [bp-0xe0]
    char v22;  // [bp-0xd0]
    char v23;  // [bp-0xc0]
    char v24;  // [bp-0xb0]
    char v25;  // [bp-0x70]
    struct_0 *v27;  // rbx
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    unsigned long long v34[3];  // rax
    void* v35;  // rbp
    void* v36;  // r13
    char v37;  // r13b
    char v38;  // bpl
    unsigned long long v40;  // rcx
    struct_0 *v41;  // rdx

    v27 = a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(&v24, a1, "v", 1);
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&v20, "v", 1, &v24);
    v1 = *((long long *)&v20);
    if (!v1)
    {
        v2 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        v2 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v3 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v4 = 0;
        v6 = 0;
        v8 = 0;
    }
    else
    {
        v28 = *((int128_t *)&v20);
        v29 = *((int128_t *)&v21);
        v30 = *((int128_t *)&v22);
        *((int128_t *)&v7) = *((int128_t *)&v23);
        v5 = v30;
        v3 = v29;
        v2 = v28;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf06f95a7b97cd47(&v24, a1, "a", 1);
    clap_builder::parser::error::MatchesError::unwrap::h1dd9f4a8c089b7df(&v16, "a", 1, &v24);
    if (!*((long long *)&v16))
    {
        v9 = core::ops::function::FnOnce::call_once::hd000ac33043b820c;
        v9 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v10 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v11 = 0;
        v13 = 0;
        v15 = 0;
    }
    else
    {
        v31 = *((int128_t *)&v16);
        v32 = *((int128_t *)&v17);
        v33 = *((int128_t *)&v18);
        *((int128_t *)&v14) = *((int128_t *)&v19);
        v12 = v33;
        v10 = v32;
        v9 = v31;
    }
    core::iter::traits::iterator::Iterator::chain::h151f974d6a98c263(&v24, &v2, &v9);
    v34 = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&v24), &v25);
    if (!v34)
    {
        v37 = 0;
        v38 = 0;
    }
    else
    {
        v0 = a0;
        v35 = 0;
        v36 = 0;
        do
        {
            uu_join::parse_file_number::h95ac4b0d73e9ada5(&v16, v34[1], v34[2]);
            v34 = *((long long *)&v16);
            if (v34)
            {
                v40 = *((long long *)&(&v16)[8]);
                v41 = v0;
                v41->field_0 = v34;
                *((unsigned long long *)&v41->field_8) = v40;
                return v34;
            }
            v36 = (!(&v16)[8] ? 1 : v36 & 4294967295 & 4294967295);
            v35 = ((&v16)[8] ? 1 : v35 & 4294967295 & 4294967295);
            v34 = core::option::Option$LT$T$GT$::or_else::h73b79e6fbab2ae65(core::iter::adapters::chain::and_then_or_clear::hd7f35116e82399f1(&v24), &v25);
        } while (v34);
        v37 = v36 & 0xffffffffffffff00 | (char)v36 & 1;
        v38 = v35 & 0xffffffffffffff00 | (char)v35 & 1;
        v27 = v0;
    }
    v27->field_8 = !v1;
    *((char *)&v27[1].field_0) = v37;
    *((char *)&v27[1].field_0 + 1) = v38;
    v27->field_0 = 0;
    return v34;
}
