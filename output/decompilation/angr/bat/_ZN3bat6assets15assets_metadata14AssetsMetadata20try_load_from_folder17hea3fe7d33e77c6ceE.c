double bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x30]
    int v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    unsigned long long v8;  // rax
    unsigned long v9;  // xmm0lq

    v3.join(a1, a2, "metadata.yamlsyntaxes.binthemes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 13);
    v0.open(&v3);
    if (v0 == 1)
    {
        v8 = v2;
        a0->field_0 = 0;
    }
    else
    {
        serde_yaml::de::from_reader(&v3, v1);
        v8 = v4;
        if (v3 != 9223372036854775809)
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v6);
            *((void*)&(&a0->field_10)[1]) = v5;
            a0->field_8 = v3;
            a0->field_10 = v4;
            a0->field_0 = 13;
            return (unsigned long long)v5;
        }
        a0->field_0 = 6;
    }
    a0->field_8 = v8;
    return v9;
}
