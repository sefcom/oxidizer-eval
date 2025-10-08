long long starship::formatter::version::VersionFormatter::format_version(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    int v1;  // [bp-0x58]
    char v2;  // [bp-0x48]

    v0.new(a3, a4);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        a0.format(&v0, a1, a2);
        return a0;
    }
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v2);
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 1;
    return a0;
}
