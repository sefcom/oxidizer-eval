long long uu_env::EnvAppData::make_error_no_such_file_or_dir(char a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    char *v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    void* v4;  // [bp-0xc0]
    char *v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    char v11;  // [bp-0x80]
    char *v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x70]
    char v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    char *v17;  // [bp-0x40]
    unsigned long long v19;  // rdx

    v8 = uucore::util_name();
    v9 = v19;
    v5 = &v8;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_5a9ad0;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v5.to_vec("programenv-error-no-such-fileenv-error-use-s-shebang---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    v8 = 1;
    v9 = a1;
    v10 = a2;
    v11 = 1;
    v0.spec_to_string(&v8);
    v15 = v7;
    memcpy(&v14, &v5, 16);
    memcpy(&v16, &v0, 16);
    v17 = v2;
    v0.from_iter(&v14);
    uucore::mods::locale::get_message_with_args(&v5, "env-error-no-such-fileenv-error-use-s-shebang---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 22, &v0);
    v12 = &v5;
    v13 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_5a9af0;
    v1 = 2;
    v4 = 0;
    v2 = &v12;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v5);
    if ((a0 & 1))
        return 127.new();
    v8 = uucore::util_name();
    v9 = v19;
    v5 = &v8;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_5a9ad0;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    uucore::mods::locale::get_message(&v8, "env-error-use-s-shebang---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 23);
    v5 = &v8;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_5a9af0;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v8);
    return 127.new();
}
