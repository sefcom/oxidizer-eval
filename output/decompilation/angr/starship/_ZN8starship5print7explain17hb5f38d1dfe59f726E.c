void starship::print::explain(unsigned long long a0[17])
{
    unsigned long long v0;  // [bp-0x918]
    unsigned long long v1;  // [bp-0x910]
    char *v2;  // [bp-0x908], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x900]
    char *v4;  // [bp-0x8f8]
    unsigned long long v5;  // [sp-0x8f0]
    void* v6;  // [sp-0x8e8]
    int v7;  // [bp-0x8d8]
    unsigned long long v8;  // [bp-0x8d0]
    char *v9;  // [sp-0x8c8], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x8c0]
    int v11;  // [bp-0x8b8], Other Possible Types: char
    int v12;  // [bp-0x8a8]
    int v13;  // [bp-0x8a8]
    int v14;  // [bp-0x898]
    unsigned long long v15;  // [bp-0x890]
    int v16;  // [bp-0x888]
    int v17;  // [bp-0x878]
    int v18;  // [bp-0x878]
    void* v19;  // [bp-0x860], Other Possible Types: char *, unsigned long long
    unsigned long long v20;  // [bp-0x858]
    void* v21;  // [bp-0x850], Other Possible Types: char *, unsigned long long
    int v22;  // [bp-0x848], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x840], Other Possible Types: char *
    unsigned long long v24;  // [bp-0x838]
    void* v25;  // [bp-0x830]
    unsigned long long v26;  // [bp-0x828]
    void* v27;  // [bp-0x820]
    char v28;  // [bp-0x818]
    unsigned int v29;  // [bp-0x814]
    char v30;  // [bp-0x810]
    void* v31;  // [bp-0x808]
    void* v32;  // [bp-0x7f8]
    void* v33;  // [bp-0x7e8]
    unsigned long long v34;  // [bp-0x7d8]
    unsigned long long v35;  // [bp-0x7d0]
    void* v36;  // [bp-0x7c8]
    char v37;  // [bp-0x7c0]
    unsigned int v38;  // [bp-0x7bc]
    char v39;  // [bp-0x7b8]
    unsigned long long v40;  // [bp-0x7b0]
    unsigned long long v41;  // [bp-0x7a8]
    unsigned long v42;  // [bp-0x7a0]
    char v43;  // [bp-0x798]
    unsigned long long v44;  // [bp-0x790]
    unsigned long v45;  // [bp-0x788]
    int v46;  // [bp-0x780]
    char v47;  // [bp-0x780]
    int v48;  // [bp-0x780]
    int v49;  // [bp-0x770]
    int v50;  // [bp-0x760]
    int v51;  // [bp-0x750]
    int v52;  // [bp-0x740]
    char *v53;  // [bp-0x730]
    unsigned long long v54;  // [bp-0x728]
    char v55;  // [bp-0x720]
    char v56;  // [bp-0x700]
    void* v58;  // rcx
    unsigned long long v59;  // rbx
    unsigned long long v60;  // r15
    unsigned long long v61;  // rcx
    char *v62;  // rdi
    char v63;  // al
    unsigned long long v64;  // rax
    unsigned long long v65;  // r14
    unsigned long v66;  // rdx, Other Possible Types: unsigned long long
    char *v71;  // [bp-0x8d8], Other Possible Types: unsigned long long
    unsigned long long v72;  // [bp-0x8a0]
    void* v75;  // r13, Other Possible Types: unsigned long long

    v19 = 0x8000000000000000;
    v56.new(a0, &v19);
    starship::print::compute_modules(&v11, &v56);
    v19.into_iter(&v11);
    v43.collect(&v19);
    if (!((char)v44.reduce(v45 * 80 + v44) & 1))
        v58 = 0;
    v10 = v58;
    v59 = terminal_size::unix::terminal_size();
    if (((char)v59 & 1))
        v60 = ((v59 & 4294967295) >> 16 & 4294967295) - (v59 & 4294967295) >> 16 & 4294967295.min(v10 + 11);
    v19 = &g_11f67d0;
    v20 = 1;
    v21 = 8;
    *((uint128_t *)&v22) = 0;
    std::io::stdio::_print(&v19);
    v55.into_iter(&v43);
    (char)v46.next(&v55);
    if (*((long long *)&v47) != 0x8000000000000000)
    {
        if (((char)v59 & 1))
        {
            v42 = v10 + 11;
            do
            {
                v18 = v52;
                v16 = v51;
                v14 = v50;
                v13 = v49;
                v11 = v48;
                alloc::slice::<impl [T]>::repeat(&v19, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1, v10 - (long long)(&v18)[8]);
                v9 = v21;
                *((int128_t *)&v7) = *((int128_t *)&v19);
                v19 = &v11;
                v20 = <alloc::string::String as core::fmt::Display>::fmt;
                v21 = &v16;
                v22 = <alloc::string::String as core::fmt::Display>::fmt;
                v23 = &v71;
                v24 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = &g_11f67e0;
                v3 = 4;
                v6 = 0;
                v4 = &v19;
                v5 = 3;
                std::io::stdio::_print(&v2);
                core::ptr::drop_in_place<alloc::string::String>(&v71);
                v61 = v15;
                v19 = 0;
                v21 = 0;
                v23 = 0;
                v25 = 0;
                v26 = v61;
                v27 = 0;
                v28 = 2;
                v29 = 268566529;
                v30 = 16;
                v31 = 0;
                v32 = 0;
                v33 = 0;
                v34 = v61;
                v35 = v61;
                v36 = 0;
                v37 = 2;
                v38 = 268566529;
                v39 = 16;
                v40 = (long long)v14;
                v41 = v61;
                v75 = 0;
                v62 = &v19;
                while (true)
                {
                    if (!(v63 & 1))
                    {
                        while (true)
                        {
                            v65 = v62.next();
                            if (!v65)
                                break;
                            v0 = v65;
                            v1 = v66;
                            if ((char)v0.equal(v66, &g_54348d, 1))
                                goto LABEL_bc74c9;
                            v2 = v0;
                            v3 = v66;
                            v75 += v2.width();
                            if ((char)v0.equal(v1, "\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/collections/btree/navigate.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/raw.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/comfort.rsimara-diff only supports up to  tokens/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/histogram.rs", 1) || v75 > v60)
                            {
                                if (v60 >= 2 && (char)v0.equal(v1, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1))
                                    goto LABEL_bc74a0;
                                alloc::slice::<impl [T]>::repeat(&v2, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1, v42);
                                v9 = v4;
                                *((int128_t *)&v7) = *((int128_t *)&v2);
                                v53 = &v71;
                                v54 = <alloc::string::String as core::fmt::Display>::fmt;
                                v2 = &g_11ebeb0;
                                v3 = 1;
                                v6 = 0;
                                v4 = &v53;
                                v5 = 1;
                                std::io::stdio::_print(&v2);
                                core::ptr::drop_in_place<alloc::string::String>(&v71);
                                v75 = 1;
                                if (!(char)v0.equal(v1, "\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/collections/btree/navigate.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/raw.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-config-0.46.0/src/file/access/comfort.rsimara-diff only supports up to  tokens/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/imara-diff-0.1.8/src/histogram.rs", 1))
                                    goto LABEL_bc76a4;
                                v75 = 0;
                                goto LABEL_bc74a2;
                            }
                            else
                            {
LABEL_bc76a4:
                                v71 = &v0;
                                v8 = <&T as core::fmt::Display>::fmt;
                                v2 = &g_525500;
                                v3 = 1;
                                v6 = 0;
                                v4 = &v71;
                                v5 = 1;
                                std::io::stdio::_print(&v2);
                                v62 = &v19;
                            }
                        }
LABEL_bc74a0:
                        goto LABEL_bc74a2;
                    }
                    v64 = v62.next();
                    if (!v64)
                        break;
                    v0 = v64;
                    v1 = v66;
LABEL_bc74c9:
                    v71 = &v0;
                    v8 = <&T as core::fmt::Display>::fmt;
                    v2 = &g_525500;
                    v3 = 1;
                    v6 = 0;
                    v4 = &v71;
                    v5 = 1;
                    std::io::stdio::_print(&v2);
                    if ((char)g_11f6820.contains(v0, v1))
                        goto LABEL_bc74a0;
                    v63 = (char)g_11f6848.contains(v0, v1) ^ 1;
LABEL_bc74a2:
                    v62 = &v19;
                }
                v19 = &g_11ebeb0;
                v20 = 1;
                v21 = 8;
                *((uint128_t *)&v22) = 0;
                std::io::stdio::_print(&v19);
                core::ptr::drop_in_place<starship::print::explain::ModuleInfo>(&v11);
                (char)v46.next(&v55);
            } while (*((long long *)&v47) != 0x8000000000000000);
        }
        else
        {
            do
            {
                v17 = v52;
                v16 = v51;
                v14 = v50;
                v12 = v49;
                v11 = v46;
                alloc::slice::<impl [T]>::repeat(&v19, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1, v10 - (long long)(&v17)[8]);
                v9 = v21;
                *((int128_t *)&v7) = *((int128_t *)&v19);
                v19 = &v11;
                v20 = <alloc::string::String as core::fmt::Display>::fmt;
                v21 = &v71;
                v22 = <alloc::string::String as core::fmt::Display>::fmt;
                v23 = &v72;
                v24 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = &g_11f6870;
                v3 = 4;
                v6 = 0;
                v4 = &v19;
                v5 = 3;
                std::io::stdio::_print(&v2);
                core::ptr::drop_in_place<alloc::string::String>(&v71);
                core::ptr::drop_in_place<starship::print::explain::ModuleInfo>(&v11);
                (char)v46.next(&v55);
            } while (*((long long *)&v47) != 0x8000000000000000);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<starship::print::explain::ModuleInfo>>(&v55);
    core::ptr::drop_in_place<starship::context::Context>(&v56);
    return;
}
