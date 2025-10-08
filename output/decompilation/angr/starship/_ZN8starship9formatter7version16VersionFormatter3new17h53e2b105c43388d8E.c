long long starship::formatter::version::VersionFormatter::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x38]
    int v5;  // [bp-0x30]
    int v6;  // [bp-0x20]
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rax

    v2.new(a1, a2);
    v9 = *((long long *)&v2);
    memcpy(&v0, &v3, 16);
    v1 = v4;
    if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        *((long long *)&a0->field_30) = *((long long *)&v7);
        *((void*)&a0->field_20) = v6;
        *((void*)&a0->field_18) = v5;
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v1;
    *((void*)&(&a0->field_0)[1]) = v0;
    a0->field_0 = v9;
    return a0;
}
