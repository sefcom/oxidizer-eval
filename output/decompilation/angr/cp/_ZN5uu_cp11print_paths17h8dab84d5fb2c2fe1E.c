void uu_cp::print_paths(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1a8]
    int v2;  // [bp-0x198]
    char *v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x180]
    char v7;  // [bp-0x178]
    unsigned long long v8;  // [bp-0x170]
    int v9;  // [bp-0x168]
    unsigned long long v10;  // [bp-0x160]
    unsigned long long v11;  // [bp-0x158]
    int v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x140]
    char v14;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x118]
    unsigned long long v16;  // [bp-0x110]
    unsigned long long v17;  // [bp-0x108]
    unsigned long long v18;  // [bp-0x100]
    int v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xe8]
    int v21;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    char *v24;  // [bp-0xc8]
    int v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xc0]
    int v27;  // [bp-0xb8], Other Possible Types: void*
    char v28;  // [bp-0xa8]
    unsigned long long v29;  // [bp-0x98]
    unsigned long long v30;  // [bp-0x90]
    char v31;  // [bp-0x88]
    unsigned long long v32;  // [bp-0x70]
    unsigned long long v33;  // [bp-0x68]
    unsigned long long v34;  // [bp-0x60]
    unsigned long long v35;  // [bp-0x58]
    char v36;  // [bp-0x50]
    unsigned long long v38;  // r15
    int v39;  // xmm1
    int v40;  // xmm2
    char *v41;  // [bp-0x168], Other Possible Types: unsigned long long

    if (a0)
    {
        uu_cp::aligned_ancestors(&(char)v21, a1, a2, a3, a4);
        v36.into_iter(&(char)v21);
        v14.next(&v36);
        if (v14)
        {
            v15 = v14;
            do
            {
                v38 = v15;
                v3.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
                v1 = v5;
                memcpy(&v0, &v3, 16);
                v32 = v38;
                v33 = v16;
                v3.spec_to_string(&v32);
                v11 = v1;
                v9 = v0;
                v13 = v5;
                *((int128_t *)&v12) = *((int128_t *)&v3);
                v0.to_vec("destcyanSome of bolddumb", 4);
                v20 = v1;
                memcpy(&v19, &v0, 16);
                v34 = v17;
                v35 = v18;
                v0.spec_to_string(&v34);
                v5 = v20;
                v2 = v19;
                v8 = v1;
                memcpy(&v6, &v0, 16);
                v39 = *((int128_t *)&v11);
                v40 = (int128_t)(&v12)[8];
                *((int128_t *)&v21) = *((int128_t *)&v41);
                v25 = v39;
                v27 = v40;
                memcpy(&v31, &v7, 16);
                v29 = v5;
                v30 = v6;
                memcpy(&v28, &v3, 16);
                v3.from_iter(&(char)v21);
                uucore::mods::locale::get_message_with_args(&v41, "cp-verbose-created-directorycp-error-not-replacingcp-error-will-not-copy-through-symlinkPOSIXLY_CORRECTcp-error-not-writing-dangling-symlinkNo such file or directorycp-error-cannot-statcp-error-cannot-create-fifotargetcp-error-target-not-directorySkipped c", 28, &v3);
                v3 = &v41;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v22 = &g_5fb580;
                v23 = 2;
                v27 = 0;
                v24 = &v3;
                v26 = 1;
                std::io::stdio::_print(&v22);
                ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v41);
                v14.next(&v36);
                v15 = v14;
            } while (v15);
        }
        ::0x4d3570::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v36);
    }
    uu_cp::context_for(&v3, a1, a2, a3, a4);
    v41 = &v3;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v21 = &g_5fb580;
    v23 = 2;
    v27 = 0;
    v24 = &v41;
    v26 = 1;
    std::io::stdio::_print(&v21);
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
