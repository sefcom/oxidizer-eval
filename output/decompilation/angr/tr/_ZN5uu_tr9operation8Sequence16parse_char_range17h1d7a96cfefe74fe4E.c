long long uu_tr::operation::Sequence::parse_char_range(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    char v4;  // [bp-0x17]
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long v8;  // rcx
    int v9;  // xmm0

    v6 = 1;
    v7 = v0.process("-' are in reverse collating sequence order: equivalence class operand must be a single character\\", 1, a1, a2);
    if (*((int *)&v0) == 3)
    {
        v7 = v3;
        v8 = v4;
        *((int128_t *)&a0[8]) = *((int128_t *)&v1);
        *((unsigned int *)&a0[24]) = ((v7 & 255) <= (v8 & 255)) * 2 + 10;
        *((unsigned int *)&a0[28]) = v8;
        *((int *)&a0[32]) = ((char)v7 > (char)v8 ? ((unsigned int)v7 & 255) * 0x100 + ((unsigned int)v8 & 255) * 0x10000 + 1 : (unsigned int)v7 & 255);
        v6 = 0;
    }
    else
    {
        v9 = *((int128_t *)&v0);
        *((int128_t *)&a0[24]) = *((int128_t *)&v2);
        a0[8] = v9;
    }
    *((unsigned long long *)a0) = v6;
    return v7;
}
