long long uu_tac::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3b0]
    unsigned long long v1;  // [bp-0x3a8]
    int v2;  // [bp-0x3a0]
    int v3;  // [bp-0x390]
    unsigned long long v4;  // [bp-0x380]
    char v5;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x370]
    int v7;  // [bp-0x368]
    int v8;  // [bp-0x358]
    int v9;  // [bp-0x348], Other Possible Types: char
    char v10;  // [bp-0x338]
    int v11;  // [bp-0x328]
    int v12;  // [bp-0x318]
    int v13;  // [bp-0x308]
    char v14;  // [bp-0x2f8]
    unsigned long long v15;  // [bp-0x2f8]
    unsigned long long v16[2];  // [bp-0x2f0]
    unsigned long long v17;  // [bp-0x2e8]
    unsigned long long v19;  // rdi
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    unsigned long long v22;  // rax
    unsigned long v23;  // rdx
    unsigned long long v24[2];  // rdi
    unsigned long long v25;  // rsi
    unsigned long long v26[2];  // rax
    unsigned long long v27;  // rax

    uu_tac::uu_app(&v14);
    v5.try_get_matches_from(&v14, a0, a1);
    v19 = v6;
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = *((long long *)&v9);
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v20 = v0.get_flag(_ZN6uu_tac7options6BEFORE17h8e39d1d3b67b2fd3E, g_714458);
    v21 = v0.get_flag(_ZN6uu_tac7options5REGEX17hffb6879362b8a9fbE, g_714468);
    v14.try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h8b50e049519d40cdE, g_714478);
    v22 = _ZN6uu_tac7options9SEPARATOR17h8b50e049519d40cdE.unwrap(g_714478, &v14).map_or();
    if (!v23)
        v22 = &g_45dca5;
    v14.try_get_many(&v0, _ZN6uu_tac7options4FILE17h510b18896a11475dE, g_714488);
    v5.unwrap(_ZN6uu_tac7options4FILE17h510b18896a11475dE, g_714488, &v14);
    if (v5)
    {
        v13 = v9;
        v12 = v8;
        v11 = v7;
        memcpy(&v10, &v5, 16);
        v14.from_iter(&v10, &g_713f58);
        v24 = v16;
        v25 = v17;
    }
    else
    {
        v26 = ::0x583880::alloc::alloc::Global::alloc_impl();
        if (!v26)
            alloc::alloc::handle_alloc_error(8, 16); /* do not return */
        v24 = v26;
        v24[0] = "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
        v24[1] = 1;
        v15 = 1;
        v16[0] = v24;
        v17 = 1;
        v25 = 1;
    }
    v27 = uu_tac::tac(v24, v25, v20, v21, v22, v23 + (v23 < 1));
    ::0x5833b0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v14);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v27;
}
