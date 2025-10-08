long long bat::assets::assets_metadata::AssetsMetadata::save_to_folder(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax

    v3.join(a2, a3, "metadata.yamlsyntaxes.binthemes.binbat follows semantic versioningsrc/assets/assets_metadata.rs", 13);
    v0.create(&v3);
    if (v0 == 1)
    {
        a0->field_0 = 0;
        a0->field_8 = v2;
        return v2;
    }
    v5 = serde_yaml::ser::to_writer(v1, a1);
    if (!v5)
    {
        a0->field_0 = 13;
        return v5;
    }
    a0->field_0 = 6;
    a0->field_8 = v5;
    return v5;
}
