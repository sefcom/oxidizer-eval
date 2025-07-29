long long uu_ptx::read_char_filter_file(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x4c]
    unsigned long v5;  // [bp-0x48]
    int v6;  // [bp-0x40]
    char v7;  // [bp-0x30]
    unsigned long long v9[3];  // rax
    unsigned long long v10;  // rax
    struct_1 *v11;  // r14
    unsigned long v12;  // rdx
    int v13;  // xmm0

    v3.try_get_one(a1, a2, a3);
    v9 = a2.unwrap(a3, &v3);
    if (!v9)
        core::option::expect_failed("parsing options failed!src/uu/ptx/src/ptx.rs", 23, &g_73b4f8); /* do not return */
    if ((char)v9[1].equal(v9[2], "-[^]+", 1))
    {
        v10 = std::io::stdio::stdin().new();
        v11 = &g_73b4a0.padding_0[0];
    }
    else
    {
        v3.open(v9);
        if ((v3 & 1))
        {
            *((unsigned long *)&a0->padding_1[7]) = v5;
            *((unsigned long long *)&a0->field_0) = 0;
            return v5;
        }
        v10 = v4.new();
        v11 = &g_73b448.padding_0[0];
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v11->field_38(v10, &v0))
    {
        *((unsigned long *)&a0->padding_1[7]) = v12;
        *((unsigned long long *)&a0->field_0) = 0;
        ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        v3.from_iter(1, 1);
        v13 = *((int128_t *)&v3);
        a0->field_20 = *((int128_t *)&v7);
        *((void*)&a0->field_10) = v6;
        *((void*)&a0->field_0) = v13;
        ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    return (unsigned long long)::0x59d770::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v10, v11);
}
