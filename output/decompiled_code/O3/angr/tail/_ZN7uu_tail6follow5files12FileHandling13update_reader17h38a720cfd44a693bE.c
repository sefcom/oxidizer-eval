long long uu_tail::follow::files::FileHandling::update_reader::h38a720cfd44a693b(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x80]
    char v1;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned short v2;  // [sp-0x74]
    char v3;  // [bp-0x70]
    unsigned long long v4;  // [sp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x5c]
    char v7;  // [bp-0x58]
    unsigned long v8;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x48]
    int v10;  // [sp-0x40]
    void* v11;  // [sp-0x30]
    unsigned int v12;  // [sp-0x28]
    struct_2 *v14;  // rbx
    uint128_t v15[2];  // rax
    unsigned long long v17;  // rax
    int v18;  // xmm0
    uint128_t v19[3];  // rax
    int v20;  // xmm0
    unsigned long long v21;  // r14
    struct_1 *v22;  // r15
    struct struct_0 **v23;  // rax

    v14 = _ZN7uu_tail6follow5files12FileHandling7get_mut17hb7abf8e512a39fb9E.llvm.893476530518564186(a0, a1, a2, a3, a4, a5);
    v0 = 0x1b600000000;
    v1 = 0;
    v2 = 0;
    v1 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v0, a1, a2);
    if (*((int *)&v5))
    {
        v0 = 0x8000000000000000;
        v4 = *((long long *)&v7);
        v15 = __rust_alloc(32, 8);
        if (v15)
        {
            v18 = *((int128_t *)&v0);
            v15[1] = *((int128_t *)&v3);
            *((void*)&v15[0]) = v18;
            return v15;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    else
    {
        v17 = __rust_alloc(0x2000, 1);
        if (!v17)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v8 = v17;
        v9 = 0x2000;
        *((int128_t *)&v10) = 0;
        v11 = 0;
        v12 = *((int *)&v6);
        v19 = __rust_alloc(48, 8);
        if (!v19)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v20 = *((int128_t *)&v8);
        v19[2] = *((int128_t *)&v11);
        *((void*)&v19[1]) = v10;
        *((void*)&v19[0]) = v20;
        v21 = v14->field_c8;
        v22 = v14->field_d0;
        v14->field_c8 = v19;
        v14->field_d0 = &anon.c568fa996e9b1afffbd2fe86e67742f4.14.llvm.893476530518564186;
        if (!v21)
            return 0;
        if (v22->field_0)
            v23(v21);
        if (v22->field_8)
            __rust_dealloc(v21);
    }
}
