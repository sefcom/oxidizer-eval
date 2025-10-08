long long uu_touch::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x459]
    unsigned long long v1;  // [bp-0x458]
    unsigned long long v2;  // [bp-0x458]
    void* v3;  // [bp-0x450]
    void* v4;  // [bp-0x450]
    unsigned long long v5;  // [bp-0x448]
    void* v6;  // [bp-0x440]
    int v7;  // [bp-0x438], Other Possible Types: char
    struct_0 **v8;  // [bp-0x430]
    unsigned long long v9;  // [bp-0x428]
    int v10;  // [bp-0x418]
    unsigned long long v11;  // [bp-0x418]
    unsigned long long v12;  // [bp-0x418]
    void* v13;  // [bp-0x410]
    unsigned long long v14;  // [bp-0x408]
    unsigned int v15;  // [bp-0x408]
    unsigned long long v16;  // [bp-0x400]
    char v17;  // [bp-0x3f8]
    unsigned long long v18;  // [bp-0x3f0]
    unsigned long long v19;  // [bp-0x3e8]
    unsigned long long v20;  // [bp-0x3e0]
    unsigned long long v21;  // [bp-0x3d8]
    char v22;  // [bp-0x3d0]
    char v23;  // [bp-0x3c0]
    unsigned long long v24;  // [bp-0x3b0]
    char v25;  // [bp-0x3a8], Other Possible Types: unsigned long long
    int v26;  // [bp-0x3a0], Other Possible Types: char
    char v27;  // [bp-0x398]
    int v28;  // [bp-0x390], Other Possible Types: char
    char v29;  // [bp-0x388]
    char v30;  // [bp-0x380], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0x378]
    unsigned long long v32;  // [bp-0x370]
    char v33;  // [bp-0x368], Other Possible Types: unsigned long long
    int v34;  // [bp-0x360]
    int v35;  // [bp-0x350]
    unsigned long long v36;  // [bp-0x340]
    unsigned long long v37;  // [bp-0x338]
    char v38;  // [bp-0x330]
    char v39;  // [bp-0x320]
    char v40;  // [bp-0x310]
    unsigned long long v41;  // [bp-0x300]
    char v42;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v43;  // [bp-0x2f8]
    unsigned long v44;  // [bp-0x2f8], Other Possible Types: unsigned long long
    void* v45;  // [bp-0x2f0]
    void* v46;  // [bp-0x2f0]
    unsigned long long v47;  // [bp-0x2e8]
    unsigned long long v48;  // [bp-0x2e8]
    char v49;  // [bp-0x2e0]
    unsigned long long v50;  // [bp-0x2d0]
    char v51;  // [bp-0x2c8]
    char v52;  // [bp-0x2c7]
    char v53;  // [bp-0x2c6]
    char v54;  // [bp-0x2c5]
    void* v56;  // r15
    unsigned long long v57[3];  // rbp
    unsigned long long v58;  // rax
    void* v60;  // r15
    unsigned long long v61;  // r12
    unsigned long long v63;  // rax
    void* v65;  // rdx
    unsigned long long v66;  // rdi
    unsigned long long v67;  // rbx
    unsigned long long v68;  // r12
    void* v69;  // r15
    char v70;  // bpl
    void* v71;  // rbx
    char v72;  // al
    char v73;  // al

    uu_touch::uu_app(&v42);
    v25.try_get_matches_from(&v42, a0, a1);
    if ((char)(((0 ^ v25) & (0 ^ -(v25))) >> 63))
        return *((long long *)&v26).from();
    v24 = v31;
    memcpy(&v23, &v29, 16);
    memcpy(&v22, &v27, 16);
    v20 = v25;
    v21 = *((long long *)&v26);
    v42.try_get_many(&v20, _ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE, g_679d08);
    v25.unwrap(_ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE, g_679d08, &v42);
    if (!v25)
    {
        v71 = uu_touch::uumain::uumain::{{closure}}();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
        return v71;
    }
    v41 = v32;
    memcpy(&v40, &v30, 16);
    memcpy(&v39, &v28, 16);
    v37 = v25;
    memcpy(&v38, &v26, 16);
    v7.collect(&v37);
    v56 = (unsigned int)v20.get_flag(_ZN8uu_touch7options8NO_DEREF17he84667771222874eE, g_679cf8);
    v42.try_get_one(&v20, _ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E, g_679cc8);
    v57 = _ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E.unwrap(g_679cc8, &v42);
    v42.try_get_one(&v20, _ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE, g_679cb8);
    v58 = _ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE.unwrap(g_679cb8, &v42);
    v0 = (char)v56;
    v60 = v56;
    v61 = 0x8000000000000000;
    if (v58)
    {
        v42.clone(v58);
        v16 = v47;
        v43 = v42;
        v46 = v45;
        v60 = v45;
        v61 = v42;
    }
    v45 = v46;
    v44 = v43;
    v6 = v60;
    v5 = v61;
    v42.try_get_one(&v20, _ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE, g_679cd8);
    v63 = _ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE.unwrap(g_679cd8, &v42);
    if (v63)
    {
        v42.clone(v63);
        v48 = v47;
        v46 = v45;
    }
    else
    {
        v48 = _ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE;
        v44 = 0x8000000000000000;
    }
    v65 = v46;
    v66 = v44;
    v67 = v48;
    if (v61 == 0x8000000000000000)
        v60 = 0;
    v1 = v66;
    v3 = v65;
    if (v66 == 0x8000000000000000)
        v65 = 0;
    if ((char)uu_touch::is_first_filename_timestamp(v57, v60, v16, v65, v67, v8, v9))
    {
        if (!v9)
            core::panicking::panic_bounds_check(0, 0, &g_6784a8); /* do not return */
        if (*(v8)->field_10 == 10)
            uu_touch::shr2(&v42, *(v8)->field_8, 10);
        else
            v42.clone(*(v8));
        v68 = v44;
        v69 = v45;
        v67 = v47;
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v1, v3);
        v3 = v69;
        v1 = v68;
        v42.to_vec(v8 + 1, v9 - 1);
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(*((long long *)&v7), v8);
        v9 = v47;
        *((int128_t *)&v7) = *((int128_t *)&v44);
        v4 = v69;
        v2 = v68;
        if (!v57)
            goto LABEL_52aa02;
