long long uu_chroot::parse_userspec(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x80], Other Possible Types: char
    unsigned long v1;  // [bp-0x70]
    char v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x48], Other Possible Types: char
    char v7;  // [bp-0x38]
    unsigned long long v9;  // rax
    char v10;  // al
    unsigned long long v11;  // r13
    unsigned long long v12;  // r12
    unsigned long long v13;  // r14

    v9 = core::str::<impl str>::split_once(&v2, a1, a2);
    if (v2)
    {
        v10 = v2.equal(v3, 1, 0);
        v11 = v4;
        v12 = v5;
        v9 = v11.equal(v12, 1, 0);
        if (v10)
        {
            v13 = 0x8000000000000000;
            if (!(char)v9)
            {
                v9 = a0 + 8.to_vec(v11, v12);
                v13 = 9223372036854775810;
            }
        }
        else if ((char)v9)
        {
            a0 + 8.to_vec(v2, v3);
            *((unsigned long long *)a0) = 9223372036854775809;
            return 9223372036854775809;
        }
        else
        {
            v0.to_vec(v2, v3);
            v6.to_vec(v11, v12);
            *((long long *)&a0[40]) = *((long long *)&v7);
            a0[24] = v6;
            *((unsigned long *)&a0[16]) = v1;
            *(a0) = v0;
            return v1;
        }
    }
    else
    {
        v13 = 0x8000000000000000;
        if (a2)
        {
            v9 = a0 + 8.to_vec(a1, a2);
            v13 = 9223372036854775809;
        }
    }
    *((unsigned long long *)a0) = v13;
    return v9;
}
