long long uu_ptx::read_char_filter_file(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned long v5;  // [bp-0x40]
    int v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v9[3];  // rax
    unsigned long long v10;  // rax
    struct_1 *v11;  // r14
    unsigned long v12;  // rdx
    int v13;  // xmm0

    v3.try_get_one(a1, "break-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no ", 10);
    v9 = "break-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no ".unwrap(10, &v3);
    if (!v9)
        core::option::expect_failed("parsing options failed!src/uu/ptx/src/ptx.rs", 23, &g_651730); /* do not return */
    if ((char)v9[1].equal(v9[2], "-[^]+", 1))
    {
        v10 = std::io::stdio::stdin().new();
        v11 = &g_6516d8.padding_0[0];
    }
    else
    {
        v3.open(v9);
        if ((v3 & 1))
        {
            *((unsigned long *)&a0[8]) = v5;
            *((unsigned long long *)a0) = 0;
            return v5;
        }
        v10 = v4.new();
        v11 = &g_651680.padding_0[0];
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (((char)v11->field_38(v10, &v0) & 1))
    {
        *((unsigned long *)&a0[8]) = v12;
        *((unsigned long long *)a0) = 0;
    }
    else
    {
        v3.collect(1, 1);
        v13 = *((int128_t *)&v3);
        *((int128_t *)&a0[32]) = *((int128_t *)&v7);
        a0[16] = v6;
        *(a0) = v13;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v10, v11);
}
