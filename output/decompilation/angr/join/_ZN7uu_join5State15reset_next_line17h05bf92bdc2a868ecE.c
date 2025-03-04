long long uu_join::State::reset_next_line::h05bf92bdc2a868ec(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x88]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned long v6;  // [sp-0x48]
    int v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x30]
    int v9;  // [sp-0x28]
    unsigned long long v12;  // rax

    uu_join::State::next_line::hc7c703feb1ea580e(&v2, a1, a2);
    *((int128_t *)&v0) = *((int128_t *)&v3);
    v1 = *((long long *)&v4);
    if (v6 == 9223372036854775809)
    {
        v12 = v1;
        a0[2] = v12;
        *((void*)&a0[0]) = v0;
        return v12;
    }
    *((int128_t *)&v9) = *((int128_t *)&v5);
    v6 = *((long long *)&v2);
    v7 = v0;
    v8 = v1;
    v12 = uu_join::State::reset::h80c820df90bbe344(a1, &v6);
    a0[0] = 9223372036854775809;
    return v12;
}
