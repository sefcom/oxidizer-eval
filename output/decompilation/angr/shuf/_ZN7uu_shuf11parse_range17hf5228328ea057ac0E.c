long long uu_shuf::parse_range(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x59]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x57]
    unsigned long v3;  // [bp-0x50]
    unsigned long v4;  // [bp-0x48]
    char v5;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char v8;  // [bp-0x28]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    core::str::<impl str>::split_once(&v5, a1, a2);
    if (!v5)
    {
        v11 = uucore::mods::locale::get_message(&a0->field_8, "shuf-error-missing-dash", 23);
        a0->field_0 = 1;
        return v11;
    }
    ::0x4aca30::core::num::<impl u64>::from_str_radix(&v1, v5, v6);
    if (!v1)
    {
        ::0x4aca30::core::num::<impl u64>::from_str_radix(&v1, v7, *((long long *)&v8));
        if (!v1)
        {
            *((unsigned long *)&a0->field_8) = v3;
            *((unsigned long *)&a0->padding_9[7]) = v3;
            a0->field_18 = 0;
            v10 = 0;
            a0->field_0 = v10;
            return v10;
        }
    }
    v0 = v2;
    v1.spec_to_string(&v0);
    *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
    *((unsigned long *)&a0->field_18) = v4;
    a0->field_0 = 1;
    return v4;
}
