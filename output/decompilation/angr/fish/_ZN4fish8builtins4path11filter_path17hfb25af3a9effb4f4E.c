long long fish::builtins::path::filter_path(unsigned int a0[4], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned long long a5, unsigned int a6)
{
    unsigned int v0;  // [bp-0x1b4]
    unsigned int v1;  // [bp-0x1b4]
    unsigned int v2;  // [bp-0x1b0]
    unsigned int v3;  // [bp-0x1ac]
    unsigned int v4;  // [bp-0x1a8]
    unsigned int v5;  // [bp-0x1a4]
    unsigned int v6;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x1a0]
    char v8;  // [bp-0x190]
    unsigned long long v9;  // [bp-0x188]
    unsigned int v10;  // [bp-0x158]
    unsigned int v11;  // [bp-0x154]
    int v12;  // [bp-0x150], Other Possible Types: char
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xd8]
    char v15;  // [bp-0xa8]
    unsigned long v16;  // rbp
    unsigned long v17;  // r15
    unsigned int v18;  // eax
    unsigned long long v19;  // rax
    char v20;  // r12b
    char v21;  // r13b
    unsigned int v22;  // edx
    unsigned long long v23;  // r15
    unsigned long long v24;  // 4096

    v16 = a0[0];
    v17 = a0[2];
    v18 = v16;
    v19 = v18 | (unsigned int)v17;
    if (!v18 && !(unsigned int)v17)
        return (v18 | (unsigned int)v17) & 0xffffff00 | 1;
    if ((unsigned int)v16)
    {
        v6 = a4;
        v5 = a3;
        v4 = a5;
        v20 = a0[1];
        if (!(v20 & 8))
        {
            fish::wutil::wstat(&v8, a1, a2);
            if (*((int *)&v8) == 2)
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
                return 0;
            }
            v1 = v10;
            v3 = v11;
            v2 = *((int *)&v12);
            v19 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
            a5 = v4;
            a3 = v5;
LABEL_135e1dd:
            v22 = v1 & 0xf000;
            if ((!(v20 & 4) || v22 != 0x8000) && (!(v20 & 2) || v22 != 0x4000) && (!(v20 & 1) || v22 != 0x6000) && (!(v20 & 16) || v22 != 0x2000) && (!(v20 & 32) || v22 != 0x1000))
            {
                v19 = 0;
                if (!(v20 & 64))
                {
                    return 0;
                }
                else if (v22 != 0xc000)
                {
                    return 0;
                }
            }
        }
        else
        {
            fish::wutil::lwstat(&v13, a1, a2);
            if (*((int *)&v13) == 2)
            {
                v9 = *((long long *)&v14);
                v8 = 1;
                core::ptr::drop_in_place<core::result::Result<fish::fs::PotentialUpdate<()>,std::io::error::Error>>(&v8);
            }
            else
            {
                v21 = (0xf000 & *((int *)&v15)) == 0xa000;
            }
            fish::wutil::wstat(&v8, a1, a2);
            if (*((int *)&v8) == 2)
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
                return 0;
            }
            v1 = v10;
            v3 = v11;
            v2 = *((int *)&v12);
            v19 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
            a5 = v4;
            a3 = v5;
            a4 = v7;
            if (!v21)
                goto LABEL_135e1dd;
        }
    }
    if (!((char)v17 & 1))
        return v19 & 0xffffffffffffff00 | 1;
    v23 = a0[3];
    v24 = a1;
    if (((char)v23 & 7))
    {
        v6 = a1;
        v19 = fish::wutil::waccess(a1, a2, (((char)v23 * 16 | (char)v23 >> 4) * 2 & 64 | (((__ROL__((char)v23, 4) & 16) * 4 | __ROL__((char)v23, 4) >> 2) & 80) * 2) >> 5);
        a3 &= 4294967295;
        v23 &= 4294967295;
        a5 &= 4294967295;
        v24 = v6;
        if ((unsigned int)v19)
            return 0;
    }
    if (!((char)v23 & 120))
        return v19 & 0xffffffffffffff00 | 1;
    if (!(char)v16)
    {
        fish::wutil::wstat(&v8, v24, a2);
        if (*((int *)&v8) == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
            return 0;
        }
        v1 = v10;
        v3 = v11;
        v2 = (int)v12;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v8);
        a5 &= 4294967295;
        a3 &= 4294967295;
    }
    if (((char)v23 & 8) && !((unsigned short)v1 & 0x800))
        return 0;
    if (((char)v23 & 16))
    {
        v0 = v1 & 0x400;
        if ((v1 & 0x400))
            goto LABEL_135e34a;
    }
    else
    {
LABEL_135e34a:
        if (!((char)v23 & 32) || !(((char)a3 ^ 1 | a4 != v3) & 1))
        {
            if (!((char)v23 & 64))
            {
                return (v2 & 0xffffff00 | a6 != v2) & 0xffffffffffffff00 | 1;
            }
            else if (!(((char)a5 ^ 1 | a6 != v2) & 1))
            {
                return (v2 & 0xffffff00 | a6 != v2) & 0xffffffffffffff00 | 1;
            }
        }
    }
    return 0;
}
