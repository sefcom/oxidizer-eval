long long uu_expr::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x3c0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x3a8]
    char v3;  // [bp-0x398]
    unsigned long long v4[3];  // [bp-0x390]
    unsigned long long v5;  // [bp-0x388]
    int v6;  // [bp-0x380], Other Possible Types: char
    unsigned long long v7;  // [bp-0x370]
    char *v8;  // [bp-0x368]
    unsigned long long v9;  // [bp-0x360]
    int v10;  // [bp-0x350]
    unsigned long long v11[3];  // [bp-0x340]
    unsigned long long v12;  // [bp-0x338]
    void* v13;  // [bp-0x330]
    int v14;  // [bp-0x328], Other Possible Types: char
    int v15;  // [bp-0x318], Other Possible Types: char
    char v16;  // [bp-0x308]
    int v17;  // [bp-0x2f8]
    char v18;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v19;  // [bp-0x2e0], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x2d8]
    unsigned long long v21;  // [bp-0x2d0]
    void* v22;  // [bp-0x2c8]
    unsigned long long v24[3];  // r12
    unsigned long long v25;  // r15
    unsigned long v26;  // rbx
    unsigned long v27;  // r14
    unsigned long long v29;  // rdx
    void* v30;  // rbx
    char v31;  // al

    v18.skip(a0, a1);
    v3.collect(&v18);
    v24 = v4;
    v25 = v5;
    if (v25)
    {
        if (v25 == 1)
        {
            v26 = v24[1];
            v27 = v24[2];
            if ((char)v26.equal(v27, "--help--version--/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6))
            {
                uu_expr::uu_app(&v18);
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v18.print_help());
                core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v18);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                return 0;
            }
            else if ((char)v26.equal(v27, "--version--/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 9))
            {
                v0 = uucore::util_name();
                v1 = v29;
                v8 = &v0;
                v9 = <&T as core::fmt::Display>::fmt;
                v18 = &g_549b78;
                v19 = 2;
                v22 = 0;
                v20 = &v8;
                v21 = 1;
                std::io::stdio::_print(&v18);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                return 0;
            }
        }
        else
        {
            v26 = v24[1];
            v27 = v24[2];
        }
        if ((char)v26.equal(v27, "--/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 2))
        {
            v25 -= 1;
            v24 += 1;
        }
    }
    v11[0] = v24;
    v12 = v25;
    v13 = 0;
    v18.parse(&v11);
    memcpy(&v14, &v19, 16);
    memcpy(&v15, &v21, 16);
    if (v18 == 9223372036854775813)
    {
        v30 = v14.new();
    }
    else
    {
        v2 = v15;
        v1 = v14;
        v0 = v18;
        (char)v8.eval(&v0);
        memcpy(&v16, &v9, 16);
        v17 = v10;
        if ((int)v8 == 1)
        {
            v30 = v16.new();
            core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v0);
        }
        else
        {
            v6.eval_as_string(&v16);
            core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v0);
            v0 = &v6;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v18 = &g_549b20;
            v19 = 2;
            v22 = 0;
            v20 = &v0;
            v21 = 1;
            std::io::stdio::_print(&v18);
            v21 = v7;
            v19 = v6;
            v18 = 0x8000000000000000;
            v31 = uu_expr::syntax_tree::is_truthy(&v18);
            core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v18);
            if (v31)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                return 0;
            }
            v30 = 1.from();
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
    return v30;
}
