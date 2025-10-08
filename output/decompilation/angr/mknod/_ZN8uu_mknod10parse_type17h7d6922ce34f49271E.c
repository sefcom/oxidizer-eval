long long uu_mknod::parse_type(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x2c]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned int v7;  // edx

    v4 = a1;
    v5 = a1 + a2;
    if (!((char)core::str::validations::next_code_point(&v4) & 1))
    {
        v0.to_vec("missing device typeinvalid device type ", 19);
        *((unsigned int *)((char *)&a0->field_c + 4)) = v3;
        *((unsigned long *)&(&a0->field_8)[1]) = v2;
        a0->field_0 = v0;
        a0->field_8 = v1;
        return v0;
    }
    return uu_mknod::parse_type::{{closure}}(a0, a1, a2, v7);
}
