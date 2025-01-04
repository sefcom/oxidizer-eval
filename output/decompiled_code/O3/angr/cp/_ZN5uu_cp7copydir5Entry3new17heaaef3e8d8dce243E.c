long long uu_cp::copydir::Entry::new::heaaef3e8d8dce243(struct_1 *a0, unsigned long long a1[10], unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [sp-0xe8]
    unsigned long long v1;  // [sp-0xd8]
    unsigned long v2;  // [sp-0xd0], Other Possible Types: unsigned long long
    int v3;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0xc0]
    struct struct_0 **v5;  // [sp-0xb8], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    void* v7;  // [sp-0xa8]
    unsigned long long v8;  // [sp-0xa0]
    int v9;  // [sp-0x98]
    unsigned long long v10;  // [sp-0x88]
    char v11;  // [bp-0x78]
    char v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    char *v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    int v32;  // xmm0

    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v17, a2, a3);
    std::path::Path::join::h92bb591ebe182d97(&v11, a1[1], a1[2], &v17);
    uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(&v3, *((long long *)&v12), *((long long *)&v13), (a1[3] == 0x8000000000000000 ? 0 : a1[4]), a1[5]);
    if (v3 == 0x8000000000000000)
    {
        a0->field_0 = 0x8000000000000000;
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v11);
        vvar_291{reg 16} = ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v17);
        return v31;
    }
    v1 = v5;
    *((int128_t *)&v0) = *((int128_t *)&v3);
    if (!a4)
    {
        v24 = a1[6];
        v25 = a1[7];
    }
    else
    {
        v24 = a1[6];
        v25 = a1[7];
        if (((char)uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(v24, v25) & (char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3)))
        {
            v27 = std::fs::create_dir_all::h4110e3e76e14203b(v24, v25, v26);
            if (v27)
            {
                v2 = v27;
                v14 = &v2;
                v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v3 = &g_5b62a0;
                v4 = 2;
                v7 = 0;
                v5 = &v14;
                v6 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v29, v26);
                ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(v2);
            }
        }
        else
        {
            v28 = std::path::Path::strip_prefix::h5d7e53b0b6c79402((long long)(&v0)[8], v1, a1[8], a1[9]);
            if (!v28)
            {
                a0->field_0 = 0x8000000000000000;
                ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v0);
                ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v11);
                v31 = ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v17);
                return v31;
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, v28, v30);
            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v0);
            v1 = v5;
            *((int128_t *)&v0) = *((int128_t *)&v3);
        }
    }
    v5 = v1;
    *((void*)&v3) = v0;
    std::path::Path::join::hb4c158bd60fe0cf5(&v14, v24, v25, &v3);
    v31 = std::path::Path::is_file::h82f08f46fb8d8099(v24, v25);
    v5 = *((long long *)&v13);
    v32 = *((int128_t *)&v11);
    v3 = v32;
    v8 = *((long long *)&v18);
    *((int128_t *)&v6) = *((int128_t *)&v17);
    v10 = *((long long *)&v16);
    *((int128_t *)&v9) = *((int128_t *)&v14);
    a0->field_40 = v10;
    *((void*)&a0->field_30) = v9;
    *((void*)&a0->field_0) = v32;
    a0->field_20 = v7;
    a0->field_28 = v8;
    a0->field_10 = *((int128_t *)&v5);
    a0->field_48 = v31;
    return v31;
}
