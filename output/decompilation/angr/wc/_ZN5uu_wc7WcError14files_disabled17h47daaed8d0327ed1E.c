long long uu_wc::WcError::files_disabled(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    unsigned long long v4;  // [bp-0x18]

    v0.to_string_lossy(a1, a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v3.to_vec(v1, v2);
    }
    else
    {
        v4 = v2;
        memcpy(&v3, &v0, 16);
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
    *((void*)&(&a0->field_0)[1]) = v3;
    a0->field_0 = 9223372036854775809;
    return v4;
}
