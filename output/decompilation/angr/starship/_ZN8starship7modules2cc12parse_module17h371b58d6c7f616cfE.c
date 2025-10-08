void starship::modules::cc::parse_module(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long long
    char v1;  // [bp-0x100]
    char v2;  // [bp-0xf8]
    unsigned long v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8]
    unsigned long v9;  // [bp-0xa8]
    int v10;  // [bp-0xa0]
    unsigned long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    char v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    int v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x38]

    v0.new(a3->field_60, a3->field_68);
    v7 = a1;
    *((uint128_t *)&v8) = a3->field_70;
    v9 = &a3->padding_80;
    *((uint128_t *)&v10) = a3->field_90;
    v11 = &a3->padding_0[72];
    v12 = a4;
    v13 = a2;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = 1;
    }
    else
    {
        v18 = v6;
        v17 = v5;
        v16 = v4;
        memcpy(&v15, &v2, 16);
        memcpy(&v14, &v0, 16);
        starship::modules::cc::parse_module::{{closure}}(a0, &v7, &v14);
    }
    core::ptr::drop_in_place<starship::configs::terraform::TerraformConfig>(a3);
    return;
}
