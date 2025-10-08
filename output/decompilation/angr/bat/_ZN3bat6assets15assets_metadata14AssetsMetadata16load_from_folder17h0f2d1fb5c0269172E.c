long long bat::assets::assets_metadata::AssetsMetadata::load_from_folder(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    char v3;  // [bp-0x120]
    char v4;  // [bp-0x118]
    char v5;  // [bp-0x110]
    char v6;  // [bp-0x108]
    char v7;  // [bp-0x100]
    unsigned long v8;  // [bp-0xf8]
    int v9;  // [bp-0xf0]
    int v10;  // [bp-0xe0]
    char v11;  // [bp-0xd0]
    int v13;  // xmm0
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    v3.try_load_from_folder(a1, a2);
    if (v3 == 13)
    {
        *((unsigned long *)&a0[40]) = v8;
        v13 = *((int128_t *)&v4);
        *((int128_t *)&a0[24]) = *((int128_t *)&v6);
        a0[8] = v13;
        *((char *)a0) = 13;
        return a0;
    }
    else if (v3 == 6)
    {
        a0[64] = v10;
        v14 = *((int128_t *)&v3);
        v15 = *((int128_t *)&v5);
        v16 = *((int128_t *)&v7);
        a0[48] = v9;
        a0[32] = v16;
        a0[16] = v15;
        *(a0) = v14;
        return a0;
    }
    else
    {
        v0.join(a1, a2, "syntaxes.binthemes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 12);
        std::fs::metadata(&v11, v1, v2);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v11);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        if ((int)*((long long *)&v11) == 2)
        {
            v0.join(a1, a2, "themes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 10);
            std::fs::metadata(&v11, v1, v2);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v11);
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            if ((int)*((long long *)&v11) != 2)
                goto LABEL_83288e;
            *((unsigned long long *)&a0[8]) = 9223372036854775809;
        }
        else
        {
LABEL_83288e:
            *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            *((unsigned int *)&a0[40]) = 0x3b9aca00;
        }
        *((char *)a0) = 13;
        core::ptr::drop_in_place<bat::error::Error>(&v3);
        return a0;
    }
}
