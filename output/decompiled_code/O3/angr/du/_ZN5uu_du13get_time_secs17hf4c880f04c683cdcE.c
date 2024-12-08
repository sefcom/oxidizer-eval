double uu_du::get_time_secs::hf4c880f04c683cdc(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [sp-0x20]
    char v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // 4102
    int v7;  // ymm0
    unsigned long long v8;  // rcx
    int v9;  // xmm0
    int v10;  // ymm0
    int v11;  // ymm0

    if (!(char)a1)
    {
        v4 = a2[14];
    }
    else if ((unsigned int)a1 == 1)
    {
        v4 = a2[15];
    }
    else
    {
        v5 = a2[7];
        v6 = a2[6];
        v0 = 3;
        if (v6)
        {
            a0->field_8 = v5;
            a0->field_0 = 5;
            core::ptr::drop_in_place$LT$uu_du..DuError$GT$::h33f37ffbb0492728(&v0);
            return (unsigned long long)v11;
        }
        v8 = *((long long *)&v1);
        v9 = *((int128_t *)&v2);
        *((void*)&a0->field_10) = v9;
        a0->field_0 = v0;
        a0->field_8 = v8;
        return (unsigned long long)(v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9);
    }
    a0->field_8 = v4;
    a0->field_0 = 5;
    return (unsigned long long)v7;
}
