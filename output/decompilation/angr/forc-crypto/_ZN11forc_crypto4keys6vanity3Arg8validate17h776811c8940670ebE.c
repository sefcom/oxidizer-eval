long long forc_crypto::keys::vanity::Arg::validate(unsigned long long a0[6])
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    uint128_t v3;  // [bp-0x30]
    unsigned long v5;  // rdi
    unsigned long long v6;  // rax
    unsigned long v7;  // rdi

    v5 = &a0[2];
    if ((char)(((0 ^ a0[2]) & (0 ^ -(a0[2]))) >> 63))
        v5 = 0;
    v6 = v5.map_or();
    v7 = &a0[5];
    if ((char)(((0 ^ a0[5]) & (0 ^ -(a0[5]))) >> 63))
        v7 = 0;
    if (v7.map_or() + v6 >= 65)
    {
        v0 = &g_a2f028;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
