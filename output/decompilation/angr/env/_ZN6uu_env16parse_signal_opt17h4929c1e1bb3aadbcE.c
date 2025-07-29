long long uu_env::parse_signal_opt(unsigned long long a0[15], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x158], Other Possible Types: char
    unsigned long long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    unsigned int v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x118]
    void* v6;  // [bp-0x110]
    unsigned long long v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    char v10;  // [bp-0xf0]
    int v11;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc0]
    unsigned long long v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0xa0]
    int v19;  // [bp-0x80], Other Possible Types: char
    unsigned long long v20;  // [bp-0x70]
    int v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x58]
    char v23;  // [bp-0x50]
    unsigned long long v24;  // [bp-0x40]
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // r12
    unsigned long long v31;  // r12
    unsigned long long v32;  // rax

    if (!a2)
        return 0;
    v15 = a1;
    v16 = a2;
    v17 = 0;
    v13.from_iter(&v15, &g_5a9a18);
    v4 = v14.with_capacity_in(8, 16, &g_5a9a30);
    v5 = v26;
    v6 = 0;
    v0.into_iter(&v13);
    if (v0.next())
    {
        do
        {
            if (v28)
                v4.push(v27, v28, &g_5a9a60);
            v27 = v0.next();
        } while (v27);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v0);
    v18.into_iter(&v4);
    if (v18.next())
    {
        do
        {
            v31 = v30;
            v0.try_from(v29, v31);
            if ((v0 & 1))
            {
                v0.to_vec("signalenv-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
                v12 = v2;
                memcpy(&v11, &v0, 16);
                v7 = 1;
                v8 = v29;
                v9 = v31;
                v10 = 1;
                v0.spec_to_string(&v7);
                v22 = v12;
                v21 = v11;
                memcpy(&v23, &v0, 16);
                v24 = v2;
                v0.from_iter(&v21);
                uucore::mods::locale::get_message_with_args(&v19, "env-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 24, &v0);
                v3 = 1;
                v0 = v19;
                v2 = v20;
                v32 = v0.new();
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
                return v32;
            }
            uu_env::parse_signal_value(&v0, v1, v2);
            if (*((long long *)&v0))
            {
                v32 = *((long long *)&v0);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
                return v32;
            }
            v7 = v1;
            if (!v7.slice_contains(a0[13], a0[14]))
                a0[12].push(v1);
            v29 = v18.next();
            v26 = v26;
        } while (v29);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
    return 0;
}
