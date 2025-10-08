long long uu_cat::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3c8]
    struct_0 *v1;  // [bp-0x3c0]
    struct_0 *v2;  // [bp-0x3b8], Other Possible Types: char
    char v3;  // [bp-0x3b8]
    char v4;  // [bp-0x3b0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x3b0]
    int v6;  // [bp-0x3a8], Other Possible Types: char *, char
    char v7;  // [bp-0x3a7]
    char v8;  // [bp-0x3a6]
    char v9;  // [bp-0x3a5]
    char v10;  // [bp-0x3a4]
    char *v11;  // [bp-0x3a0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x398], Other Possible Types: unsigned long long
    char v13;  // [bp-0x388]
    unsigned long long v14;  // [bp-0x378]
    unsigned long long v15;  // [bp-0x370]
    unsigned long long v16;  // [bp-0x368]
    char v17;  // [bp-0x360]
    char v18;  // [bp-0x350]
    unsigned long long v19;  // [bp-0x340]
    char v20;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x338]
    struct_0 *v22;  // [bp-0x330]
    struct_0 *v23;  // [bp-0x330]
    unsigned long long v24;  // [bp-0x328]
    unsigned long long v25;  // [bp-0x328]
    unsigned long long v26;  // [bp-0x320]
    struct_0 *v27;  // [bp-0x318]
    unsigned long long v28;  // [bp-0x310]
    int v29;  // [bp-0x308], Other Possible Types: unsigned long long
    int v30;  // [bp-0x308]
    struct_0 *v31;  // [bp-0x300]
    unsigned long long v32;  // [bp-0x2f8]
    char v33;  // [bp-0x2f0]
    unsigned long long v34;  // [bp-0x2e0]
    char v35;  // [bp-0x2d8]
    char v36;  // [bp-0x70]
    unsigned long long v38;  // rdi
    char v39;  // al
    char v40;  // al
    struct_0 *v41;  // r13
    unsigned long long v42;  // rbp
    struct_0 *v43;  // rax
    int v44;  // xmm0
    unsigned long long v45;  // rax

    uu_cat::uu_app(&v20);
    (char)v6.try_get_matches_from(&v20, a0, a1);
    v38 = v11;
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
        return v16.from();
    v19 = v14;
    memcpy(&v18, &v13, 16);
    memcpy(&v17, &v12, 16);
    v15 = *((long long *)&v6);
    v16 = v11;
    v0 = 1;
    if (!(char)v15.get_flag(_ZN6uu_cat7options15NUMBER_NONBLANK17h21a967aa4e64630bE, g_4eaab0))
    {
        v0 = v15.get_flag(_ZN6uu_cat7options6NUMBER17h695181ced15c3b18E, g_4eaae0);
        v0 *= 2;
    }
    v20.to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE, g_4eaaa0);
    v4 = v20;
    v1 = v22;
    v20.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E, g_4eaac0);
    v2 = v22;
    v20.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E, g_4eab00);
    (char)v6.to_vec(_ZN6uu_cat7options16SHOW_NONPRINTING17h5b72b06df7137a06E, g_4eab20);
    v34 = v12;
    memcpy(&v33, &v6, 16);
    v21 = v4;
    v23 = v1;
    v25 = v24;
    v26 = v20;
    v27 = v2;
    v28 = v24;
    v29 = v20;
    v31 = v22;
    v32 = v24;
    v6 = &v21;
    v11 = &v35;
    v4 = (char)v6.any(&v15);
    core::ptr::drop_in_place<[alloc::string::String; 4]>(&v21);
    v21.to_vec(_ZN6uu_cat7options9SHOW_ENDS17h1ee7bf9af15f8ab5E, g_4eaad0);
    v1 = v23;
    v21.to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE, g_4eaaa0);
    (char)v6.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E, g_4eaac0);
    v32 = v12;
    *((int128_t *)&v30) = *((int128_t *)&v6);
    v20 = v21;
    v22 = v1;
    v24 = v25;
    v26 = v21;
    v27 = v23;
    v28 = v25;
    v6 = &v20;
    v11 = &v33;
    v2 = (char)v6.any(&v15);
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&v20);
    v20.to_vec(_ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE, g_4eaaa0);
    v1 = v22;
    v20.to_vec(_ZN6uu_cat7options9SHOW_TABS17h8dabaa7165eb4951E, g_4eab10);
    (char)v6.to_vec(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E, g_4eab00);
    v32 = v12;
    *((int128_t *)&v29) = *((int128_t *)&v6);
    v21 = v20;
    v23 = v1;
    v25 = v24;
    v26 = v20;
    v27 = v22;
    v28 = v24;
    v6 = &v21;
    v11 = &v33;
    v39 = (char)v6.any(&v15);
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&v21);
    v40 = v15.get_flag(_ZN6uu_cat7options13SQUEEZE_BLANK17ha17d626b5583237cE, g_4eaaf0);
    v21.try_get_many(&v15, _ZN6uu_cat7options4FILE17h55d7a2ab59327302E, g_4eaa90);
    v36.unwrap(_ZN6uu_cat7options4FILE17h55d7a2ab59327302E, g_4eaa90, &v21);
    if (*((long long *)&v36))
    {
        v21.collect(&v36);
        v41 = v23;
        v42 = v25;
    }
    else
    {
        v43 = 8.alloc_impl(24);
        if (!v43)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v41 = v43;
        v42 = 1;
        v21.to_vec("-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
        v12 = v25;
        v44 = *((int128_t *)&v21);
        v6 = v44;
        v41->field_10 = v25;
        *((void*)&v41->field_0) = v44;
        v21 = 1;
        v22 = v41;
        v24 = 1;
    }
    v10 = v0;
    v6 = v40;
    v7 = v39;
    v8 = v3;
    v9 = v5;
    v45 = uu_cat::cat_files(v41, v42, &v6);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v21);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
    return v45;
}
