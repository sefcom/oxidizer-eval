long long versions_replacer::main()
{
    void* v0;  // [bp-0x258]
    unsigned long long v1;  // [bp-0x250]
    void* v2;  // [bp-0x248]
    char *v3;  // [bp-0x240], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0x240]
    unsigned int v5;  // [bp-0x240]
    unsigned long v6;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x240]
    unsigned int v8;  // [bp-0x240]
    void* v9;  // [bp-0x238], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x230], Other Possible Types: unsigned long long
    int v11;  // [bp-0x228], Other Possible Types: char, unsigned long long
    void* v12;  // [bp-0x228]
    char v13;  // [bp-0x220], Other Possible Types: unsigned long long
    char v14;  // [bp-0x218]
    char v15;  // [bp-0x208]
    unsigned long long v16;  // [bp-0x1f8]
    void* v17;  // [bp-0x1f0]
    char v18;  // [bp-0x1e8]
    char v19;  // [bp-0x1d8]
    unsigned long long v20;  // [bp-0x1c8]
    void* v21;  // [bp-0x1c0]
    char v22;  // [bp-0x1b8]
    int v23;  // [bp-0x1a8]
    void* v24;  // [bp-0x198], Other Possible Types: char, unsigned long long
    void* v25;  // [bp-0x190], Other Possible Types: unsigned long long
    void* v26;  // [bp-0x188], Other Possible Types: char *, char
    unsigned long long v27;  // [bp-0x180]
    int v28;  // [bp-0x178], Other Possible Types: void*, uint128_t
    unsigned long long v29;  // [bp-0x168]
    uint128_t v30;  // [bp-0x160]
    unsigned long long v31;  // [bp-0x150]
    void* v32;  // [bp-0x148]
    char v33;  // [bp-0x140]
    unsigned long long v34;  // [bp-0x130]
    char v35;  // [bp-0x128]
    char v36;  // [bp-0x118]
    char v37;  // [bp-0x108]
    uint128_t v38;  // [bp-0xf8]
    void* v39;  // [bp-0xe8], Other Possible Types: char
    char v40;  // [bp-0xd8]
    char v41;  // [bp-0xc8]
    char v42;  // [bp-0xb8]
    char v43;  // [bp-0xa0]
    unsigned long long v44;  // [bp-0x88]
    int v45;  // [bp-0x80]
    char v46;  // [bp-0x68]
    void* v48;  // rbx
    unsigned long long v49;  // r15
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdx

    argh::from_env(&v42);
    versions_replacer::metadata::collect_versions_from_cargo_toml(&v24, &v43);
    v48 = v25;
    if (v24)
    {
        v23 = v28;
        memcpy(&v22, &v26, 16);
        v20 = v24;
        v21 = v48;
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v3.new(&v42);
        memcpy(&v37, &v15, 16);
        memcpy(&v36, &v14, 16);
        memcpy(&v35, &v11, 16);
        memcpy(&v33, &v3, 16);
        v34 = v10;
        v24 = 0;
        v26 = 0;
        v27 = 8;
        v28 = 0;
        v29 = 8;
        v30 = 0;
        v31 = 8;
        v32 = 0;
        v38 = 0;
        while (true)
        {
            v46.next(&v24);
            if (*((long long *)&v46) == 9223372036854775810)
            {
                core::ptr::drop_in_place<walkdir::IntoIter>(&v24);
                v16 = v1.fold(v1);
                v39 = 0;
                v3 = &v16;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v10 = &v39;
                v11 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v24 = &g_62c388;
                v25 = 3;
                v28 = 0;
                v26 = &v3;
                v27 = 2;
                std::io::stdio::_print(&v24);
                core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v0, v1);
                core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::string::String>>(&v20);
                v48 = 0;
                break;
            }
            v3.wrap_err(&v46);
            v48 = v9;
            if (v4 == 0x8000000000000000)
            {
LABEL_50a925:
                core::ptr::drop_in_place<walkdir::IntoIter>(&v24);
                core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v0, v1);
                core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::string::String>>(&v20);
                break;
            }
            memcpy(&v19, &v13, 16);
            memcpy(&v18, &v10, 16);
            v16 = v4;
            v17 = v48;
            v49 = *((long long *)&v18);
            v6 = v4;
            if ((char)v48.is_file(v49))
            {
                v7 = v4;
                if (v44)
                {
                    v50 = v48.file_name(v49);
                    if (v50)
                    {
                        core::str::converts::from_utf8(&v3, v50, v51);
                        if (v5 != 1)
                        {
                            v8 = 0;
                            v12 = 0;
                            v13 = v10;
                            v14 = 1;
                            v8.set_span(v10);
                            memcpy(&v41, &v13, 16);
                            memcpy(&v40, &v10, 16);
                            memcpy(&v39, &v3, 16);
                            v8.search_half(v44, (long long)v45, &v39);
                            v6 = v3;
                            v7 = v3;
                            if (((char)vvar_546{stack -576} & 1))
                                goto LABEL_50a803;
                        }
                        else
                        {
                            v3 = &g_62c378;
                            v9 = 1;
                            v10 = 8;
                            *((uint128_t *)&v11) = 0;
                            v48 = eyre::private::format_err(&v3, &g_62c3d0);
LABEL_50a918:
LABEL_50a91b:
                            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v16);
                            goto LABEL_50a925;
                        }
                    }
                    else
                    {
                        v48 = versions_replacer::main::{{closure}}(v48, v49);
                        goto LABEL_50a918;
                    }
                }
                else
                {
LABEL_50a803:
                    v4 = v7;
                    if (((char)versions_replacer::replace::replace_versions_in_file(v48, v49, &v20).wrap_err_with(v51, v48, v49) & 1))
                        goto LABEL_50a91b;
                    v6 = v4;
                    if (v48)
                    {
                        v0.push(v48);
                        v6 = v4;
                    }
                }
            }
            *((int *)&v4) = vvar_546{stack -576};
            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v16);
        }
    }
    core::ptr::drop_in_place<versions_replacer::VersionsReplacer>(&v42);
    return v48;
}
