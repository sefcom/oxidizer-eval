long long uu_du::build_exclude_patterns(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x2c0]
    void* v1;  // [bp-0x2b0]
    unsigned long long v2;  // [bp-0x2a8]
    void* v3;  // [bp-0x2a0]
    int v4;  // [bp-0x298]
    unsigned long long v5;  // [bp-0x290]
    unsigned long long v6;  // [bp-0x288]
    char v7;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x278]
    unsigned long long v9;  // [bp-0x270]
    unsigned long long v10;  // [bp-0x270]
    char *v11;  // [bp-0x268], Other Possible Types: char
    unsigned long long v12;  // [bp-0x260]
    void* v13;  // [bp-0x258], Other Possible Types: char
    unsigned long long v14;  // [bp-0x248]
    char *v15;  // [bp-0x238]
    unsigned long long v16;  // [bp-0x230]
    unsigned long long v17;  // [bp-0x228]
    int v18;  // [bp-0x220]
    unsigned long long v19;  // [bp-0x210]
    char v20;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x200]
    int v22;  // [bp-0x1f8]
    int v23;  // [bp-0x1f8]
    int v24;  // [bp-0x1e8]
    void* v26;  // [bp-0x1d0]
    void* v27;  // [bp-0x1c8]
    void* v28;  // [bp-0x1a8]
    int v29;  // [bp-0x188]
    unsigned long long v30;  // [bp-0x178]
    unsigned long long v31;  // [bp-0x170]
    unsigned long long v32;  // [bp-0x168]
    int v33;  // [bp-0x160]
    int v34;  // [bp-0x150]
    unsigned long long v35;  // [bp-0x140]
    void* v36;  // [bp-0x138]
    unsigned long long v37;  // [bp-0x130]
    int v38;  // [bp-0x128]
    char v39;  // [bp-0x118]
    char v40;  // [bp-0xf8]
    char v41;  // [bp-0x70]
    uint128_t v43;  // xmm0
    unsigned long long v44;  // rcx
    void* v45;  // rdx
    uint128_t v46;  // xmm0
    void* v47;  // rdx

    v40.try_get_many(a1, "exclude-fromexcludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 12);
    v20.unwrap("exclude-fromexcludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 12, &v40);
    if (!v20)
    {
        v43 = 0;
        v20 = core::ops::function::FnOnce::call_once;
        v44 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v45 = 0;
    }
    v21 = v44;
    v23 = v22;
    *((uint128_t *)&v24) = v43;
    v26 = v45;
    v27 = 0;
    v28 = 0;
    v40.try_get_many(a1, "excludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    v7.unwrap("excludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7, &v40);
    if (v8)
    {
        v22 = *((int128_t *)&v11);
        v46 = *((int128_t *)&v13);
        v10 = v9;
    }
    else
    {
        v46 = 0;
        v9 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v8 = core::ops::function::FnOnce::call_once;
        v47 = 0;
    }
    v31 = v8;
    v32 = v9;
    v33 = v22;
    *((uint128_t *)&v34) = v46;
    v35 = v14;
    v36 = v47;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v40.chain(&v31, &v20);
    while (true)
    {
        core::iter::adapters::chain::and_then_or_clear(&v7, &v41);
        v18.or_else(&v7, &v40);
        if ((long long)v18 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(&v40);
            *((unsigned long long *)&v0[16]) = 0;
            *((int128_t *)v0) = *((int128_t *)&v1);
            return a0;
        }
        v6 = v19;
        v4 = v18;
        if ((char)a1.get_flag("verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7))
        {
            v15 = &(char)v4;
            v16 = <alloc::string::String as core::fmt::Debug>::fmt;
            v8 = &g_545d38;
            v10 = 2;
            v13 = 0;
            v11 = &v15;
            v12 = 1;
            std::io::stdio::_print(&v8);
        }
        uucore::features::parser::parse_glob::from_str(&v37, v5, v6);
        if (v37 == 0x8000000000000000)
        {
            v30 = *((long long *)&v39);
            v29 = v38;
            v15.spec_to_string(&v29);
            v12 = v17;
            memcpy(&v10, &v15, 16);
            v7 = 4;
            *((double *)&v0[8]) = v7.new();
            *((char **)&v0[16]) = &g_545d90;
            *((unsigned long long *)v0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
            core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(&v40);
            v1.drop_in_place<alloc::vec::Vec<glob::Pattern>>();
            return a0;
        }
        v1.push(&v37);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
    }
}
