long long uu_fold::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x438]
    unsigned long long v1;  // [bp-0x428]
    char v2;  // [bp-0x418]
    unsigned long long v3;  // [bp-0x410]
    unsigned long long v4;  // [bp-0x408]
    char v5;  // [bp-0x400]
    unsigned long long v6;  // [bp-0x3f8]
    int v7;  // [bp-0x3f0]
    int v8;  // [bp-0x3e0]
    int v9;  // [bp-0x3d0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x3c0]
    unsigned long long v11;  // [bp-0x3b8]
    int v12;  // [bp-0x3b0]
    int v13;  // [bp-0x3a0]
    unsigned long long v14;  // [bp-0x390]
    int v15;  // [bp-0x388], Other Possible Types: char
    unsigned long long v16;  // [bp-0x378]
    int v17;  // [bp-0x368]
    int v18;  // [bp-0x368]
    unsigned long long v19;  // [bp-0x358]
    int v20;  // [bp-0x348], Other Possible Types: char
    char v21;  // [bp-0x338]
    int v22;  // [bp-0x328]
    int v23;  // [bp-0x318]
    int v24;  // [bp-0x308]
    char v25;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x2f0]
    unsigned long long v27;  // [bp-0x2f0]
    int v28;  // [bp-0x2e8], Other Possible Types: struct_0 *, char
    struct_0 *v29;  // [bp-0x2e8]
    unsigned long long v30;  // [bp-0x2e0]
    int v31;  // [bp-0x2d8]
    char v32;  // [bp-0x2c8]
    unsigned long long v34;  // r14
    unsigned int v35;  // eax
    unsigned int v36;  // eax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // r14
    struct_0 *v40;  // r15
    unsigned long long v41;  // rsi
    struct_0 *v42;  // rax

    v2.collect_lossy(a0, a1);
    uu_fold::handle_obsolete(&v25, v3, v4);
    v16 = v30;
    memcpy(&v15, &v25, 16);
    v1 = *((long long *)&v32);
    v0 = v31;
    uu_fold::uu_app(&v25);
    v19 = v16;
    v17 = v15;
    v5.try_get_matches_from(&v25, &v17);
    if ((char)(((0 ^ *((long long *)&v5)) & (0 ^ -(*((long long *)&v5)))) >> 63))
    {
        v34 = v11.from();
LABEL_49c053:
        ::0x49b670::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v0);
    }
    else
    {
        v14 = *((long long *)&v9);
        v13 = v8;
        v12 = v7;
        v10 = *((long long *)&v5);
        v11 = v6;
        v35 = v10.get_flag("bytesspaceswidth/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
        v36 = v10.get_flag("spaceswidth/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
        v25.try_get_one(&v10, "width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
        v37 = "width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs".unwrap(5, &v25);
        if (v37)
        {
            v25.clone(v37);
            v38 = v25;
            memcpy(&v20, &v28, 16);
        }
        else
        {
            v38 = (long long)v0;
            memcpy(&v20, &v0, 16);
            v39 = 80;
            if (v38 == 0x8000000000000000)
                goto LABEL_49c200;
        }
        v26 = v38;
        v28 = v20;
        ::0x49b3d0::core::num::<impl u64>::from_str_radix(&v5, v29, v30);
        if (v5)
        {
            v34 = uu_fold::uumain::uumain::{{closure}}(v29, v30, (&v5)[1]);
            if (v34)
            {
                ::0x49b580::core::ptr::drop_in_place<alloc::string::String>(&v26);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
                if (!(0))
                    goto LABEL_49c053;
            }
            else
            {
                v39 = &g_5768d8;
LABEL_49c1f3:
                ::0x49b580::core::ptr::drop_in_place<alloc::string::String>(&v26);
LABEL_49c200:
                v25.try_get_many(&v10, "filesizei128", 4);
                v5.unwrap("filesizei128", 4, &v25);
                if (*((long long *)&v5))
                {
                    v24 = v9;
                    v23 = v8;
                    v22 = v7;
                    memcpy(&v21, &v5, 16);
                    v25.from_iter(&v21, &g_5768a0);
                    v40 = v29;
                    v41 = v30;
                }
                else
                {
                    v42 = 24.alloc_impl();
                    if (!v42)
                        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                    v40 = v42;
                    v25.to_vec("-bytesspaceswidth/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
                    v19 = v30;
                    memcpy(&v17, &v25, 16);
                    v40->field_10 = v30;
                    *((void*)&v40->field_0) = v18;
                    v27 = 1;
                    v28 = v40;
                    v30 = 1;
                    v41 = 1;
                }
                v34 = uu_fold::fold(v40, v41, v35, v36, v39);
                ::0x49b5f0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v25);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
                ::0x49b670::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v0);
            }
        }
        else
        {
            v39 = v6;
            goto LABEL_49c1f3;
        }
    }
    ::0x49b5f0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    return v34;
}
