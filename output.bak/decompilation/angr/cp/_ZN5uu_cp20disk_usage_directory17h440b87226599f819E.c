long long uu_cp::disk_usage_directory::h440b87226599f819(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x148], Other Possible Types: unsigned long long
    char v1;  // [sp-0x140]
    unsigned long v2;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x130]
    int v4;  // [sp-0x128]
    unsigned long long v5;  // [sp-0x118]
    char v6;  // [bp-0x110]
    char v7;  // [bp-0x108]
    char v8;  // [bp-0x100]
    char v9;  // [bp-0xf8]
    char v10;  // [bp-0xe8]
    char v11;  // [bp-0xe0]
    char v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    char v14;  // [bp-0x90]
    void* v18;  // rbx
    int v19;  // ymm0
    int v22;  // xmm0
    unsigned long long v24;  // rbp

    std::fs::read_dir::h8e79f9b54e02cd93(&v11, a0, a1);
    if (v1 == 2)
        return 1;
    v0 = *((long long *)&v11);
    v1 = v12;
    v18 = 0;
    while (true)
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v6, &v0);
        if (!*((long long *)&v6))
        {
            ::0x4fc3e0::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2();
            return 0;
        }
        if (!v2)
            break;
        v5 = *((long long *)&v10);
        v22 = *((int128_t *)&v9);
        v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
        v4 = v22;
        v2 = *((long long *)&v7);
        v3 = *((long long *)&v8);
        std::fs::DirEntry::file_type::hd81c8483f7ba6043(&v11, &v2);
        if (*((int *)&v11))
        {
LABEL_508bab:
            goto LABEL_508bd0;
        }
        else
        {
            if (((short)*((int *)&(&v11)[4]) & 0xf000) == 0x4000)
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(&v11, &v2);
                if (!uu_cp::disk_usage_directory::h440b87226599f819(*((long long *)&v12), *((long long *)&v13)))
                {
                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
                }
                else
                {
                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
LABEL_508bd0:
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(&v2);
                    break;
                }
            }
            else
            {
                std::fs::DirEntry::metadata::h92d6a6465cae443d(&v11, &v2);
                if (*((int *)&v11) == 2)
                    goto LABEL_508bab;
                v24 = *((long long *)&v14);
            }
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(&v2);
            v18 += v24;
        }
    }
    ::0x4fc3e0::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2();
}
