long long bat::assets::build_assets::acknowledgements::handle_notice(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x18], Other Possible Types: unsigned long long
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    char v6;  // dl

    std::fs::read_to_string(&v0, a1, a2);
    v4 = v0;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v4 = v1;
    }
    else
    {
        v5 = *((long long *)&v2);
        a0->field_10 = v1;
        a0->field_18 = v5;
        v6 = 13;
    }
    a0->field_0 = v6;
    a0->field_8 = v4;
    return v4;
}
