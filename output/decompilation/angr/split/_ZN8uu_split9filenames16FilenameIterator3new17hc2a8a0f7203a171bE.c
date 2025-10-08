long long uu_split::filenames::FilenameIterator::new(void* a0, unsigned long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x30]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // r13
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r13
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // 4096
    unsigned long long v15;  // rdx
    int v16;  // xmm0

    v6 = *((char *)&a3->field_20 + 1) * 8;
    v7 = 1051162 >> (*((char *)&a3->field_20 + 1) * 8 & 31);
    v8 = 0x8000000000000000;
    if ((char)a3->field_20)
    {
        v9 = a3->field_18;
        v10 = v8;
        v11 = v6;
        v12 = v7;
        v13 = a2;
    }
    else
    {
        v0.new(v7 & 4294967295, *((long long *)((char *)&a3->field_8 + 8)), a3->field_18);
        if (v0 == 0x8000000000000000)
        {
            v3.to_vec("numerical suffix start value is too large for the suffix length", 63);
            v4 = 1;
            *((double *)&a0[8]) = v3.new();
            *((char **)&a0[16]) = &g_50ab40;
            *((unsigned long long *)a0) = 9223372036854775809;
            return &g_50ab40;
        }
        v10 = v0;
        v11 = v2;
        v12 = v1;
        v13 = v1 >> 8;
    }
    v15 = v13;
    v16 = *((int128_t *)&(&a3->padding_0)[1]);
    *((unsigned long long *)a0) = v10;
    *((unsigned long long *)&a0[8]) = v9;
    *((char *)&a0[16]) = v12;
    *((unsigned int *)&a0[17]) = v15;
    *((char *)&a0[23]) = v15 >> 48;
    *((unsigned short *)&a0[21]) = v15 >> 32;
    *((unsigned long long *)&a0[24]) = v11;
    *((unsigned long *)&a0[32]) = a1;
    *((unsigned long long *)&a0[40]) = a2;
    a0[48] = v16;
    *((char *)&a0[64]) = 1;
    return v15 >> 48;
}
