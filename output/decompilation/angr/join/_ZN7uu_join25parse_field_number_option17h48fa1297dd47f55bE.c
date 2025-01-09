long long uu_join::parse_field_number_option::h48fa1297dd47f55b(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[2];  // [bp-0x18]
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    if (!a1)
    {
        *((uint128_t *)&a0[0]) = 0;
        return v3;
    }
    uu_join::parse_field_number::h9316b11a89c3fc26(v0, a1, a2);
    v3 = v0[0];
    if (v3)
    {
        v4 = *((long long *)&v1);
        a0[1] = v3;
        a0[2] = v4;
        a0[0] = 1;
        return v3;
    }
    v3 = *((long long *)&v1);
    a0[1] = 1;
    a0[2] = v3;
    a0[0] = 0;
    return v3;
}
