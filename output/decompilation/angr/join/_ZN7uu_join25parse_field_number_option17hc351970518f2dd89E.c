long long uu_join::parse_field_number_option(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rax
    unsigned long v5;  // rax

    if (!a1)
    {
        *((uint128_t *)a0) = 0;
        return v5;
    }
    uu_join::parse_field_number(&v0, a1, a2);
    if (!v0)
    {
        v4 = *((long long *)&v1);
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = v4;
        *((unsigned long long *)a0) = 0;
        return v4;
    }
    v3 = *((long long *)&v1);
    *((unsigned long long *)&a0[8]) = v0;
    *((unsigned long long *)&a0[16]) = v3;
    *((unsigned long long *)a0) = 1;
    return v0;
}
