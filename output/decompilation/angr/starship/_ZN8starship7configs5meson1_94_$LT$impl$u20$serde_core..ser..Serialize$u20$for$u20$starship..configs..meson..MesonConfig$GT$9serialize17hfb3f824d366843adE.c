long long starship::configs::meson::_::<impl serde_core::ser::Serialize for starship::configs::meson::MesonConfig>::serialize(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0x100]
    int v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    int v9;  // [bp-0x98], Other Possible Types: char
    unsigned long long v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    int v15;  // [bp-0x60]
    int v16;  // [bp-0x50]
    int v17;  // [bp-0x40]
    char v18;  // [bp-0x30]
    unsigned long long v19;  // [bp-0x20]
    int v21;  // xmm0

    (char)v0.serialize_struct();
    memcpy(&v9, &v1, 16);
    v10 = v3;
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v10;
        *((void*)&(&a0->field_0)[1]) = v9;
        a0->field_0 = 9223372036854775814;
        return v10;
    }
    v19 = v8;
    memcpy(&v18, &v7, 16);
    v17 = v6;
    v16 = v5;
    v15 = v4;
    memcpy(&v12, &v9, 16);
    v14 = v10;
    v11 = *((long long *)&v0);
    (char)v0.serialize_field(&v11, a1 + 64);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v11, "truncation_symbolhome_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotnetConfigheuristicstruct DotnetConfigEl", 17, a1);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v11, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, a1 + 16);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v11, "symbolstyleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 6, a1 + 32);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v11, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, a1 + 48);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        (char)v0.serialize_field(&v11, "disabled", 8, a1 + 68);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            v8 = v19;
                            memcpy(&v7, &v18, 16);
                            v6 = v17;
                            v21 = *((int128_t *)&v11);
                            memcpy(&v5, &v16, 16);
                            v4 = v15;
                            *((int128_t *)&v2) = *((int128_t *)&v13);
                            v0 = v21;
                            return a0.end(&(char)v0);
                        }
                    }
                }
            }
        }
    }
    *((long long *)((char *)&a0->field_8 + 8)) = (long long)v2;
    *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v0;
    a0->field_0 = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v11);
}
