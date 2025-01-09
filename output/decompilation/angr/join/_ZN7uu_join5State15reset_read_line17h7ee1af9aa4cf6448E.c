long long uu_join::State::reset_read_line::h7ee1af9aa4cf6448(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x48]
    unsigned long v4;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x30]
    int v6;  // [sp-0x28]
    int v7;  // [sp-0x18]
    unsigned long long v10;  // rax

    uu_join::State::read_line::hae4618c32b71c268(&v0, a0);
    v10 = *((long long *)&v1);
    if (v4 != 9223372036854775809)
    {
        *((int128_t *)&v7) = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v2);
        v4 = *((long long *)&v0);
        v5 = v10;
        uu_join::State::reset::h80c820df90bbe344(a0, &v4);
        return 0;
    }
    return v10;
}
