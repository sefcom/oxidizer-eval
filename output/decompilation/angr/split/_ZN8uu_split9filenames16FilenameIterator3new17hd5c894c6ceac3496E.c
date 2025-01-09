long long uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned int v5;  // [sp-0x30]
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rax
    unsigned long long v10;  // r15
    unsigned long long v11;  // r8
    struct_0 *v12;  // 4096
    int v14;  // xmm0

    v7 = *((char *)&a3->field_20 + 1);
    v8 = v7 & 0xffffffffffffff00 | (v7 & 255) * 8 & 255;
    v9 = 1051162 >> ((char)((v7 & 255) * 8) & 31);
    v10 = 0x8000000000000000;
    if ((char)a3->field_20)
    {
        v11 = a3->field_18;
        v12 = a0;
    }
    else
    {
        uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(&v0, v9 & 4294967295, *((long long *)((char *)&a3->field_8 + 8)), a3->field_18);
        v10 = *((long long *)&v0);
        if (v10 == 0x8000000000000000)
        {
            ::0x4d92a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v4);
            v5 = 1;
            *((double *)&a0->field_8) = ::0x4d9380::alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&v4);
            *((char **)&a0->field_10) = &g_549160;
            a0->field_0 = 9223372036854775809;
            return a0;
        }
        v11 = *((long long *)&v1);
        v9 = *((long long *)&v2);
        v8 = *((long long *)&v3);
        v12 = v9 >> 8;
    }
    v14 = *((int128_t *)&(&a3->padding_0)[1]);
    a0->field_0 = v10;
    a0->field_8 = v11;
    a0->field_10 = v9;
    *((unsigned int *)&a0->padding_11[0]) = (unsigned int)v12;
    a0->padding_11[6] = v12 >> 48;
    *((unsigned short *)&a0->padding_11[4]) = v12 >> 32;
    a0->field_18 = v8;
    a0->field_20 = a1;
    a0->field_28 = a2;
    *((void*)&a0->field_30) = v14;
    a0->field_40 = 1;
    return a0;
}
