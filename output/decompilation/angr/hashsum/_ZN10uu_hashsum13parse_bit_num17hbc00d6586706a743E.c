long long uu_hashsum::parse_bit_num(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x17]
    char v2;  // [bp-0x10]

    ::0x4cdcf0::core::num::<impl u64>::from_str_radix(&v0, a1, a2);
    if (!v0)
    {
        a0->field_8 = *((long long *)&v2);
        a0->field_0 = 0;
        return 0;
    }
    a0->field_1 = v1;
    a0->field_0 = 1;
    return 1;
}
