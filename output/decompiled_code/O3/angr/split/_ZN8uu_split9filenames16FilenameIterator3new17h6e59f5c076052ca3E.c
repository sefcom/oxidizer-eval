long long uu_split::filenames::FilenameIterator::new::h6e59f5c076052ca3(struct_2 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // r14
    unsigned long long v9;  // r9
    uint128_t v10[3];  // rax
    unsigned long long v11;  // r8
    int v12;  // xmm0
    struct_0 *v13;  // rax

    v5 = *((char *)&a3->field_20 + 1);
    v6 = v5 | -0x100 | (v5 & 255) * 8 & 255;
    v7 = 1051162 >> ((char)((v5 & 255) * 8) & 31);
    v8 = 0x8000000000000000;
    if ((char)a3->field_20)
    {
        v9 = a3->field_18;
    }
    else
    {
        uu_split::number::FixedWidthNumber::new::h793aeeade07fec3f(&v0, v7 & 4294967295, *((long long *)((char *)&a3->field_8 + 8)), a3->field_18);
        v8 = *((long long *)&v0);
        if (v8 != 0x8000000000000000)
        {
            v9 = *((long long *)&v1);
            v7 = *((long long *)&v2);
            v6 = *((long long *)&v3);
            v11 = v7 >> 8;
        }
        else
        {
            v10 = __rust_alloc(63, 1);
            if (!v10)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *((int128_t *)((char *)&v10[2] + 15)) = 138844115831897046795442116742162179432;
            v10[2] = 138842676100815433776566249347259264884;
            v10[1] = 43134542223558339118333170418116227872;
            v10[0] = 160054627587737136308144662278914798958;
            v13 = __rust_alloc(32, 8);
            if (v13)
            {
                v13->field_0 = 63;
                v13->field_8 = v10;
                v13->field_10 = 63;
                v13->field_18 = 1;
                a0->field_8 = v13;
                *((char **)&a0->field_10) = &g_50c6c8;
                a0->field_0 = 9223372036854775809;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    v12 = *((int128_t *)&(&a3->padding_0)[1]);
    a0->field_0 = v8;
    a0->field_8 = v9;
    a0->field_10 = v7;
    *((unsigned int *)&a0->padding_11[0]) = v11;
    a0->padding_11[6] = v11 >> 48;
    *((unsigned short *)&a0->padding_11[4]) = v11 >> 32;
    a0->field_18 = v6;
    a0->field_20 = a1;
    a0->field_28 = a2;
    *((void*)&a0->field_30) = v12;
    a0->field_40 = 1;
    return a0;
}
