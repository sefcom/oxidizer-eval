long long uu_tr::operation::Sequence::parse_backslash::h345c32065b0e9c92(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    unsigned long v4;  // [sp-0x18]
    unsigned long long v5;  // [sp-0x10]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rdx
    int v10;  // xmm0

    v4 = "\\src/uu/tr/src/operation.rs";
    v5 = 1;
    v7 = nom::sequence::preceded::_$u7b$$u7b$closure$u7d$$u7d$::h15123993b9b8fd57(&v0, &v4, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v10 = *((int128_t *)&v0);
        *((int128_t *)&a0[2]) = *((int128_t *)&v2);
        *((void*)&a0[0]) = v10;
        return v7;
    }
    v7 = *((long long *)&v1);
    v8 = *((long long *)&v2);
    v9 = v3;
    switch ((unsigned int)v9)
    {
    case 97:
        v9 = v9 & 0xffffffffffffff00 | 7;
        break;
    case 98:
        v9 = v9 & 0xffffffffffffff00 | 8;
        break;
    case 102:
        v9 = v9 & 0xffffffffffffff00 | 12;
        break;
    case 110:
        v9 = v9 & 0xffffffffffffff00 | 10;
        break;
    case 114:
        v9 = v9 & 0xffffffffffffff00 | 13;
        break;
    case 116:
        v9 = v9 & 0xffffffffffffff00 | 9;
        break;
    case 118:
        v9 = v9 & 0xffffffffffffff00 | 11;
        break;
    }
    a0[1] = v7;
    a0[2] = v8;
    *((char *)&a0[1]) = v9;
    a0[0] = 3;
    return v7;
}
