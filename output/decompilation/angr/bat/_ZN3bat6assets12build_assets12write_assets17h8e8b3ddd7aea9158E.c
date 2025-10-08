long long bat::assets::build_assets::write_assets(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[3], unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    char *v5;  // [bp-0x80], Other Possible Types: unsigned long long
    int v6;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x70]
    int v8;  // [bp-0x60]
    int v9;  // [bp-0x50]
    char *v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // rax
    int v13;  // xmm0
    int v14;  // xmm1
    int v15;  // xmm2
    int v16;  // xmm0
    int v17;  // xmm1
    int v18;  // xmm2

    v3 = std::fs::create_dir_all(a4, a5);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v3);
    v0.join(a4, a5, "themes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 10);
    bat::assets::build_assets::asset_to_cache(&v3, a1, v1, *((long long *)&v2));
    if ((char)v3 == 13)
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        v0.join(a4, a5, "syntaxes.binthemes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 12);
        bat::assets::build_assets::asset_to_cache(&v3, a2, v1, *((long long *)&v2));
        if ((char)v3 == 13)
        {
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            if (!((char)(((0 ^ a3[0]) & (0 ^ -(a3[0]))) >> 63)))
            {
                v0.join(a4, a5, "acknowledgements.binCould not serialize Could not save ", 20);
                bat::assets::build_assets::asset_to_cache(&v3, a3[1], a3[2], v1, *((long long *)&v2));
                if ((char)v3 == 13)
                {
                    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                    goto LABEL_8342be;
                }
            }
            else
            {
LABEL_8342be:
                v0.from_utf8_lossy(a4, a5);
                v10 = &v0;
                v11 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                v3 = &g_ace0d8;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_print(&v3);
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v0);
                v0.new(a6, a7);
                v3.save_to_folder(&v0, a4, a5);
                if ((char)v3 != 13)
                {
                    a0[64] = v9;
                    v13 = *((int128_t *)&v3);
                    v14 = *((int128_t *)&v5);
                    v15 = *((int128_t *)&v7);
                    a0[48] = v8;
                    a0[32] = v15;
                    a0[16] = v14;
                    *(a0) = v13;
                    return (unsigned long long)core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v0);
                }
                core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v0);
                v3 = &g_ace0f8;
                v4 = 1;
                v5 = 8;
                *((uint128_t *)&v6) = 0;
                v12 = std::io::stdio::_print(&v3);
                *((char *)a0) = 13;
                return v12;
            }
        }
    }
    a0[64] = v9;
    v16 = *((int128_t *)&v3);
    v17 = *((int128_t *)&v5);
    v18 = *((int128_t *)&v7);
    a0[48] = v8;
    a0[32] = v18;
    a0[16] = v17;
    *(a0) = v16;
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v0);
}
