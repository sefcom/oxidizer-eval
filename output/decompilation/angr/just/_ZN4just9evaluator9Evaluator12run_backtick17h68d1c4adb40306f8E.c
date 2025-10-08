long long just::evaluator::Evaluator::run_backtick(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x70]
    char v3;  // [bp-0x67]
    int v4;  // [bp-0x60]
    int v5;  // [bp-0x50]
    int v6;  // [bp-0x40]
    int v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    int v11;  // xmm0
    int v12;  // xmm1
    int v13;  // xmm2
    char v14;  // al
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v0.run_command(a1, a2, a3, 8, 0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0->field_21 = *((int128_t *)&v1);
        v9 = a4->field_40;
        v11 = a4->field_0;
        v12 = a4->field_10;
        v13 = a4->field_20;
        *((uint128_t *)&v7) = a4->field_30;
        v6 = v13;
        v5 = v12;
        v4 = v11;
        a0->field_18 = v8;
        *((unsigned long *)&a0->padding_20) = v9;
        *((int128_t *)&a0->field_11) = (int128_t)(&v6)[9];
        *((int128_t *)&a0->field_8[9]) = (int128_t)(&v5)[9];
        *((int128_t *)&a0->field_1[16]) = (int128_t)(&v4)[9];
        *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v3);
        v14 = 3;
        v15 = v9 & 0xffffffffffffff00 | 3;
    }
    else
    {
        v16 = *((long long *)&v2);
        *((unsigned long long *)&a0->field_8[0]) = v16;
        *((int128_t *)&a0->field_1[7]) = *((int128_t *)&v0);
        v14 = 56;
        v15 = v16 & 0xffffffffffffff00 | 56;
    }
    a0->field_0 = v14;
    return v15;
}
