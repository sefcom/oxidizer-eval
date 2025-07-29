void uu_dd::parseargs::show_zero_multiplier_warning()
{
    char *v0;  // [bp-0x128], Other Possible Types: unsigned long long
    int v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    char *v3;  // [bp-0x118], Other Possible Types: unsigned long long
    int v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    char *v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    int v9;  // [bp-0xe8], Other Possible Types: char *
    unsigned long long v10;  // [bp-0xe0]
    int v11;  // [bp-0xd8], Other Possible Types: void*
    int v12;  // [bp-0xc8]
    char *v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xb0]
    unsigned long long v15;  // [bp-0xa8]
    char *v16;  // [bp-0xa0]
    int v17;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    int v21;  // [bp-0x80]
    char *v22;  // [bp-0x70]
    int v23;  // [bp-0x68], Other Possible Types: char
    char *v24;  // [bp-0x58]
    void* v25;  // [bp-0x50]
    unsigned long long v26;  // [bp-0x48]
    unsigned long long v27;  // [bp-0x40]
    char v28;  // [bp-0x38]
    void* v29;  // [bp-0x30]
    unsigned long long v30;  // [bp-0x28]
    unsigned long long v31;  // [bp-0x20]
    char v32;  // [bp-0x18]
    unsigned long long v34;  // rdx
    int v35;  // xmm3

    *((long long *)&v1) = uucore::util_name();
    v2 = v34;
    *((unsigned long long **)&v17) = &(unsigned long long)v1;
    v19 = <&T as core::fmt::Display>::fmt;
    v7 = &g_5de860;
    v8 = 2;
    v11 = 0;
    v9 = &(unsigned long long)v17;
    v10 = 1;
    std::io::stdio::_eprint(&v7);
    (unsigned long long)v1.to_vec("zeroAnsi -- ", 4);
    v25 = 0;
    v26 = "0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v27 = 2;
    v28 = 1;
    v7.spec_to_string(&v25);
    v20 = v3;
    *((int128_t *)&v17) = *((int128_t *)&v0);
    *((int128_t *)&v21) = *((int128_t *)&v7);
    v22 = v9;
    v7.to_vec("alternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 11);
    v24 = v9;
    memcpy(&v23, &v7, 16);
    v29 = 0;
    v30 = "00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v31 = 3;
    v32 = 1;
    v7.spec_to_string(&v29);
    v3 = v24;
    v1 = v23;
    *((int128_t *)&v4) = *((int128_t *)&v7);
    v6 = v9;
    v35 = (int128_t)(&v21)[8];
    memcpy(&v7, &(unsigned long long)v17, 16);
    *((int128_t *)&v9) = *((int128_t *)&v20);
    v11 = v35;
    v15 = v5;
    v16 = v6;
    v13 = v3;
    v14 = (long long)v4;
    v12 = v23;
    (unsigned long long)v1.from_iter(&v7);
    uucore::mods::locale::get_message_with_args(&(unsigned long long)v17, "dd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 26, &(unsigned long long)v1);
    v0 = &(unsigned long long)v17;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &g_5de880;
    v8 = 2;
    v11 = 0;
    v9 = &v0;
    v10 = 1;
    std::io::stdio::_eprint(&v7);
    ::0x4c80f0::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v17);
    return;
}
