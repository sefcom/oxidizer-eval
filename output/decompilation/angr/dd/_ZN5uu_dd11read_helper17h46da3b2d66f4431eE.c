long long uu_dd::read_helper(void* a0, struct_0 *a1, void* a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x80]
    char v1;  // [bp-0x78], Other Possible Types: unsigned long
    char v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x40]
    int v8;  // [bp-0x38], Other Possible Types: char
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    char v12[107];  // r12
    int v13;  // xmm0
    unsigned long long v14;  // rax

    a2.resize(a3, 221);
    if (a1->field_8->field_68 == 1)
    {
        v4.fill_blocks(a1, a2, a1->field_8->field_69);
        v11 = v5;
        if ((v4 & 1))
            goto LABEL_491cd3;
LABEL_491c06:
        v3 = v7;
        memcpy(&v1, &v6, 16);
        v0 = v11;
        if (v11 || v1)
        {
            v12 = a1->field_8;
            if (a1->field_8->field_6a)
            {
                uu_dd::read_helper::perform_swab((long long)a2[8], (long long)a2[16]);
                v12 = a1->field_8;
            }
            if (v12[80] != 7)
            {
                v4.clone((long long)a2[8], (long long)a2[16]);
                uu_dd::blocks::conv_block_unblock_helper(&v8, &v4, &v12[80], &v0);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)a2), (long long)a2[8]);
                *((long long *)&a2[16]) = *((long long *)&v9);
                *(a2) = v8;
            }
        }
        v13 = *((int128_t *)&v0);
        *((int128_t *)&a0[24]) = *((int128_t *)&v2);
        a0[8] = v13;
        v14 = 0;
    }
    else
    {
        v4.fill_consecutive(a1, a2);
        v11 = v5;
        if (!(v4 & 1))
            goto LABEL_491c06;
LABEL_491cd3:
        *((unsigned long long *)&a0[8]) = v11;
        v14 = 1;
    }
    *((unsigned long long *)a0) = v14;
    return v14;
}