LABEL_52a93b:
        v42.to_vec(v57[1], v57[2]);
        v14 = v47;
        *((int128_t *)&v10) = *((int128_t *)&v44);
        v70 = 1;
    }
    else
    {
        v69 = v3;
        v68 = v1;
        v4 = v69;
        v2 = v68;
        if (v57)
            goto LABEL_52a93b;
LABEL_52aa02:
        if (v68 == 0x8000000000000000)
        {
            v11 = 9223372036854775809;
            v70 = 1;
        }
        else
        {
            uu_touch::parse_timestamp(&v42, v69, v67);
            if ((int)v44 == 1)
            {
                core::ptr::drop_in_place<alloc::string::String>(v2, v4);
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v5, v6);
                core::ptr::drop_in_place<alloc::vec::Vec<usize>>((long long)v7, v8);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
                return v45;
            }
            v13 = v45;
            v15 = v47;
            v12 = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v2, v4);
        }
    }
    v42.into_iter(&v7);
    v17.collect(&v42);
    v72 = v20.get_flag(_ZN8uu_touch7options9NO_CREATE17h76be8c25dbc74278E, g_679ce8);
    v73 = uu_touch::determine_atime_mtime_change(&v20);
    v51 = v72;
    v52 = v0;
    memcpy(&v49, &(char)v11, 16);
    v50 = v14;
    v42 = v5;
    v45 = v6;
    v47 = v16;
    v54 = v73;
    v53 = 0;
    uu_touch::touch(&v33, v18, v19, &v42);
    if (v33 == 9223372036854775812)
    {
        core::ptr::drop_in_place<uu_touch::Options>(&v42);
        v17.drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>();
        if (v2 != 0x8000000000000000 && v70)
            core::ptr::drop_in_place<alloc::string::String>(v2, v4);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
        return 0;
    }
    else
    {
        v30 = v36;
        v28 = v35;
        v26 = v34;
        v25 = v33;
        v71 = v25.new();
        core::ptr::drop_in_place<uu_touch::Options>(&v42);
        v17.drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>();
        if ((v2 != 0x8000000000000000 & v70) != 1)
        {
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
            return v71;
        }
        core::ptr::drop_in_place<alloc::string::String>(v2, v4);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
        return v71;
    }
}
