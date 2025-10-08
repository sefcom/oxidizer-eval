long long bat::output::BuiltinPager::new(struct_0 *a0)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xa8]
    char v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]

    v3.new();
    v7.clone(&v3);
    memcpy(&v6, &v8, 16);
    v5 = v7;
    v1 = 0x8000000000000000;
    v0 = 0;
    v2 = 0;
    v9.spawn_unchecked(&v0, &v5);
    v0.expect(&v9);
    a0->field_30 = 0x8000000000000000;
    a0->field_20 = *((int128_t *)&v0);
    *((void*)&a0->field_10) = v4;
    *((void*)&a0->field_0) = v3;
    return 0x8000000000000000;
}
