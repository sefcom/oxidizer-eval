long long uu_csplit::split_name::SplitName::new(struct_2 *a0, struct_0 *a1, struct_1 *a2, struct_1 *a3)
{
    int v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    int v3;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    int v6;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v7;  // [bp-0xf8]
    unsigned long v8;  // [sp-0xf0], Other Possible Types: unsigned long long
    char *v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v10;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v11;  // [bp-0xe0]
    void* v12;  // [bp-0xd8]
    int v13;  // [bp-0xd0]
    char v14;  // [bp-0xc8]
    int v15;  // [bp-0xc0]
    int v16;  // [bp-0xb8], Other Possible Types: char
    char v17;  // [bp-0xb0]
    unsigned long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x90]
    char v21;  // [bp-0x88], Other Possible Types: unsigned long
    int v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    char *v24;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    int v25;  // [bp-0x68], Other Possible Types: unsigned long long
    int v26;  // [bp-0x60]
    int v27;  // [bp-0x50], Other Possible Types: char
    char v28;  // [bp-0x40]
    unsigned long long v29;  // [bp-0x30]
    int v31;  // xmm0
    unsigned long v32;  // rax
    unsigned long v33;  // rax
    unsigned long v34;  // xmm0lq
    int v35;  // xmm0
    int v36;  // xmm0
    char v37;  // bpl

    if ((char)(((0 ^ *((long long *)&a1->field_0)) & (0 ^ -(*((long long *)&a1->field_0)))) >> 63))
    {
        (char)v7.to_vec("xx%0usrc/uu/csplit/src/split_name.rs", 2);
        v2 = v9;
        v31 = *((int128_t *)&v6);
    }
    else
    {
        v2 = a1->field_10;
        v31 = *((int128_t *)&a1->field_0);
    }
    v0 = v31;
    v32 = a3->field_0;
    if (v32 == 0x8000000000000000)
    {
        v20 = 2;
        v33 = a2->field_0;
        if (!(v33 == 0x8000000000000000))
            goto LABEL_5a2555;
LABEL_5a2488:
        v24 = &v20;
        v25 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v7 = &g_72fa18;
        v8 = 2;
        v12 = 0;
        v9 = &v24;
        v10 = 1;
        v21.map_or_else(&v7);
        goto LABEL_5a256b;
    }
    else
    {
        *((int128_t *)&v25) = *((int128_t *)&(&a3->field_0)[1]);
        v24 = v32;
        uu_csplit::split_name::SplitName::new::{{closure}}(&(char)v7, &v24);
        v34 = *((int128_t *)&v8);
        *((int128_t *)&v3) = *((int128_t *)&v10);
        if (v7 == 13)
        {
            v20 = v34;
            v33 = a2->field_0;
            if (v33 == 0x8000000000000000)
                goto LABEL_5a2488;
LABEL_5a2555:
            *((int128_t *)&v22) = *((int128_t *)&(&a2->field_0)[1]);
            v21 = v33;
LABEL_5a256b:
            v5 = v23;
            v3 = v21;
            v4 = (long long)v22;
            v7.parse(&v3);
            if (v7 != 0x8000000000000000)
            {
                v29 = *((long long *)&v16);
                memcpy(&v28, &v14, 16);
                memcpy(&v25, &v8, 16);
                memcpy(&v27, &v12, 16);
                v24 = v7;
                v25 = v8;
                v3.to_vec(v1, v2);
                v19 = v29;
                v35 = *((int128_t *)&v24);
                memcpy(&v17, &v28, 16);
                v15 = v27;
                v13 = v26;
                v11 = v35;
                v9 = v5;
                v36 = *((int128_t *)&v3);
                v6 = v36;
                a0->field_50 = v18;
                a0->field_58 = v19;
                *((void*)&a0->field_40) = v16;
                a0->field_30 = (int128_t)(&v13)[8];
                a0->field_20 = (int128_t)(&v11)[8];
                *((unsigned long long *)&a0->field_10) = v9;
                *((unsigned long long *)&a0->padding_11[7]) = v10;
                *((void*)&a0->field_0) = v36;
                ::0x5a1810::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                return a0;
            }
            *((unsigned long long *)&a0->padding_1[7]) = (v8 == 9223372036854775823) + 9;
            *((long long *)&a0->field_0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt,u64>,uucore::features::format::FormatError>>(&v7);
        }
        else
        {
            a0->field_20 = (int128_t)v3;
            *((unsigned long long *)&a0->padding_1[7]) = v7;
            *((uint128_t *)&a0->field_10) = v20;
            *((long long *)&a0->field_0) = 0x8000000000000000;
            v37 = 1;
        }
        ::0x5a1810::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        if (!v37)
            return a0;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2);
        return a0;
    }
}
