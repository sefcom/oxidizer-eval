long long uu_split::filenames::FilenameIterator::new(struct_0 *a0, unsigned long a1, unsigned long a2, struct_1 *a3)
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
    int v15;  // xmm0

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
            uucore::mods::locale::get_message(&v3, "split-error-numerical-suffix-start-too-large", 44);
            v4 = 1;
            *((double *)&a0->field_8) = v3.new();
            *((char **)&a0->field_10) = &g_5a7da0;
            a0->field_0 = 9223372036854775809;
            return a0;
        }
        v10 = v0;
        v11 = v2;
        v12 = v1;
        v13 = v1 >> 8;
    }
    v15 = *((int128_t *)&(&a3->padding_0)[1]);
    a0->field_0 = v10;
    a0->field_8 = v9;
    a0->field_10 = v12;
    *((unsigned int *)&a0->padding_11[0]) = v13;
    a0->padding_11[6] = v13 >> 48;
    *((unsigned short *)&a0->padding_11[4]) = v13 >> 32;
    a0->field_18 = v11;
    a0->field_20 = a1;
    a0->field_28 = a2;
    *((void*)&a0->field_30) = v15;
    a0->field_40 = 1;
    return a0;
}
