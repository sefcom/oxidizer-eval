double fish::builtins::bind::BuiltinBind::new(long long a0)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    char v6;  // dl
    int v7;  // xmm3

    v5 = fish::input::input_mappings();
    v0.new();
    a0->field_40 = v5;
    a0->field_48 = v6 & 1;
    v7 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v0;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_30) = v7;
    return (unsigned long long)v0;
}
