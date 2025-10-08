long long uu_tac::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3a8]
    unsigned long long v1;  // [bp-0x3a0]
    int v2;  // [bp-0x398]
    char v3;  // [bp-0x388]
    unsigned long long v4;  // [bp-0x378]
    char v5;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x368]
    int v7;  // [bp-0x360]
    char v8;  // [bp-0x350]
    unsigned long long v9;  // [bp-0x340]
    char v10;  // [bp-0x338]
    char v11;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v12[2];  // [bp-0x2f0]
    unsigned long long v13;  // [bp-0x2e8]
    unsigned long long v15;  // rdi
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    struct_0 *v18;  // rax
    unsigned long long v19;  // r14
    unsigned long long v20;  // r15
    unsigned long long v21[2];  // r12
    unsigned long long v22;  // rsi
    unsigned long long v23[2];  // rax
    unsigned long long v24;  // rax

    uu_tac::uu_app(&v11);
    v5.try_get_matches_from(&v11, a0, a1);
    v15 = v6;
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = v9;
    memcpy(&v3, &v8, 16);
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v16 = v0.get_flag(_ZN6uu_tac7options6BEFORE17he901c51c52bd38a8E, g_633a60);
    v17 = v0.get_flag(_ZN6uu_tac7options5REGEX17he1f2cca616d7d76cE, g_633a70);
    v11.try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E, g_633a80);
    v18 = _ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E.unwrap(g_633a80, &v11);
    if (v18)
    {
        v19 = v18[1].padding_0;
        v20 = (!v18[1].padding_0 ? &g_451e61 : v18->field_8);
    }
    else
    {
        v20 = "\nTry ' --help' for more information.\n";
        v19 = 1;
    }
    v11.try_get_many(&v0, _ZN6uu_tac7options4FILE17hbfbba63fbacf671bE, g_633a90);
    v10.unwrap(_ZN6uu_tac7options4FILE17hbfbba63fbacf671bE, g_633a90, &v11);
    if (*((long long *)&v10))
    {
        v11.collect(&v10);
        v21 = v12;
        v22 = v13;
    }
    else
    {
        v23 = 8.alloc_impl(16);
        if (!v23)
            alloc::alloc::handle_alloc_error(8, 16); /* do not return */
        v21 = v23;
        v21[0] = "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ";
        v21[1] = 1;
        v11 = 1;
        v12[0] = v21;
        v13 = 1;
        v22 = 1;
    }
    v24 = uu_tac::tac(v21, v22, v16, v17, v20, v19 + (v19 < 1));
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v11, v21);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v24;
}
