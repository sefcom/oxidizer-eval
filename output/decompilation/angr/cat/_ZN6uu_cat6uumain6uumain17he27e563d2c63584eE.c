long long uu_cat::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x419]
    int v1;  // [bp-0x418], Other Possible Types: char
    unsigned long long v2;  // [bp-0x408]
    int v3;  // [bp-0x3f8], Other Possible Types: char
    unsigned long long v4;  // [bp-0x3e8]
    char *v5;  // [bp-0x3e0], Other Possible Types: char
    char v6;  // [bp-0x3df]
    char v7;  // [bp-0x3de]
    char v8;  // [bp-0x3dd]
    char v9;  // [bp-0x3dc]
    char *v10;  // [bp-0x3d8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x3d0]
    int v12;  // [bp-0x3c0]
    int v13;  // [bp-0x3b0], Other Possible Types: char
    unsigned long long v14;  // [bp-0x3a0]
    unsigned long long v15;  // [bp-0x398]
    int v16;  // [bp-0x390]
    int v17;  // [bp-0x380]
    unsigned long long v18;  // [bp-0x370]
    int v19;  // [bp-0x368], Other Possible Types: char
    unsigned long long v20;  // [bp-0x358]
    int v21;  // [bp-0x348], Other Possible Types: char
    unsigned long long v22;  // [bp-0x348]
    struct_0 *v23;  // [bp-0x340]
    unsigned long long v24;  // [bp-0x338]
    int v25;  // [bp-0x330]
    unsigned long long v26;  // [bp-0x320]
    int v27;  // [bp-0x318]
    unsigned long long v28;  // [bp-0x308]
    char v29;  // [bp-0x300]
    unsigned long long v30;  // [bp-0x2f0]
    char v31;  // [bp-0x2e8]
    char v32;  // [bp-0x78]
    int v33;  // [bp-0x68]
    int v34;  // [bp-0x58]
    int v35;  // [bp-0x48]
    unsigned long long v37;  // rdi
    char v38;  // bl
    char v39;  // al
    char v40;  // al
    char v41;  // al
    struct_0 *v42;  // r13
    unsigned long long v43;  // rbp
    struct_0 *v44;  // rax
    unsigned long long v45;  // rax

    signal(13, 0);
    uu_cat::uu_app(&(char)v21);
    (char)v5.try_get_matches_from(&(char)v21, a0, a1);
    v37 = v10;
    if ((char)(((0 ^ *((long long *)&v5)) & (0 ^ -(*((long long *)&v5)))) >> 63))
        return v15.from();
    v18 = *((long long *)&v13);
    v17 = v12;
    v16 = v11;
    v14 = *((long long *)&v5);
    v15 = v10;
    v38 = 1;
    if (!(char)v14.get_flag(_ZN6uu_cat7options15NUMBER_NONBLANK17hbc703a5177f06442E, g_5730a8))
        v38 = (char)v14.get_flag(_ZN6uu_cat7options6NUMBER17h0ff9c6ee25224eb0E, g_5730d8) * 2;
    (char)v21.to_vec(_ZN6uu_cat7options8SHOW_ALL17h556bc57b3b3c2841E, g_573098);
    v20 = v24;
    memcpy(&v19, &v21, 16);
    (char)v21.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h502c20c93b9dd6c2E, g_5730b8);
    v4 = v24;
    memcpy(&v3, &v21, 16);
    (char)v21.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h89057c668b1dc6c6E, g_5730f8);
    v2 = v24;
    memcpy(&v1, &v21, 16);
    (char)v5.to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h3a35dbfaa83ca8c5E, g_573118);
    v30 = (long long)v11;
    memcpy(&v29, &v5, 16);
    v21 = v19;
    v24 = v20;
    v25 = v3;
    v26 = v4;
    v27 = v1;
    v28 = v2;
    v5 = &(char)v21;
    v10 = &v31;
    v0 = (char)v5.any(&v14);
    core::ptr::drop_in_place<[alloc::string::String; 4]>(&(char)v21);
    (char)v21.to_vec(_ZN6uu_cat7options9SHOW_ENDS17he1e587769e3cf424E, g_5730c8);
    v4 = v24;
    memcpy(&v3, &v21, 16);
    (char)v21.to_vec(_ZN6uu_cat7options8SHOW_ALL17h556bc57b3b3c2841E, g_573098);
    v2 = v24;
    memcpy(&v1, &v21, 16);
    (char)v5.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h502c20c93b9dd6c2E, g_5730b8);
    v28 = (long long)v11;
    memcpy(&v27, &v5, 16);
    v21 = v3;
    v24 = v4;
    v25 = v1;
    v26 = v2;
    v5 = &(char)v21;
    v10 = &v29;
    v39 = (char)v5.any(&v14);
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&(char)v21);
    (char)v21.to_vec(_ZN6uu_cat7options8SHOW_ALL17h556bc57b3b3c2841E, g_573098);
    v4 = v24;
    memcpy(&v3, &v21, 16);
    (char)v21.to_vec(_ZN6uu_cat7options9SHOW_TABS17he94a96780895e07fE, g_573108);
    v2 = v24;
    memcpy(&v1, &v21, 16);
    (char)v5.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h89057c668b1dc6c6E, g_5730f8);
    v28 = (long long)v11;
    memcpy(&v27, &(char)v5, 16);
    v21 = v3;
    v24 = v4;
    memcpy(&v25, &v1, 16);
    v26 = v2;
    v5 = &(char)v21;
    v10 = &v29;
    v40 = (char)v5.any(&v14);
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&(char)v21);
    v41 = v14.get_flag(_ZN6uu_cat7options13SQUEEZE_BLANK17h917dafb2ea09631fE, g_5730e8);
    (char)v21.try_get_many(&v14, _ZN6uu_cat7options4FILE17h9fa7873cc60016b3E, g_573088);
    (char)v5.unwrap(_ZN6uu_cat7options4FILE17h9fa7873cc60016b3E, g_573088, &(char)v21);
    if (v5)
    {
        v35 = v13;
        v34 = v12;
        v33 = v11;
        memcpy(&v32, &v5, 16);
        (char)v21.from_iter(&v32, &g_572c18);
        v42 = v23;
        v43 = v24;
    }
    else
    {
        v44 = ::0x498600::alloc::alloc::Global::alloc_impl();
        if (!v44)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v42 = v44;
        v43 = 1;
        (char)v21.to_vec("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v2 = v24;
        memcpy(&v1, &v21, 16);
        v42->field_10 = v24;
        *((void*)&v42->field_0) = v1;
        v22 = 1;
        v23 = v42;
        v24 = 1;
    }
    v9 = v38;
    v5 = v41;
    v6 = v40;
    v7 = v39;
    v8 = v0;
    v45 = uu_cat::cat_files(v42, v43, &v5);
    ::0x498390::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v21);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
    return v45;
}
