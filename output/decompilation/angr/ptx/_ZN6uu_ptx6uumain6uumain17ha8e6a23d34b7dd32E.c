long long uu_ptx::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x578]
    unsigned long long v1;  // [bp-0x578]
    unsigned long long v2[3];  // [bp-0x570]
    unsigned long long v3;  // [bp-0x568]
    char v4;  // [bp-0x558]
    unsigned long long v5;  // [bp-0x558]
    unsigned long long v6;  // [bp-0x550]
    unsigned long long v7;  // [bp-0x548]
    int v8;  // [bp-0x540]
    unsigned long long v9;  // [bp-0x530]
    void* v10;  // [bp-0x528], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [bp-0x520]
    char v12;  // [bp-0x518], Other Possible Types: unsigned long long
    int v13;  // [bp-0x510], Other Possible Types: char
    char v14;  // [bp-0x508]
    int v15;  // [bp-0x500]
    unsigned long long v16;  // [bp-0x4f8]
    int v17;  // [bp-0x4f0]
    int v18;  // [bp-0x4e0]
    int v19;  // [bp-0x4d0]
    char v20;  // [bp-0x4c0]
    unsigned long long v21;  // [bp-0x4b0]
    char *v22;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x4a0]
    unsigned long long v24;  // [bp-0x498]
    int v25;  // [bp-0x490]
    unsigned long long v26;  // [bp-0x480]
    unsigned long long v27;  // [bp-0x478]
    unsigned long long v28;  // [bp-0x470]
    char v29;  // [bp-0x468]
    char v30;  // [bp-0x458]
    unsigned long long v31;  // [bp-0x448]
    unsigned long long v32;  // [bp-0x440]
    unsigned long long v33;  // [bp-0x438]
    unsigned long long v34;  // [bp-0x430]
    char v35;  // [bp-0x428]
    int v36;  // [bp-0x418]
    int v37;  // [bp-0x408]
    int v38;  // [bp-0x3f8]
    unsigned long long v39;  // [bp-0x3e8]
    int v40;  // [bp-0x3e0], Other Possible Types: char
    unsigned long long v41;  // [bp-0x3d0]
    char v42;  // [bp-0x3c8], Other Possible Types: unsigned long long
    int v43;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v44;  // [bp-0x3c8]
    unsigned long long v45;  // [bp-0x3c0]
    unsigned long long v46;  // [bp-0x3c0]
    char *v47;  // [bp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v48;  // [bp-0x3b8]
    char v49;  // [bp-0x3b0], Other Possible Types: unsigned int, unsigned long long
    void* v50;  // [bp-0x3a8]
    int v51;  // [bp-0x3a0]
    int v52;  // [bp-0x390]
    int v53;  // [bp-0x380]
    int v54;  // [bp-0x370], Other Possible Types: char
    char v55;  // [bp-0x360]
    char v56;  // [bp-0x350]
    unsigned long long v57;  // [bp-0xf8]
    char v58;  // [bp-0xf0]
    char v59;  // [bp-0xe0]
    char v60;  // [bp-0xd0]
    char v61;  // [bp-0xc0]
    void* v62;  // [bp-0xb0]
    void* v63;  // [bp-0x70]
    unsigned long long v65;  // rdi
    unsigned long long v66;  // r15
    unsigned long long v67;  // rbx
    unsigned long long v68;  // r14
    unsigned long long v69;  // r13
    unsigned long long v70[3];  // rax
    unsigned long long v71[3];  // rbx
    int v72;  // xmm0

    uu_ptx::uu_app(&v42);
    (char)v44.try_get_matches_from(&v42, a0, a1);
    v65 = v11;
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
        return v28.from();
    v31 = v16;
    memcpy(&v30, &v14, 16);
    memcpy(&v29, &v12, 16);
    v27 = v10;
    v28 = v11;
    uu_ptx::get_config(&v42, &v27);
    v66 = v45;
    if (v43 == 0x8000000000000000)
    {
LABEL_51b9dd:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
        return v66;
    }
    v39 = *((long long *)&v54);
    v38 = v53;
    v37 = v52;
    v36 = v51;
    memcpy(&v35, &v49, 16);
    v32 = v43;
    v33 = v66;
    v34 = v47;
    v42.try_get_many(&v27, _ZN6uu_ptx7options4FILE17h5148080f63805a6cE, g_651e38);
    (char)v44.unwrap(_ZN6uu_ptx7options4FILE17h5148080f63805a6cE, g_651e38, &v42);
    memcpy(&v58, &v10, 16);
    memcpy(&v59, &v12, 16);
    memcpy(&v60, &v14, 16);
    memcpy(&v61, &v16, 16);
    v57 = 1;
    v62 = 0;
    v63 = 0;
    if ((char)v39)
    {
        v4.collect(&v57);
        if (!v7)
        {
            v42.to_vec("-extra operand /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
            v12 = v47;
            memcpy(&(char)v44, &v42, 16);
            v4.push(&(char)v44);
        }
        v3 = v7;
        *((int128_t *)&v0) = *((int128_t *)&v4);
        v42.to_vec("-extra operand /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
        v67 = v43;
        v68 = v45;
        v69 = v47;
        goto LABEL_51b73d;
    }
    else
    {
        v70 = 8.alloc_impl(24);
        if (!v70)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v71 = v70;
        (char)v44.next(&v57);
        v42.to_vec("-extra operand /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
        if (v10 == 0x8000000000000000)
        {
            v48 = v47;
            v44 = v43;
            v46 = v45;
        }
        else
        {
            core::ptr::drop_in_place<alloc::string::String>(v43, v45);
            v12 = v48;
            v44 = v10;
            v46 = v11;
        }
        v71[0] = v44;
        v71[1] = v46;
        v71[2] = v48;
        v1 = 1;
        v2[0] = v71;
        v3 = 1;
        (char)v44.next(&v57);
        v42.to_vec("-extra operand /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
        if (v10 == 0x8000000000000000)
        {
            v69 = v47;
            v11 = v45;
            v10 = v43;
        }
        else
        {
            v69 = v12;
            core::ptr::drop_in_place<alloc::string::String>(v43, v45);
        }
        v67 = v10;
        v68 = v11;
        v4.next(&v57);
        if (v5 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
LABEL_51b73d:
            v42.new(&v27, &v32);
            v66 = v45;
            if (v43 != 0x8000000000000000)
            {
                v21 = *((long long *)&v56);
                memcpy(&v20, &v55, 16);
                v19 = v54;
                v72 = *((int128_t *)&v49);
                v18 = v53;
                v17 = v52;
                v15 = v51;
                v13 = v72;
                v10 = v43;
                v11 = v66;
                v12 = v47;
                uu_ptx::read_input(&v42, v2, v3);
                v4.map_err_context(&v42);
                v66 = v6;
                if (v5)
                {
                    v26 = v9;
                    v25 = v8;
                    v22 = v5;
                    v23 = v66;
                    v24 = v7;
                    uu_ptx::create_word_set(&v42, &v32, &v10, &v22);
                    v66 = uu_ptx::write_traditional_output(&v32, &v22, &v42, v68, v69);
                    v42.drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>();
                    v22.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                }
                core::ptr::drop_in_place<uu_ptx::WordFilter>(&v10);
            }
        }
        else
        {
            v10 = 0;
            v11 = v6;
            v12 = v7;
            v13 = 1;
            v22 = &v10;
            v23 = <os_display::Quoted as core::fmt::Display>::fmt;
            v42 = &g_650498;
            v45 = 1;
            v50 = 0;
            v47 = &v22;
            v49 = 1;
            v40.map_or_else(&v42);
            v49 = 1;
            v43 = v40;
            v47 = v41;
            v66 = v42.new();
            core::ptr::drop_in_place<alloc::string::String>(v5, v6);
        }
        core::ptr::drop_in_place<alloc::string::String>(v67, v68);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
        core::ptr::drop_in_place<uu_ptx::Config>(&v32);
        goto LABEL_51b9dd;
    }
}
