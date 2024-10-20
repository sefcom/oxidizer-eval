long long uu_tail::follow::watch::WatcherRx::watch_with_parent::he4ac7fc6071c30b2(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xc8], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v1;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xb8], Other Possible Types: unsigned long long
    char v3;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x98], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0x90]
    void* v7;  // [sp-0x88]
    int v8;  // [sp-0x78], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    unsigned long v11;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x50]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rcx
    unsigned long long v21;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // r14
    unsigned long long v25[3];  // rax
    int v26;  // xmm0
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r13
    int v30;  // xmm0

    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a2, a3);
    v17 = v1;
    v18 = v2;
    if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(v17, v18))
    {
LABEL_4c09a6:
        v17 = v1;
        v27 = v2;
        if (!(char)std::path::Path::is_absolute::h3431a23d91045560(v17, v27))
        {
            std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v3, v17, v27);
            v28 = v3;
            v29 = v4;
            if (v28 != 0x8000000000000000)
            {
                if (v0)
                    __rust_dealloc(v17);
                v0 = v28;
                v1 = v29;
                v2 = v5;
            }
            else
            {
                v3 = 0x8000000000000000;
                v6 = v29;
                v25 = __rust_alloc(32, 8);
                if (!v25)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v30 = *((int128_t *)&v3);
                *((int128_t *)&v25[2]) = *((int128_t *)&v5);
                *((void*)&v25[0]) = v30;
LABEL_4c0a7f:
                if (v0)
                {
                    __rust_dealloc(v17);
                    return v25;
                }
                return v25;
            }
        }
        v25 = uu_tail::follow::watch::WatcherRx::watch::h2b5e061523dbb1d7(a0, a1);
        if (!v25)
        {
            if (!v0)
                return 0;
            __rust_dealloc(v17);
        }
    }
    else
    {
        v21 = std::path::Path::parent::h65c9a340a6266f2d(v17, v18, v19, v20);
        if (v21)
        {
            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v21, v19))
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, v21, v19);
                if (v0)
                    __rust_dealloc(v17);
                v2 = v5;
                v26 = *((int128_t *)&v3);
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, ".cannot watch parent directory of ", 1);
                v10 = v5;
                *((int128_t *)&v8) = *((int128_t *)&v3);
                if (v0)
                    __rust_dealloc(v17);
                v2 = v10;
            }
            v0 = v26;
            goto LABEL_4c09a6;
        }
        else
        {
            v8 = v17;
            v9 = v18;
            v11 = &v8;
            v12 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v3 = &g_55ca48;
            v4 = 1;
            v7 = 0;
            v5 = &v11;
            v6 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v3);
            v23 = *((long long *)&v14);
            v24 = *((long long *)&v15);
            v25 = __rust_alloc(32, 8);
            if (!v25)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v25[0] = *((long long *)&v13);
            v25[1] = v23;
            v25[2] = v24;
            *((int *)&v25[1]) = 1;
        }
    }
    goto LABEL_4c0a7f;
}
