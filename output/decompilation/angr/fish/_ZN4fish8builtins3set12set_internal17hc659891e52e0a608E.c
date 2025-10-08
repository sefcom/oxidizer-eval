long long fish::builtins::set::set_internal(unsigned long long a0, unsigned long long a1, char a2[18], unsigned long long a3, unsigned long long a4, unsigned long long a5[2], unsigned long a6)
{
    char v0;  // [bp-0x200]
    unsigned long long v1[3];  // [sp-0x1e0]
    unsigned long long v2[3];  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1d8]
    int v4;  // [bp-0x1d8]
    void* v5;  // [sp-0x1d0], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0x1c0]
    unsigned long long v7;  // [bp-0x1b8]
    void* v8;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v9;  // [bp-0x1a8]
    void* v10;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x190]
    unsigned long long v12;  // [bp-0x188]
    void* v13;  // [sp-0x178], Other Possible Types: unsigned long long, char
    int v14;  // [bp-0x178]
    int v15;  // [bp-0x178]
    unsigned long long v16;  // [bp-0x170]
    int v17;  // [sp-0x168], Other Possible Types: void*, unsigned long long
    int v18;  // [bp-0x158], Other Possible Types: char
    unsigned long v19;  // [bp-0x150], Other Possible Types: unsigned long long
    int v20;  // [bp-0x148], Other Possible Types: char, unsigned long long
    char v21;  // [sp-0x138]
    int v22;  // [bp-0x130], Other Possible Types: unsigned long
    unsigned int v23;  // [bp-0x104]
    char v24;  // [bp-0x100]
    int v25;  // [bp-0xf8]
    void* v26;  // [bp-0xe8]
    unsigned long long v27;  // [bp-0xe0]
    void* v28;  // [bp-0xd8]
    unsigned long long v29[3];  // [bp-0xd0]
    unsigned long long v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    unsigned long long v32[7];  // [bp-0xb8]
    unsigned long long *v33;  // [bp-0xb0]
    int v34;  // [bp-0xa8]
    unsigned long v35;  // [bp-0xa0]
    char v36;  // [bp-0x98]
    char v37;  // [bp-0x88]
    unsigned long v38;  // [bp-0x70]
    unsigned long long v39;  // [bp-0x68]
    char v40;  // [bp-0x60]
    int v41;  // [bp-0x58]
    char v42;  // [bp-0x48]
    unsigned long long v43;  // [bp-0x30]
    unsigned long long v44;  // [bp-0x28]
    unsigned long long v45;  // [bp-0x20]
    unsigned long long v46;  // [bp-0x18]
    unsigned long long v47;  // [bp-0x10]
    unsigned long long v48;  // r15
    unsigned long long v49;  // r14
    unsigned long long v50;  // r13
    unsigned long long v51;  // r12
    unsigned long long v52;  // rbx
    unsigned long v53;  // rbx
    int v54;  // xmm0
    unsigned long long v55;  // r14
    unsigned long v56;  // r15
    unsigned long v57;  // r12
    unsigned long long v58;  // rbp
    unsigned long long *v59;  // rdx
    unsigned long long v60;  // r13
    unsigned long long *v61;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // rdx
    unsigned int v65;  // r12d
    unsigned int v66;  // r13d
    unsigned long long v67;  // rax
    unsigned long long v68;  // rdx
    unsigned long long v69;  // rax
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rax
    unsigned long long v72;  // rdx
    unsigned long long v73;  // r12
    unsigned long long v74;  // rax
    unsigned long v75;  // r15
    int v76;  // xmm2
    int v77;  // xmm2

    v47 = v48;
    v46 = v49;
    v45 = v50;
    v44 = v51;
    v43 = v52;
    v53 = a3 + 472;
    v23 = a2.scope();
    fish::builtins::set::split_var_and_indexes(&v13, a5[0], a5[1], v23, v53, a4);
    if ((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<fish::builtins::set::SplitVar>>(&v13);
        fish::builtins::shared::builtin_print_error_trailer(a3, a4, a0, a1);
    }
    else
    {
        v54 = *((int128_t *)&v13);
        memcpy(&v37, &v20, 16);
        memcpy(&v36, &v18, 16);
        v34 = v17;
        *((void*)v32) = v54;
        v6 = v35;
        v7 = *((long long *)&v36);
        v55 = a4;
        if ((char)fish::common::valid_var_name(v35, *((long long *)&v36)))
        {
            v11 = a0;
            v12 = a4;
            v56 = a6 - 1;
            v57 = a5 + 1;
            if (!(long long)v34)
            {
                fish::builtins::set::new_var_values(&v42, v6, v7, a2[14], a2[15], v57, v56, v53);
                fish::builtins::set::env_set_reporting_errors(v11, a1, a2[17], v6, v7, v23, &v42, v12, a3);
            }
            v59 = 0;
            v60 = a1;
            do
            {
                v61 = v59;
                if (v58 * 8 == v61)
                {
                    if (!a2[14] && a2[15] != 1)
                    {
                        if (v58 == v56)
                        {
                            fish::builtins::set::new_var_values_by_index(&v42, &(char)v32, v57);
                            v65 = v12;
                            v66 = v11;
                            fish::builtins::set::env_set_reporting_errors(v66, a1, a2[17], v6, v7, v23, &v42, v65, a3);
                        }
                        *(v1) = 0;
                        v3 = 4;
                        v5 = 0;
                        v67 = g_14ccde0[0].localize();
                        v13 = 1;
                        v16 = v11;
                        v17 = v60;
                        v18 = 4;
                        v19 = v58;
                        v21 = 4;
                        v22 = v56;
                        fish_printf::printf_impl::sprintf_locale(&(char)v8, &v1, v67, v68, ".", &(unsigned long long)v14, 3, *((long long *)&v0));
                        (char)v8.unwrap(&g_14ccdf8);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(unsigned long long)v14);
                        *((int128_t *)&v14) = *((int128_t *)&v1[0]);
                        v17 = 0;
                        v12.append(&(unsigned long long)v14);
                        core::ptr::drop_in_place<fish::builtins::set::SplitVar>(&(char)v32);
                    }
                    v8 = 0;
                    v9 = 4;
                    v10 = 0;
                    v3 = "%";
                    v5 = 63;
                    *(v1) = 0x8000000000000000;
                    v69 = v1.localize();
                    v13 = 1;
                    a0 = v11;
                    v16 = a0;
                    v17 = v60;
                    fish_printf::printf_impl::sprintf_locale(&v24, &v8, v69, v70, ".", &(unsigned long long)v14, 1, *((long long *)&v0));
                    v24.unwrap(&g_14cce10);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v14);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    *((int128_t *)&v14) = *((int128_t *)&v8);
                    v17 = 0;
                    v12.append(&(unsigned long long)v14);
                    fish::builtins::shared::builtin_print_error_trailer(a3, v12, a0, a1);
                    core::ptr::drop_in_place<fish::builtins::set::SplitVar>(&(char)v32);
                }
                v59 = v61 + 1;
            } while (*((long long *)(v33 + v61)) > 0);
            v8 = 0;
            v9 = 4;
            v10 = 0;
            v3 = "%";
            v5 = 31;
            *(v1) = 0x8000000000000000;
            v63 = v1.localize();
            v55 = v12;
            v13 = 1;
            a0 = v11;
            v16 = a0;
            v17 = v60;
            fish_printf::printf_impl::sprintf_locale(&v24, &v8, v63, v64, ".", &(unsigned long long)v14, 1, *((long long *)&v0));
            v24.unwrap(&g_14cce28);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v14);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
            *((int128_t *)&v14) = *((int128_t *)&v8);
            v17 = 0;
            v12.append(&(unsigned long long)v14);
        }
        else
        {
            *(v1) = 0;
            v3 = 4;
            v5 = 0;
            v71 = g_14c9d98[0].localize();
            v13 = 1;
            v16 = a0;
            v17 = a1;
            v18 = 1;
            v19 = v6;
            v20 = v7;
            fish_printf::printf_impl::sprintf_locale(&(char)v8, &v1, v71, v72, ".", &(unsigned long long)v14, 2, *((long long *)&v0));
            (char)v8.unwrap(&g_14ccd68);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v14);
            *((int128_t *)&v14) = *((int128_t *)&v1[0]);
            v17 = v5;
            a4.append(&(unsigned long long)v14);
            v38 = v6;
            v39 = v6 + v7 * 4;
            v13 = 0;
            if (((char)v38.try_fold(&v13) & 1))
            {
                v73 = a4;
                v26 = 0;
                v27 = 4;
                v28 = 0;
                v30 = "%";
                v31 = 32;
                *(v29) = 0x8000000000000000;
                v74 = v29.localize();
                v8 = 1;
                v9 = a0;
                v10 = a1;
                if (v72 > v7)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ccd80); /* do not return */
                fish::common::escape(&v40, v6, v72);
                v4 = v41;
                *((char *)v2) = 1;
                v75 = v72 + 1;
                if ((char)_ccall(4, 24, v72 + 1, 0, (unsigned long long)(char)(v72 < v7)))
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14ccd98); /* do not return */
                }
                else if (v7 >= v75)
                {
                    fish::common::escape(&v24, v6 + v75 * 4, v7 - v75);
                    v76 = *((int128_t *)&v10);
                    *((int128_t *)&v14) = *((int128_t *)&v8);
                    v17 = v76;
                    v77 = *((int128_t *)&v5);
                    *((int128_t *)&v18) = *((int128_t *)&v1[0]);
                    v20 = v77;
                    v21 = 1;
                    v22 = v25;
                    fish_printf::printf_impl::sprintf_locale(&(unsigned long long)v2, &v26, v74, v72, ".", &v13, 3, *((long long *)&v0));
                    (unsigned long long)v2.unwrap(&g_14ccdc8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v13);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v40);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v29);
                    *((int128_t *)&v15) = *((int128_t *)&v26);
                    v17 = 0;
                    v55 = v73;
                    v73.append(&v13);
                }
                else
                {
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ccdb0); /* do not return */
                }
            }
        }
        fish::builtins::shared::builtin_print_error_trailer(a3, v55, a0, a1);
        core::ptr::drop_in_place<fish::builtins::set::SplitVar>(&(char)v32);
    }
}
