long long uu_df::is_best(unsigned long long a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3[3];  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = a0;
    v1 = a1 * 152 + a0;
    v3 = v0.next();
    if (v3)
    {
        do
        {
            v4 = a2[1].index(a2[2]);
            if ((char)v3[1].equal(v3[2], v4, v5) && (char)uu_df::mount_info_lt(a2, v3))
                return 0;
            v3 = v0.next();
        } while (v3);
    }
    return v3 & 0xffffffffffffff00 | 1;
}
