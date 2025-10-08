double bat::assets::assets_metadata::AssetsMetadata::new(long long a0, long long a1, long long a2)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned int v4;  // edx

    v0.to_vec(a1, a2);
    v3 = std::time::SystemTime::now();
    a0->field_10 = *((long long *)&v1);
    *((void*)&a0->field_0) = v0;
    a0->field_18 = v3;
    a0->field_20 = v4;
    return (unsigned long long)v0;
}
