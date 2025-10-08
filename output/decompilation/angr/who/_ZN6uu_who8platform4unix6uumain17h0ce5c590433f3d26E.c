long long uu_who::platform::unix::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x66c]
    char v1;  // [bp-0x66b]
    char v2;  // [bp-0x66a]
    char v3;  // [bp-0x669]
    char v4;  // [bp-0x668], Other Possible Types: uint128_t
    char v5;  // [bp-0x668]
    char v6;  // [bp-0x650], Other Possible Types: unsigned long long
    int v7;  // [bp-0x648], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x640], Other Possible Types: char
    char v9;  // [bp-0x630]
    unsigned long long v10;  // [bp-0x620]
    char v11;  // [bp-0x618]
    char v12;  // [bp-0x600]
    char v13;  // [bp-0x5c0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x5b8]
    char v15;  // [bp-0x5b0]
    char v16;  // [bp-0x5a0]
    unsigned long long v17;  // [bp-0x590]
    int v18;  // [bp-0x2f8], Other Possible Types: char
    char v19;  // [bp-0x2f0]
    void* v20;  // [bp-0x2e8]
    char v21;  // [bp-0x2e0]
    char v22;  // [bp-0x2df]
    char v23;  // [bp-0x2de]
    char v24;  // [bp-0x2dd]
    char v25;  // [bp-0x2dc]
    unsigned long v26;  // [bp-0x2db]
    char v27;  // [bp-0x2d3]
    char v28;  // [bp-0x2d2]
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rax
    char v32;  // al
    char v33;  // r12b
    char v34;  // bpl
    char v35;  // bl
    unsigned int v36;  // ebx
    unsigned long v37;  // r13
    unsigned long v38;  // r15
    unsigned long v39;  // rbp
    unsigned long v40;  // r14
    char v41;  // r12b
    char v42;  // cc_dep1
    char v43;  // cl
    unsigned long long v44;  // rax

    uu_who::uu_app(&v18);
    uu_who::platform::unix::get_long_usage(&v11);
    v13.after_help(&v18, &v11);
    v6.try_get_matches_from(&v13, a0, a1);
    v30 = v7;
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return v14.from();
    v17 = v10;
    memcpy(&v16, &v9, 16);
    memcpy(&v15, &v8, 16);
    v13 = v6;
    v14 = v7;
    v18.try_get_many(&v13);
    v12.unwrap(&v18);
    if (*((long long *)&v12))
    {
        v18.collect(&v12);
        v31 = *((long long *)&v18);
        *((int128_t *)&v7) = *((int128_t *)&v19);
        v6 = v31;
    }
    else
    {
        v6 = 0;
        v7 = 8;
        v8 = 0;
    }
    v3 = v13.get_flag("lookupcountallheadingloginprocessusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
    v2 = v13.get_flag("countallheadingloginprocessusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5);
    v32 = v13.get_flag("allheadingloginprocessusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 3);
    v1 = v13.get_flag("headingloginprocessusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 7);
    if (v32)
    {
        v4 = 72340172838076673;
        v33 = 1;
        v34 = 0;
        v35 = 1;
    }
    else
    {
        v0 = v13.get_flag("mesgdeadkeyscaseu128for<", 4);
        v36 = v13.get_flag("bootBlue", 4);
        v37 = (unsigned int)v13.get_flag("deadkeyscaseu128for<", 4);
        v38 = (unsigned int)v13.get_flag("loginprocessusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5);
        v39 = (unsigned int)v13.get_flag("processusersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 7);
        v4 = v13.get_flag("timecodetip:", 4);
        v40 = (unsigned int)v13.get_flag("runlevelextern \"# users=ENOTUNIQELIBEXECENOTSOCK", 8);
        if (!v5 && !(char)v40 && !(char)v38 && !(char)v39 && !(char)v36 && !(char)v37)
            v41 = (char)v13.get_flag("usersonly_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 5) ^ 1;
        v42 = v37;
        if ((char)v37)
        {
            if (v42)
                goto LABEL_45fde4;
LABEL_45fde3:
            v34 = v41;
        }
        else
        {
            if (!v42)
                goto LABEL_45fde3;
LABEL_45fde4:
            v34 = 0;
        }
        v4 = ...;
    }
    v43 = 1;
    if (!(char)v13.get_flag("only_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 18))
        v43 = v8 == 2;
    v20 = v8;
    *((int128_t *)&v18) = *((int128_t *)&v6);
    v21 = v3;
    v22 = v2;
    v23 = v34;
    v24 = v33;
    v25 = v1;
    v26 = v4;
    v27 = v35;
    v28 = v43;
    v44 = v18.exec();
    core::ptr::drop_in_place<uu_who::platform::unix::Who>(&v18);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    return v44;
}
