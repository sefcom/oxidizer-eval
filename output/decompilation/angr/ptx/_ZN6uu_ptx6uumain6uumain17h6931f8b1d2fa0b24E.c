long long uu_ptx::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x648], Other Possible Types: char
    unsigned long long v1;  // [bp-0x640]
    unsigned long long v2;  // [sp-0x638]
    int v3;  // [bp-0x630]
    unsigned long long v4;  // [bp-0x620]
    int v5;  // [bp-0x618], Other Possible Types: char
    unsigned long long v6;  // [bp-0x610]
    char v7;  // [bp-0x608], Other Possible Types: unsigned long long
    char v8;  // [sp-0x600], Other Possible Types: unsigned int
    char v9;  // [bp-0x5f8]
    char v10;  // [bp-0x5f0]
    unsigned long long v11;  // [bp-0x5e8]
    int v12;  // [bp-0x5e0]
    int v13;  // [bp-0x5d0]
    int v14;  // [bp-0x5c0]
    char v15;  // [bp-0x5b0]
    unsigned long long v16;  // [bp-0x5a0]
    int v17;  // [bp-0x598]
    unsigned long long v18;  // [bp-0x598]
    struct_0 *v19;  // [bp-0x590]
    unsigned long long v20;  // [bp-0x588]
    int v21;  // [sp-0x578]
    unsigned long long v22;  // [bp-0x570]
    unsigned long long v23;  // [bp-0x568]
    int v24;  // [bp-0x558], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x550]
    unsigned long long v26;  // [sp-0x548]
    int v27;  // [bp-0x540]
    unsigned long long v28;  // [bp-0x530]
    void* v29;  // [bp-0x528], Other Possible Types: char, unsigned long long
    int v30;  // [bp-0x520], Other Possible Types: unsigned long long
    char v31;  // [bp-0x518], Other Possible Types: unsigned long long
    int v32;  // [bp-0x510], Other Possible Types: char
    char v33;  // [bp-0x508]
    int v34;  // [bp-0x500]
    char v35;  // [bp-0x4f8]
    int v36;  // [bp-0x4f0]
    int v37;  // [bp-0x4e0]
    int v38;  // [bp-0x4d0]
    char v39;  // [bp-0x4c0]
    unsigned long long v40;  // [bp-0x4b0]
    int v41;  // [bp-0x4a0], Other Possible Types: char
    unsigned long long v42;  // [bp-0x490]
    unsigned long long v43;  // [bp-0x488]
    unsigned long long v44;  // [bp-0x480]
    char v45;  // [bp-0x478]
    char v46;  // [bp-0x468]
    unsigned long long v47;  // [bp-0x458]
    unsigned long long v48;  // [bp-0x450]
    unsigned long long v49;  // [bp-0x448]
    unsigned long long v50;  // [bp-0x440]
    int v51;  // [bp-0x438]
    int v52;  // [bp-0x428]
    int v53;  // [bp-0x418]
    char v54;  // [bp-0x408]
    unsigned long long v55;  // [bp-0x3f8]
    int v56;  // [bp-0x3f0], Other Possible Types: char
    unsigned long long v57;  // [bp-0x3e0]
    char v58;  // [bp-0x3d8]
    unsigned long long v59;  // [bp-0x3c8]
    char v60;  // [bp-0x3c0]
    unsigned long long v61;  // [bp-0x3b0]
    char v62;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v63;  // [bp-0x3a0]
    unsigned long long v64;  // [bp-0x398]
    int v65;  // [bp-0x390]
    int v66;  // [bp-0x380]
    int v67;  // [bp-0x370]
    void* v68;  // [bp-0x360], Other Possible Types: char
    char v69;  // [bp-0x350]
    void* v70;  // [bp-0x320]
    char v71;  // [bp-0xe0]
    unsigned long long v73;  // rbx
    struct_0 *v74;  // rax
    struct_0 *v75;  // r14
    unsigned long long v76;  // rax
    int v77;  // xmm0

    uu_ptx::uu_app(&v62);
    v5.try_get_matches_from(&v62, a0, a1);
    if ((char)(((0 ^ *((long long *)&v5)) & (0 ^ -(*((long long *)&v5)))) >> 63))
        return v44.from();
    v47 = v11;
    memcpy(&v46, &v9, 16);
    memcpy(&v45, &v7, 16);
    v43 = *((long long *)&v5);
    v44 = v6;
    uu_ptx::get_config(&v62, &v43);
    v73 = v63;
    if (v62 != 0x8000000000000000)
    {
        v55 = *((long long *)&v69);
        memcpy(&v54, &v68, 16);
        v53 = v67;
        v52 = v66;
        v51 = v65;
        v48 = v62;
        v49 = v73;
        v50 = v64;
        v5.try_get_many(&v43, _ZN6uu_ptx7options4FILE17h12bd290e3023dffcE, g_73bfa0);
        v29.unwrap(_ZN6uu_ptx7options4FILE17h12bd290e3023dffcE, g_73bfa0, &v5);
        memcpy(&v63, &v29, 16);
        memcpy(&v65, &v31, 16);
        memcpy(&v66, &v33, 16);
        memcpy(&v67, &v35, 16);
        v62 = 1;
        v68 = 0;
        v70 = 0;
        if ((char)v55)
        {
            memcpy(&v71, &v62, 200);
            v0.from_iter(&v71, &g_73ad98);
            if (!v2)
            {
                v5.to_vec("-operandptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
                v31 = v7;
                memcpy(&v29, &v5, 16);
                v0.push(&v29);
            }
            v20 = v2;
            *((int128_t *)&v17) = *((int128_t *)&v0);
            v5.to_vec("-operandptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
            v23 = v7;
            *((int128_t *)&v21) = *((int128_t *)&v5);
            goto LABEL_595ee5;
        }
        v74 = 24.alloc_impl();
        if (!v74)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v75 = v74;
        v0.next(&v62);
        v5.to_vec("-operandptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v31 = v7;
        memcpy(&v29, &v5, 16);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            v7 = v31;
            memcpy(&v5, &v29, 16);
        }
        else
        {
            v7 = v2;
            memcpy(&v5, &v0, 16);
            ::0x5950b0::core::ptr::drop_in_place<alloc::string::String>(&v29);
        }
        v75->field_10 = v7;
        v75->field_0 = *((int128_t *)&v5);
        v18 = 1;
        v19 = v75;
        v20 = 1;
        v0.next(&v62);
        v5.to_vec("-operandptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v31 = v7;
        memcpy(&v29, &v5, 16);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            v7 = v31;
            memcpy(&v5, &v29, 16);
        }
        else
        {
            v7 = v2;
            memcpy(&v5, &v0, 16);
            ::0x5950b0::core::ptr::drop_in_place<alloc::string::String>(&v29);
        }
        *((int128_t *)&v21) = *((int128_t *)&v5);
        v23 = v7;
        v41.next(&v62);
        if (*((long long *)&v41) == 0x8000000000000000)
        {
            ::0x5951a0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v41);
LABEL_595ee5:
            v5.new(&v43, &v48);
            v76 = *((long long *)&v5);
            v73 = v6;
            if (v76 == 0x8000000000000000)
                goto LABEL_5961de;
            v40 = v16;
            memcpy(&v39, &v15, 16);
            v38 = v14;
            v77 = *((int128_t *)&v8);
            v37 = v13;
            v36 = v12;
            *((int128_t *)&v34) = *((int128_t *)&v10);
            v32 = v77;
            v29 = v76;
            v30 = v73;
            v31 = v7;
            uu_ptx::read_input(&v5, v19, v20);
            v0.map_err_context(&v5);
            v73 = v1;
            if (*((long long *)&v0))
            {
                v28 = v4;
                v27 = v3;
                v24 = *((long long *)&v0);
                v25 = v73;
                v26 = v2;
                uu_ptx::create_word_set(&v5, &v48, &v29, &v24);
                v73 = uu_ptx::write_traditional_output(&v48, &v24, &v5, v22, v23);
                v5.drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>();
                v24.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                core::ptr::drop_in_place<uu_ptx::WordFilter>(&v29);
                ::0x5950b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
                ::0x595120::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v18);
                core::ptr::drop_in_place<uu_ptx::Config>(&v48);
            }
            else
            {
                core::ptr::drop_in_place<uu_ptx::WordFilter>(&v29);
LABEL_5961de:
                ::0x5950b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
                ::0x595120::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v18);
                core::ptr::drop_in_place<uu_ptx::Config>(&v48);
            }
        }
        else
        {
            v26 = v42;
            v24 = v41;
            v5.to_vec("operandptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 7);
            v2 = v7;
            *((int128_t *)&v0) = *((int128_t *)&v5);
            v29 = 0;
            *((int128_t *)&v30) = (int128_t)(&v24)[8];
            v32 = 1;
            v5.spec_to_string(&v29);
            v59 = v2;
            memcpy(&v58, &v0, 16);
            memcpy(&v60, &v5, 16);
            v61 = v7;
            v5.from_iter(&v58);
            uucore::mods::locale::get_message_with_args(&v56, "ptx-error-extra-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 23, &v5);
            v8 = 1;
            v5 = v56;
            v7 = v57;
            v73 = v5.new();
            ::0x5950b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v24);
            goto LABEL_5961de;
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
    return v73;
}
