long long just::evaluator::Evaluator::evaluate_condition(struct_1 *a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x188]
    char v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x168]
    char v4;  // [bp-0x160]
    char v5;  // [bp-0x15f]
    char v6;  // [bp-0x158]
    char v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    int v9;  // [bp-0x140]
    int v10;  // [bp-0x130]
    int v11;  // [bp-0x120]
    int v12;  // [bp-0x110]
    char v13;  // [bp-0x100]
    int v14;  // [bp-0xd8]
    char v15;  // [bp-0xc9]
    unsigned long v17;  // rax

    v4.evaluate_expression(a1, a2->field_0);
    v17 = v4;
    if ((char)v17 != 56)
    {
        memcpy(&v15, &v7, 16);
        *((int128_t *)&v14) = *((int128_t *)&v5);
        *((long long *)&a0->field_50) = *((long long *)&v13);
        *((void*)&a0->field_40) = v12;
        *((void*)&a0->field_30) = v11;
        *((void*)&a0->field_20) = v10;
        *((void*)&a0->field_10) = v9;
        *((int128_t *)&a0->field_1[15]) = *((int128_t *)&v15);
        *((int128_t *)&a0->field_1[0]) = (int128_t)v14;
        a0->field_0 = v17;
        return v17;
    }
    memcpy(&v0, &v6, 16);
    v1 = v8;
    v4.evaluate_expression(a1, a2->field_8);
    if (v4 != 56)
    {
        memcpy(&v15, &v7, 16);
        *((int128_t *)&v14) = *((int128_t *)&v5);
        *((long long *)&a0->field_50) = *((long long *)&v13);
        *((void*)&a0->field_40) = v12;
        *((void*)&a0->field_30) = v11;
        *((void*)&a0->field_20) = v10;
        *((void*)&a0->field_10) = v9;
        *((int128_t *)&a0->field_1[15]) = *((int128_t *)&v15);
        *((int128_t *)&a0->field_1[0]) = (int128_t)v14;
        a0->field_0 = v4;
        return core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    memcpy(&v2, &v6, 16);
    v3 = v8;
    goto (long long)(g_46a7a4[a2->field_10] + (char *)&g_46a7a4[0]);
}
