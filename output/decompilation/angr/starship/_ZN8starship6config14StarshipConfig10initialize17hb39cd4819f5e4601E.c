long long starship::config::StarshipConfig::initialize(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    int v1;  // [bp-0x50]
    int v2;  // [bp-0x40]
    int v3;  // [bp-0x30]
    int v4;  // [bp-0x20]
    char v5;  // [bp-0x10]

    v0.config_from_file(a1, a2);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        *((long long *)((char *)&a0->field_38 + 8)) = *((long long *)&v5);
        *((void*)((char *)&a0->field_28 + 8)) = v4;
        *((void*)((char *)&a0->field_18 + 8)) = v3;
        *((void*)((char *)&a0->field_8 + 8)) = v2;
        *((void*)&(&a0->field_0)[1]) = v1;
    }
    a0->field_0 = v0;
    return a0;
}
