long long uu_cut::stdout_writer::hdf7375efa0212ce2()
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x30]
    void* v2;  // [sp-0x28]
    char v3;  // [sp-0x20]
    unsigned long long v4;  // [sp-0x18]
    struct_0 *v8;  // rax
    unsigned long long v9;  // rax
    int v10;  // xmm0

    std::io::stdio::stdout::h077da66234850927();
    if (isatty(1))
    {
        v8 = __rust_alloc(8, 8);
        if (v8)
        {
            v8->field_0 = std::io::stdio::stdout::h077da66234850927();
            return v8;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    else
    {
        v9 = __rust_alloc(0x2000, 1);
        if (!v9)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v0 = 0x2000;
        v1 = v9;
        v2 = 0;
        v3 = 0;
        v4 = std::io::stdio::stdout::h077da66234850927();
        v8 = __rust_alloc(40, 8);
        if (v8)
        {
            v8->field_20 = v4;
            v10 = *((int128_t *)&v0);
            v8->field_10 = *((int128_t *)&v2);
            *((void*)&v8->field_0) = v10;
            return v8;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
