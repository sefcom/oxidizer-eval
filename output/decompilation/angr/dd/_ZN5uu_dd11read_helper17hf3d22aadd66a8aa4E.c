long long uu_dd::read_helper(struct_0 *a0, struct_2 *a1, struct_1 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x80]
    char v1;  // [bp-0x78], Other Possible Types: unsigned long
    char v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4[1];  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x40]
    int v8;  // [bp-0x38], Other Possible Types: char
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    int v12;  // xmm0
    char v13[107];  // r12
    int v14;  // xmm0

    a2.resize(a3, 221);
    if (a1->field_8->field_68 == 1)
    {
        v4.fill_blocks(a1, a2, a1->field_8->field_69);
        v11 = v5;
        if (((char)v4[0] & 1))
        {
            *((unsigned long long *)&a0->field_8) = v11;
            a0->field_0 = 1;
            return 1;
        }
    }
    else
    {
        v4.fill_consecutive(a1, a2);
        v11 = v5;
        if (((char)v4[0] & 1))
        {
            *((unsigned long long *)&a0->field_8) = v11;
            a0->field_0 = 1;
            return 1;
        }
    }
    v3 = v7;
    memcpy(&v1, &v6, 16);
    v0 = v11;
    if (!v11 && !v1)
    {
        v12 = *((int128_t *)&v0);
        *((int128_t *)&(&a0->padding_9)[1]) = *((int128_t *)&v2);
        *((void*)&a0->field_8) = v12;
        a0->field_0 = 0;
        return 0;
    }
    v13 = a1->field_8;
    if (a1->field_8->field_6a)
    {
        v11 = uu_dd::read_helper::perform_swab(*((long long *)&a2->padding_1[7]), a2->field_10);
        v13 = a1->field_8;
    }
    if (v13[80] != 7)
    {
        v4.clone(a2);
        uu_dd::blocks::conv_block_unblock_helper(&v8, &v4, &v13[80], &v0);
        ::0x4cbd60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
        v11 = *((long long *)&v9);
        a2->field_10 = v11;
        *((void*)&a2->field_0) = v8;
    }
    v14 = *((int128_t *)&v0);
    *((int128_t *)&(&a0->padding_9)[1]) = *((int128_t *)&v2);
    *((void*)&a0->field_8) = v14;
    a0->field_0 = 0;
    return v11;
}
