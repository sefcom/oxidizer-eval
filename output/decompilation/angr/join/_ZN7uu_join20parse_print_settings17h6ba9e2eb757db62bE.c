long long uu_join::parse_print_settings(struct_1 *a0, unsigned long long a1)
{
    struct_1 *v0;  // [bp-0x1c8]
    unsigned long long v1;  // [bp-0x1c0]
    int v2;  // [bp-0x1b8]
    unsigned long long v3;  // [bp-0x1b8]
    unsigned long long v4;  // [bp-0x1b0]
    int v5;  // [bp-0x1a8], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1a0]
    int v7;  // [bp-0x198]
    void* v8;  // [bp-0x190]
    int v9;  // [bp-0x188]
    void* v10;  // [bp-0x180]
    int v11;  // [bp-0x178]
    unsigned long long v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x170]
    int v14;  // [bp-0x168], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x160]
    int v16;  // [bp-0x158]
    void* v17;  // [bp-0x150]
    int v18;  // [bp-0x148]
    void* v19;  // [bp-0x140]
    unsigned long long v21;  // [bp-0x130]
    unsigned long long v22;  // [bp-0x128]
    int v23;  // [bp-0x120]
    int v24;  // [bp-0x110]
    int v25;  // [bp-0x100]
    int v26;  // [bp-0xf0], Other Possible Types: char
    int v27;  // [bp-0xe0]
    int v28;  // [bp-0xd0]
    int v29;  // [bp-0xc0]
    char v30;  // [bp-0xb0]
    char v31;  // [bp-0x70]
    struct_0 *v33;  // rbx
    int v34;  // xmm0
    unsigned long long v35[3];  // rax
    void* v36;  // rbp
    void* v37;  // r13
    char v38;  // bpl
    char v39;  // r13b

    v33 = a0;
    v30.try_get_many(a1, "vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-", 1);
    v26.unwrap("vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-", 1, &v30);
    v1 = *((long long *)&v26);
    if (*((long long *)&v26))
    {
        v9 = v29;
        v7 = v28;
        v5 = v27;
        v2 = v26;
    }
    else
    {
        v3 = core::ops::function::FnOnce::call_once;
        v4 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v5 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v6 = 0;
        v8 = 0;
        v10 = 0;
    }
    v30.try_get_many(a1, "aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-o", 1);
    (char)v21.unwrap("aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-o", 1, &v30);
    if (v21)
    {
        v34 = *((int128_t *)&v21);
        v18 = v25;
        v16 = v24;
        v14 = v23;
        v11 = v34;
    }
    else
    {
        v12 = core::ops::function::FnOnce::call_once;
        v13 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v14 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v15 = 0;
        v17 = 0;
        v19 = 0;
    }
    v30.chain(&(char)v2, &(char)v11);
    v35 = core::iter::adapters::chain::and_then_or_clear(&v30).or_else(&v31);
    if (v35)
    {
        v0 = a0;
        v36 = 0;
        v37 = 0;
        do
        {
            uu_join::parse_file_number(&(char)v21, v35[1], v35[2]);
            if (v21)
            {
                v0->field_0 = v21;
                *((unsigned long long *)&v0->field_8) = v22;
                return v21;
            }
            v37 = ((char)v22 ? 1 : v37 & 4294967295);
            v36 = (!(char)v22 ? 1 : v36 & 4294967295);
            v35 = core::iter::adapters::chain::and_then_or_clear(&v30).or_else(&v31);
        } while (v35);
        v38 = (char)v36 & 1;
        v39 = (char)v37 & 1;
        v33 = v0;
    }
    v33->field_8 = !v1;
    *((char *)&v33[1].field_0) = v38;
    *((char *)&v33[1].field_0 + 1) = v39;
    v33->field_0 = 0;
    return v35;
}
