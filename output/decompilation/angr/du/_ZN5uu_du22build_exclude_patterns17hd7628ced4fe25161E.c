long long uu_du::build_exclude_patterns(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x308]
    unsigned long long v2;  // [bp-0x308]
    unsigned long long v3;  // [bp-0x308]
    unsigned long v4;  // [bp-0x300], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x300]
    unsigned long long v6;  // [bp-0x300]
    char *v7;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x2f0]
    int v9;  // [bp-0x2f0]
    void* v10;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v11;  // [bp-0x2e0]
    unsigned long long v12;  // [bp-0x2d8]
    unsigned long long v13;  // [bp-0x2d8]
    void* v14;  // [bp-0x2d0]
    void* v15;  // [bp-0x2d0], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x2c8]
    int v17;  // [bp-0x2c8]
    unsigned long long v18;  // [bp-0x2c0]
    unsigned long long v19;  // [bp-0x2b8]
    struct_0 *v20;  // [bp-0x2a8]
    void* v21;  // [bp-0x2a0]
    unsigned long long v22;  // [bp-0x298]
    void* v23;  // [bp-0x290]
    int v24;  // [bp-0x288]
    unsigned long long v25;  // [bp-0x280]
    unsigned long long v26;  // [bp-0x278]
    int v27;  // [bp-0x268]
    int v28;  // [bp-0x268]
    int v29;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x258]
    unsigned long long v31;  // [bp-0x250]
    char v32;  // [bp-0x248]
    int v33;  // [bp-0x230]
    unsigned long long v34;  // [bp-0x220]
    char v35;  // [bp-0x218]
    unsigned long long v36;  // [bp-0x208]
    unsigned long long v37;  // [bp-0x1f8]
    unsigned long long v38;  // [bp-0x1f0]
    int v39;  // [bp-0x1e8]
    int v40;  // [bp-0x1d8]
    unsigned long long v41;  // [bp-0x1c8]
    unsigned long long v42;  // [bp-0x1c0]
    char v43;  // [bp-0x1b8]
    char v44;  // [bp-0x1a8]
    char v45;  // [bp-0x198]
    unsigned long long v46;  // [bp-0x188]
    unsigned long long v47;  // [bp-0x178]
    unsigned long long v48;  // [bp-0x170]
    int v49;  // [bp-0x168]
    int v50;  // [bp-0x158]
    unsigned long long v51;  // [bp-0x148]
    unsigned long long v52;  // [bp-0x140]
    void* v53;  // [bp-0x138]
    void* v54;  // [bp-0x118]
    char v55;  // [bp-0xf8]
    char v56;  // [bp-0x70]
    int v58;  // xmm1
    uint128_t v59;  // xmm0
    uint128_t v61;  // xmm0

    v55.try_get_many(a1, "exclude-fromexcludeverbosedu-verbose-adding-to-exclude-list: \t-", 12);
    (char)v3.unwrap("exclude-fromexcludeverbosedu-verbose-adding-to-exclude-list: \t-", 12, &v55);
    if (v3)
    {
        v58 = *((int128_t *)&v7);
        v59 = *((int128_t *)&v10);
        v6 = v5;
        v12 = v13;
        v15 = v14;
        v0 = v3;
    }
    else
    {
        v59 = 0;
        v5 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v14 = 0;
        v0 = core::ops::function::FnOnce::call_once;
    }
    v4 = v6;
    v47 = v0;
    v48 = v5;
    v49 = v58;
    *((uint128_t *)&v50) = v59;
    v51 = v13;
    v52 = v14;
    v53 = 0;
    v54 = 0;
    v55.try_get_many(a1, "excludeverbosedu-verbose-adding-to-exclude-list: \t-", 7);
    (char)v3.unwrap("excludeverbosedu-verbose-adding-to-exclude-list: \t-", 7, &v55);
    if (v3)
    {
        v58 = *((int128_t *)&v7);
        v61 = *((int128_t *)&v10);
        v2 = v3;
        v13 = v12;
    }
    else
    {
        v61 = 0;
        v4 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v15 = 0;
        v2 = core::ops::function::FnOnce::call_once;
    }
    v37 = v2;
    v38 = v4;
    v39 = v58;
    *((uint128_t *)&v40) = v61;
    v41 = v13;
    v42 = v15;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v55.chain(&v37, &v47);
    while (true)
    {
        core::iter::adapters::chain::and_then_or_clear(&(char)v3, &v56);
        v33.or_else(&(char)v3, &v55);
        if ((long long)v33 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(&v55);
            v20->field_10 = 0;
            *((int128_t *)&v20->field_0) = *((int128_t *)&v21);
            return a0;
        }
        v26 = v34;
        v24 = v33;
        v28 = v27;
        if ((char)a1.get_flag("verbosedu-verbose-adding-to-exclude-list: \t-", 7))
        {
            v27.to_vec("patternexclude-fromexcludeverbosedu-verbose-adding-to-exclude-list: \t-", 7);
            v19 = v30;
            v17 = v27;
            v27.clone(&(char)v24);
            v7 = v19;
            memcpy(&(char)v3, &v16, 16);
            v11 = v30;
            v9 = v27;
            memcpy(&v28, &v3, 16);
            v30 = v7;
            v31 = v8;
            memcpy(&v32, &v9, 16);
            (char)v3.from_iter(&v28);
            uucore::mods::locale::get_message_with_args(&v28, "du-verbose-adding-to-exclude-list: \t-", 33, &(char)v3);
            v16 = &v28;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_5e49a0;
            v4 = 2;
            v10 = 0;
            v7 = &v16;
            v8 = 1;
            std::io::stdio::_print(&v3);
            ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v28);
            v28 = v29;
        }
        v27 = v28;
        uucore::features::parser::parse_glob::from_str(&(char)v3, v25, v26);
        if (v3 == 0x8000000000000000)
        {
            v36 = v8;
            memcpy(&v35, &v4, 16);
            v16.spec_to_string(&v35);
            v31 = v19;
            memcpy(&(char)v27, &v16, 16);
            v29 = 4;
            *((double *)&v20->padding_1[7]) = v29.new();
            v20->field_10 = &g_5e4ae0;
            *((unsigned long long *)&v20->field_0) = 0x8000000000000000;
            ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(char)v24);
            core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(&v55);
            v21.drop_in_place<alloc::vec::Vec<glob::Pattern>>();
            return a0;
        }
        v46 = v12;
        memcpy(&v45, &v9, 16);
        memcpy(&v44, &v7, 16);
        memcpy(&v43, &v3, 16);
        v21.push(&v43);
        ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(char)v24);
    }
}
