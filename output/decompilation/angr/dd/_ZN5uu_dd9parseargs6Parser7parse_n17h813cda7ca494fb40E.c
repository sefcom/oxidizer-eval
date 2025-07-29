long long uu_dd::parseargs::Parser::parse_n(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r13

    v4 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v0, a1, a2);
    v5 = v1;
    if (v0 == 14)
    {
        v4 = a1.is_contained_in(a2);
        *((unsigned long long *)&a0->field_10) = v1;
        v5 = v4 & 4294967295;
    }
    else
    {
        *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
    }
    a0->field_8 = v5;
    a0->field_0 = v0;
    return v4;
}
