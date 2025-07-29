long long uu_comm::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x450], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x448]
    int v2;  // [bp-0x440]
    int v3;  // [bp-0x430]
    char v4;  // [bp-0x420]
    char v5;  // [bp-0x410]
    struct_0 *v6;  // [bp-0x408]
    unsigned long v7;  // [bp-0x400]
    unsigned long long v8;  // [bp-0x3f8]
    unsigned long long v9;  // [bp-0x3f0]
    int v10;  // [bp-0x3e8]
    int v11;  // [bp-0x3d8]
    unsigned long long v12;  // [bp-0x3c8]
    unsigned long long v13;  // [bp-0x3c0]
    unsigned long long v14;  // [bp-0x3b8]
    int v15;  // [bp-0x3b0]
    int v16;  // [bp-0x3a0]
    char v17;  // [bp-0x390]
    unsigned int v18;  // [bp-0x38f]
    unsigned int v19;  // [bp-0x38c]
    unsigned long long v20;  // [bp-0x388]
    unsigned long long v21;  // [bp-0x380]
    int v22;  // [bp-0x378]
    int v23;  // [bp-0x368]
    char v24;  // [bp-0x358]
    unsigned int v25;  // [bp-0x357]
    unsigned int v26;  // [bp-0x354]
    int v27;  // [bp-0x350], Other Possible Types: char
    unsigned long long v28;  // [bp-0x340]
    char v29;  // [bp-0x338]
    int v30;  // [bp-0x328]
    int v31;  // [bp-0x318]
    char v32;  // [bp-0x308]
    int v33;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v34;  // [bp-0x2e8]
    unsigned int v35;  // [bp-0x2e0]
    unsigned int v37;  // ebp
    unsigned long long v38[3];  // rbx
    unsigned long long v39[3];  // r15
    unsigned int v40;  // ebp
    unsigned long long v41;  // rbx
    unsigned long long v43[3];  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // r14
    char v46;  // cc_dep1
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rdi

    uu_comm::uu_app(&v33);
    v0.try_get_matches_from(&v33, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v9.from();
    v12 = *((long long *)&v4);
    v11 = v3;
    v10 = v2;
    v8 = v0;
    v9 = v1;
    v37 = ((char)v8.get_flag("zero-terminatedFILE1FILE2/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15) ? 0 : 10);
    v33.try_get_one(&v8, "FILE1FILE2/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
    v38 = "FILE1FILE2/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs".unwrap(5, &v33);
    if (v38)
    {
        v33.try_get_one(&v8, "FILE2/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
        v39 = "FILE2/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs".unwrap(5, &v33);
        if (v39)
        {
            v40 = v37;
            uu_comm::open_file(&v33, v38[1], v38[2], v40);
            v0.map_err_context(&v33, v38);
            v41 = v0;
            if (v4 != 11)
            {
                v16 = v3;
                v15 = v2;
                v18 = *((int *)&(&v4)[1]);
                v19 = *((int *)&(&v4)[4]);
                v13 = v41;
                v14 = v1;
                v17 = v4;
                uu_comm::open_file(&v33, v39[1], v39[2], v40);
                v0.map_err_context(&v33, v39);
                v41 = v0;
                if (v4 != 11)
                {
                    v23 = v3;
                    v22 = v2;
                    v25 = *((int *)&(&v4)[1]);
                    v26 = *((int *)&(&v4)[4]);
                    v20 = v41;
                    v21 = v1;
                    v24 = v4;
                    v33.try_get_many(&v8, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
                    v0.unwrap("output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16, &v33);
                    if (!v0)
                        core::option::unwrap_failed(&g_571f90); /* do not return */
                    memcpy(&v32, &v4, 16);
                    v31 = v3;
                    v30 = v2;
                    memcpy(&v29, &v0, 16);
                    v5.from_iter(&v29, &g_571fa8);
                    if (!v7)
                        core::slice::index::slice_start_index_len_fail(1, 0, &g_572078); /* do not return */
                    v0 = &v6[1].field_8;
                    v1 = (char *)v6 + 24 * v7;
                    do
                    {
                        if (!v0.next())
                        {
                            if (!v7)
                                core::panicking::panic_bounds_check(0, 0, &g_571fc0); /* do not return */
                            v45 = v6[1].padding_0;
                            v46 = v6->field_8.equal(v6[1].padding_0, 1, 0);
                            if (v46)
                            {
                                v47 = &g_42ec62;
                                if (!(v46))
                                    goto LABEL_497814;
                                goto LABEL_497813;
                            }
                            else
                            {
                                v47 = v6->field_8;
                                if (v46)
                                {
LABEL_497813:
                                    v45 = 1;
                                    goto LABEL_497816;
                                }
                                else
                                {
LABEL_497814:
LABEL_497816:
                                    v41 = uu_comm::comm(&v13, &v20, v47, v45, &v8);
                                    ::0x496d70::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                                    core::ptr::drop_in_place<uu_comm::LineReader>(&v20);
                                    goto LABEL_497854;
                                }
                            }
                        }
                        if (!v7)
                            core::panicking::panic_bounds_check(0, 0, &g_571fd8); /* do not return */
                    } while ((char)v43[1].equal(v43[2], v6->field_8.index(v6[1].padding_0), v44));
                    uucore::mods::locale::get_message(&v27, "comm-error-multiple-conflicting-delimiters", 42);
                    v35 = 1;
                    v33 = v27;
                    v34 = v28;
                    v41 = v33.new();
                    ::0x496d70::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v5);
                    core::ptr::drop_in_place<uu_comm::LineReader>(&v20);
                }
LABEL_497854:
                core::ptr::drop_in_place<uu_comm::LineReader>(&v13);
            }
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
            return v41;
        }
        v48 = &g_571f78;
    }
    else
    {
        v48 = &g_571f60;
    }
    core::option::unwrap_failed(v48); /* do not return */
}
