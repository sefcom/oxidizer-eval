long long uu_sleep::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3b0]
    unsigned long long v1;  // [bp-0x3a8]
    unsigned long long v2;  // [bp-0x3a0]
    char v3;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x390]
    char v5;  // [bp-0x388]
    char v6;  // [bp-0x380]
    char v7;  // [bp-0x378]
    char v8;  // [bp-0x370]
    unsigned long long v9;  // [bp-0x368]
    unsigned long long v10;  // [bp-0x360]
    unsigned long long v11;  // [bp-0x358]
    unsigned long long v12;  // [bp-0x350]
    char v13;  // [bp-0x348]
    char v14;  // [bp-0x338]
    unsigned long long v15;  // [bp-0x328]
    unsigned long long v16;  // [bp-0x320]
    char v17;  // [bp-0x318]
    char v18;  // [bp-0x308]
    char v19;  // [bp-0x2f8]
    unsigned long long v20;  // [bp-0x2e8]
    char v21;  // [bp-0x2e0]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax

    uu_sleep::uu_app(&v21);
    v3.try_get_matches_from(&v21, a0, a1);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v12.from();
    v15 = v9;
    memcpy(&v14, &v7, 16);
    memcpy(&v13, &v5, 16);
    v11 = v3;
    v12 = v4;
    v21.try_get_many(&v11, "NUMBER/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.unwrap("NUMBER/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6, &v21);
    if (!v3)
    {
        v24 = uu_sleep::uumain::uumain::{{closure}}();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
        return v24;
    }
    v20 = v10;
    memcpy(&v19, &v8, 16);
    memcpy(&v18, &v6, 16);
    v16 = v3;
    memcpy(&v17, &v4, 16);
    v0.from_iter(&v16, &g_58f6e8);
    v23 = uu_sleep::sleep(v1, v2);
    ::0x4a30b0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return v23;
}
