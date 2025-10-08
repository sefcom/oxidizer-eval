long long fish::parse_util::parse_util_detect_errors_in_argument(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3)
{
    char v0;  // [bp-0x102]
    char v1;  // [bp-0x101]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3[3];  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    void* v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned int v8;  // [bp-0xd4]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xb8]
    void* v12;  // [bp-0xb0]
    void* v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa0]
    void* v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    char v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    char *v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x60]
    unsigned long long v23[3];  // [bp-0x58]
    int v24;  // [bp-0x50]
    char v25;  // [bp-0x40]
    unsigned long long v27;  // r15
    unsigned long long v28;  // r13
    unsigned long long v29;  // cc_ndep
    unsigned long long v30;  // cc_ndep
    unsigned long long v31;  // r13
    unsigned long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // r12
    char v36;  // al
    unsigned long long v37;  // rax
    unsigned long long v38;  // rdx
    char v39;  // al
    unsigned long long v40;  // cc_op
    void* v41;  // cc_dep1
    char v43;  // r15b
    unsigned long v46;  // rbp
    unsigned long long v48;  // rax
    unsigned long long v49;  // cc_ndep

    (char)v7.try_source_range(a0);
    if (*((int *)&v7) != 1)
        return 0;
    v6 = v8.start();
    v19 = a1;
    v20 = a2;
    v21 = &v6;
    v12 = 0;
    v1 = 0;
    v27 = *(a3);
    v28 = 0;
    v2 = 0;
    while (true)
    {
        v30 = v29;
        v31 = v28;
        v0 = 0;
        fish::parse_util::parse_util_locate_cmdsubst_range(&v22, a1, a2, &v12, 0, &v1, &v0);
        switch (v22)
        {
        case 2:
            v33 = v0;
            v34 = v23;
            if (v34 < v33)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14de028); /* do not return */
            v11 = (long long)v24;
            v35 = v27;
            v36 = fish::parse_util::parse_util_detect_errors_in_argument::{{closure}}(&v19, v31, v34 - v33, v27);
            *(v3) = 0;
            v4 = 8;
            v5 = 0;
            v37 = v23.command();
            if (v38 < v37 || v38 > a2)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14de040); /* do not return */
            v39 = fish::parse_util::parse_util_detect_errors(a1 + v37 * 4, v38 - v37, &v3, 0);
            v40 = 17;
            v41 = v39 & 1;
            if (!(v39 & 1))
            {
                v40 = 19;
                v41 = 0;
                v43 = 0;
            }
            else
            {
                v43 = v38;
            }
            v46 = v34 + 1;
            if ((char)_ccall(4, 24, v34 + 1, 0, _ccall(v40, v41, 0, v30)) || (char)__CFADD__(v46, v6))
                core::panicking::panic_const::panic_const_add_overflow(&g_14de058); /* do not return */
            fish::parse_constants::parse_error_offset_source_start(&v3, v46 + v6);
            v2 = v2 & 0xffffffffffffff00 | (char)v2 | v36 | v43;
            v27 = v35;
            if (!v35)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v3);
            }
            else
            {
                (char)v7.into_iter(&v3);
                v27.spec_extend(&(char)v7);
            }
            v28 = v11;
            v49 = _ccall(v40, v41, 0, v30);
            break;
        case 0:
            if (v27)
            {
                v13 = 0;
                v14 = 4;
                v15 = 0;
                v16 = v6;
                v17 = 1;
                v18 = 1;
                *(v3) = 0;
                v4 = 4;
                v5 = 0;
                v9 = "M";
                v10 = 22;
                v7 = 0x8000000000000000;
                fish_printf::printf_impl::sprintf_locale(&v25, &v3, (char)v7.localize(), v38, ".", 8, 0);
                v25.unwrap(&g_14de010);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v7);
                *((int128_t *)&v7) = *((int128_t *)&v3[0]);
                v10 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                v15 = 0;
                memcpy(&v13, &(char)v7, 16);
                return v27.push(&v13, &g_14de010) & 0xffffffffffffff00 | 1;
            }
            return v22 & 0xffffffffffffff00 | 1;
        default:
            v48 = fish::parse_util::parse_util_detect_errors_in_argument::{{closure}}(&v19, v31, a2, v27);
            return v48 & 0xffffffffffffff00 | ((char)v48 || (char)v2);
        }
    }
}
