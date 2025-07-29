long long uu_paste::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x398]
    int v2;  // [bp-0x390]
    int v3;  // [bp-0x380]
    char v4;  // [bp-0x370]
    unsigned long long v5;  // [bp-0x360]
    unsigned long long v6;  // [bp-0x358]
    int v7;  // [bp-0x350]
    int v8;  // [bp-0x340]
    unsigned long long v9;  // [bp-0x330]
    char v10;  // [bp-0x328]
    int v11;  // [bp-0x318]
    int v12;  // [bp-0x308]
    char v13;  // [bp-0x2f8]
    char v14;  // [bp-0x2e8]
    unsigned long long v15;  // [bp-0x2d8]
    unsigned long long v17;  // rdi
    unsigned int v18;  // eax
    unsigned long long v19[3];  // r14
    char v20;  // al
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdi

    uu_paste::uu_app(&v14);
    v0.try_get_matches_from(&v14, a0, a1);
    v17 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v6.from();
    v9 = *((long long *)&v4);
    v8 = v3;
    v7 = v2;
    v5 = v0;
    v6 = v1;
    v18 = v5.get_flag("serialdelimiters/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v14.try_get_one(&v5, "delimiters/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 10);
    v19 = "delimiters/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs".unwrap(10, &v14);
    if (v19)
    {
        v14.try_get_many(&v5, "filesizei128", 4);
        v0.unwrap("filesizei128", 4, &v14);
        if (v0)
        {
            memcpy(&v13, &v4, 16);
            v12 = v3;
            v11 = v2;
            memcpy(&v10, &v0, 16);
            v0.from_iter(&v10, &g_56fef8);
            v20 = v5.get_flag("zero-terminated", 15);
            v15 = (long long)v2;
            memcpy(&v14, &v0, 16);
            v21 = uu_paste::paste(&v14, v18, v19[1], v19[2], (v20 ? 0 : 10));
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v5);
            return v21;
        }
        v22 = &g_56fee0;
    }
    else
    {
        v22 = &g_56fec8;
    }
    core::option::unwrap_failed(v22); /* do not return */
}
