long long starship::context::Context::get_cmd_duration(void* a0, unsigned long long a1[20])
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    if ((char)(((0 ^ a1[17]) & (0 ^ -(a1[17]))) >> 63))
    {
        *((uint128_t *)a0) = 0;
        return a0;
    }
    ::0xa6d5b0::core::num::<impl u128>::from_ascii_radix(&v0, a1[18], a1[19]);
    v3 = 0;
    if (!v0)
    {
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        v3 = 1;
    }
    *((unsigned long long *)a0) = v3;
    *((unsigned long long *)&a0[8]) = 0;
    return a0;
}
