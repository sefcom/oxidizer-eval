long long uu_df::filesystem::is_over_mounted(unsigned long long a0, unsigned long a1, unsigned long long a2[6])
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2[6];  // [bp-0x10]
    unsigned long long v4[6];  // rax
    unsigned long long v5;  // rax

    v0 = a0;
    v1 = a1 * 152 + a0;
    v2[0] = a2;
    v4 = v0.try_rfold(&(char)v2);
    if (!v4)
        return 0;
    v5 = v4[4].eq(v4[5], a2[4], a2[5]);
    return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
}
