long long uu_cp::copydir::build_dir(unsigned long long a0[2], unsigned long long a1, char a2, char a3, char a4, unsigned long long a5, unsigned long long a6)
{
    unsigned int v0;  // [bp-0xd8]
    char v1;  // [bp-0xd4]
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0x98]
    unsigned int v5;  // edx
    unsigned long long v6;  // rax
    unsigned int v7;  // eax

    v1 = a2;
    v5 = (!(a4 & 1) ? 0 : 18);
    if ((a3 & 1))
        v5 = 63;
    if ((a5 & a4 & 1) == 1)
    {
        std::fs::symlink_metadata(&v2, a5, a6);
        if (*((int *)&v2) == 2)
        {
            v6 = *((long long *)&v3);
        }
        else
        {
            v7 = ~(*((int *)&v4));
LABEL_49aee8:
            v0 = (v7 & 511 | v5) ^ 511;
            v6 = v0.create(a1);
            if (!v6)
            {
                a0[0] = 9223372036854775820;
                return v6;
            }
        }
        a0[0] = 9223372036854775809;
        a0[1] = v6;
        return v6;
    }
    v7 = uucore::features::mode::get_umask();
    goto LABEL_49aee8;
}
