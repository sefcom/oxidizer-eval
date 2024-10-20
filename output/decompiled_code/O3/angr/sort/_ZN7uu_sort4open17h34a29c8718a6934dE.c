long long uu_sort::open::h34a29c8718a6934d(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x94]
    char v2;  // [bp-0x90]
    unsigned long long v3;  // [sp-0x88]
    char v4;  // [bp-0x80], Other Possible Types: unsigned long long
    char v5;  // [bp-0x78], Other Possible Types: unsigned int, unsigned long
    unsigned short v6;  // [sp-0x74]
    int v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x60]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    char *v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long *v16;  // rax
    unsigned int *v18;  // rax
    unsigned long long v19;  // rax
    uint128_t v20[4];  // rax
    int v21;  // xmm0
    int v22;  // xmm2

    v13 = a1->field_8;
    v14 = a1->field_10;
    if (v14 != 1 || *(v13) != 45)
    {
        v4 = 0x1b600000000;
        v5 = 0;
        v6 = 0;
        v5 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v4, v13, v14);
        if (*((int *)&v0))
        {
            v3 = *((long long *)&v2);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v10, v13, v14);
            v8 = *((long long *)&v11);
            *((int128_t *)&v7) = *((int128_t *)&v10);
            v5 = v3;
            v4 = 2;
            v20 = __rust_alloc(64, 8);
            if (v20)
            {
                v21 = *((int128_t *)&v4);
                v22 = *((int128_t *)&v8);
                v20[3] = *((int128_t *)&v9);
                *((void*)&v20[2]) = v22;
                *((void*)&v20[1]) = v7;
                *((void*)&v20[0]) = v21;
                a0[1] = v20;
                a0[2] = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
                a0[0] = 1;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v18 = __rust_alloc(4, 4);
        if (!v18)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v18) = *((int *)&v1);
        a0[1] = v18;
        v19 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.227.llvm.14646808445695166917;
    }
    else
    {
        v16 = __rust_alloc(8, 8);
        if (!v16)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v16) = std::io::stdio::stdin::h7215cc131abb55d8();
        a0[1] = v16;
        v19 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.228.llvm.14646808445695166917;
    }
    a0[2] = v19;
    a0[0] = 0;
    return a0;
}
