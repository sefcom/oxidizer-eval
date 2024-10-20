long long uu_dd::Output::new_file_from_stdout::he14de4c7db5814e3(struct_0 *a0, char a1[161], unsigned long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned int, unsigned long long
    unsigned int v1;  // [sp-0x3c]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v4;  // [sp-0x28]
    unsigned int v5;  // [sp-0x1c]
    unsigned long long v7;  // rax
    uint128_t v8[2];  // rax
    unsigned int v9;  // eax
    int v10;  // xmm0
    unsigned int v11;  // ebp
    unsigned long v12;  // rdx
    uint128_t v13[2];  // rax
    int v14;  // xmm0

    std::io::stdio::stdout::h077da66234850927();
    v5 = 1;
    std::os::fd::owned::BorrowedFd::try_clone_to_owned::h0713d1a13fb6591a(&v0, &v5);
    if (!v0)
    {
        v9 = a1[150] * 0x400;
        if (a1[152])
            v9 |= 0x4000;
        if (a1[153])
            v9 |= 0x10000;
        if (a1[154])
            v9 |= 0x1000;
        if (a1[158])
            v9 |= 0x40000;
        if (a1[159])
            v9 |= 0x100;
        if (a1[160])
            v9 |= 0x20000;
        if (a1[157])
            v9 |= 0x800;
        v11 = v1;
        if (a1[155])
            v9 |= 0x101000;
        if (v1)
        {
            v1 = v9;
            v0 = 5;
            if ((int)nix::fcntl::fcntl::h83a996e93dc3fb5a(v11, &v0))
            {
                v0 = 0x8000000000000000;
                v4 = v12 * 0x100000000 | 2;
                v13 = __rust_alloc(32, 8);
                if (v13)
                {
                    v14 = *((int128_t *)&v0);
                    v13[1] = *((int128_t *)&v3);
                    *((void*)&v13[0]) = v14;
                    a0->field_8 = v13;
                    a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                    a0->field_0 = 4;
                    close(v11);
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        uu_dd::Output::prepare_file::he5401ac5005677cd(a0, v11, a1);
        return a0;
    }
    else
    {
        v7 = *((long long *)&v2);
        v0 = 0x8000000000000000;
        v4 = v7;
        v8 = __rust_alloc(32, 8);
        if (v8)
        {
            v10 = *((int128_t *)&v0);
            v8[1] = *((int128_t *)&v3);
            *((void*)&v8[0]) = v10;
            a0->field_8 = v8;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
