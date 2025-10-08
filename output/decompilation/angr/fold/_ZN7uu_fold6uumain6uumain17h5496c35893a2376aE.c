long long uu_fold::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3f2]
    char v1;  // [bp-0x3f1]
    unsigned long long v2;  // [bp-0x3f0]
    char v3;  // [bp-0x3e8]
    unsigned long long v4;  // [bp-0x3e0]
    unsigned long long v5;  // [bp-0x3d8]
    unsigned long long v6;  // [bp-0x3d0]
    unsigned long long v7;  // [bp-0x3c8]
    char v8;  // [bp-0x3c0]
    int v9;  // [bp-0x3b0]
    unsigned long long v10;  // [bp-0x3a0]
    char v11;  // [bp-0x398]
    unsigned long long v12;  // [bp-0x388]
    int v13;  // [bp-0x378], Other Possible Types: char
    unsigned long long v14;  // [bp-0x370]
    char v15;  // [bp-0x368], Other Possible Types: unsigned long long
    int v16;  // [bp-0x358]
    char v17;  // [bp-0x348]
    char v18;  // [bp-0x338]
    char v19;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v20;  // [bp-0x2f7]
    struct_0 *v21;  // [bp-0x2f0]
    struct_0 *v22;  // [bp-0x2f0]
    unsigned long long v23;  // [bp-0x2e8]
    unsigned long long v24;  // [bp-0x2e8]
    unsigned long long v25;  // [bp-0x2e0]
    struct_0 *v26;  // [bp-0x2d8]
    char v27;  // [bp-0x2d0]
    struct_0 *v29;  // r14
    unsigned long long v31;  // r12
    unsigned long long v32;  // rax
    unsigned long v34;  // r14
    unsigned long long v35;  // r14
    unsigned long long v36;  // r13
    unsigned long v37;  // r15
    unsigned long long v39;  // r12
    unsigned long long v40;  // r14
    struct_0 *v42;  // r13
    struct_0 *v45;  // rbx
    unsigned long long v46;  // rsi
    struct_0 *v47;  // rax
    int v48;  // xmm0

    v3.collect_lossy(a0, a1);
    uu_fold::handle_obsolete(&v19, v4, v5);
    v12 = v24;
    memcpy(&v11, &v19, 16);
    v2 = v25;
    v29 = v26;
    uu_fold::uu_app(&v19);
    v13.try_get_matches_from(&v19, &v11);
    if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
    {
        v7.from();
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v2, v29);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
        return v31;
    }
    v10 = *((long long *)&v17);
    v9 = v16;
    memcpy(&v8, &v15, 16);
    v6 = *((long long *)&v13);
    v7 = v14;
    v1 = v6.get_flag("bytesspaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5);
    v0 = v6.get_flag("spaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
    v19.try_get_one(&v6);
    v32 = v19.unwrap();
    if (v32)
    {
        v19.clone(v32);
        v22 = v21;
        v34 = v29;
        v35 = *((long long *)&v19);
        v23 = v24;
    }
    else
    {
        v36 = 80;
        v37 = v29;
        v34 = v37;
        v35 = v2;
        v23 = *((long long *)&v27);
        v21 = v29;
        if (v35 == 0x8000000000000000)
            goto LABEL_45648b;
    }
    v39 = v23;
    v40 = v35;
    v37 = v34;
    ::0x453b40::core::num::<impl usize>::from_ascii_radix(&v19, v21, v39);
    if (v19)
    {
        v31 = uu_fold::uumain::uumain::{{closure}}(v21, v39, (char)v20);
        if (v31)
        {
            core::ptr::drop_in_place<alloc::string::String>(v40, v21);
            v29 = v37;
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
        }
        else
        {
            v42 = &g_4e5f18.field_0;
LABEL_456480:
            core::ptr::drop_in_place<alloc::string::String>(v40, v21);
LABEL_45648b:
            v29 = v37;
            v19.try_get_many(&v6);
            v18.unwrap(&v19);
            if (*((long long *)&v18))
            {
                v19.collect(&v18);
                v45 = v22;
                v46 = v24;
            }
            else
            {
                v47 = 8.alloc_impl(24);
                if (!v47)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v45 = v47;
                v19.to_vec("-bytesspaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1);
                v15 = v24;
                v48 = *((int128_t *)&v19);
                v13 = v48;
                v45->field_10 = v24;
                *((void*)&v45->field_0) = v48;
                v19 = 1;
                v21 = v45;
                v23 = 1;
                v46 = 1;
            }
            v31 = uu_fold::fold(v45, v46, v1, v0, v36);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
        }
        if (true)
        {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v2, v29);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
            return v31;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
        return v31;
    }
    v42 = v22;
    goto LABEL_456480;
}
