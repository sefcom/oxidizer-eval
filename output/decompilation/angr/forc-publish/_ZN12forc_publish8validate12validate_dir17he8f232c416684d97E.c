long long forc_publish::validate::validate_dir(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x188]
    char v2;  // [bp-0x180]
    char v3;  // [bp-0x177]
    char v4;  // [bp-0x170]
    unsigned long v5;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    struct_2 *v8;  // [bp-0x150]
    char v9;  // [bp-0x148]
    int v10;  // [bp-0x138]
    int v11;  // [bp-0x128]
    char v12;  // [bp-0x118]
    char v13;  // [bp-0x108]
    char v14;  // [bp-0xf8]
    char v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xd8]
    char v17;  // [bp-0xd0], Other Possible Types: unsigned long long
    struct_2 *v18;  // [bp-0xc8], Other Possible Types: unsigned long
    char v19;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v20;  // [bp-0xb0]
    int v21;  // [bp-0xa0]
    char v22;  // [bp-0x90]
    char v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x78]
    char v25;  // [bp-0x70]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx

    v0.join(a1, a2, "Forc.tomltokenstruct Registrystruct Registry with 1 element", 9);
    std::fs::metadata(&v17, v1, *((long long *)&v2));
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v17);
    if ((unsigned int)v17 == 2)
    {
        a0->field_0 = 7;
        core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
        return a0;
    }
    v17.from_file(&v0);
    if (v17 == 3)
    {
        a0->field_0 = 8;
        *((struct_2 **)&a0->field_1[7]) = v8;
        return a0;
    }
    memcpy(&v14, &v25, 16);
    memcpy(&v13, &v23, 16);
    memcpy(&v12, &v22, 16);
    v11 = v21;
    v10 = v20;
    memcpy(&v9, &v19, 16);
    v7 = v17;
    v8 = v18;
    if (v17 != 2)
    {
        a0->field_0 = 10;
        core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(&v7);
        return a0;
    }
    if (v8->field_2b8)
    {
        v17 = 1;
        *((int *)&v18) = (v8->field_0 ? (struct struct_2 *)&v8->padding_1[7] : 0);
        v19 = 2;
        v24 = 2;
        do
        {
            if (!v17.next())
            {
                core::ptr::drop_in_place<alloc::boxed::Box<forc_pkg::manifest::PackageManifestFile>>(v8);
                a0->field_0 = 14;
                if ((int)v7 == 2)
                    return a0;
                core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(&v7);
                return a0;
            }
        } while (v28.version());
        v15.clone(v27);
        v6 = v16;
        memcpy(&v4, &v15, 16);
        a0->field_0 = 11;
        *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v3);
        *((unsigned long *)&a0->field_1[15]) = v5;
        a0->field_8 = v6;
    }
    else
    {
        a0->field_0 = 9;
    }
    core::ptr::drop_in_place<alloc::boxed::Box<forc_pkg::manifest::PackageManifestFile>>(v8);
    if (v7 == 2)
        return a0;
    core::ptr::drop_in_place<forc_pkg::manifest::ManifestFile>(&v7);
    return a0;
}
