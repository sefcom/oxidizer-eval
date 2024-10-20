long long uu_touch::stat::hdc2acdb09f226761(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0xf0]
    unsigned long long v1;  // [sp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r12
    unsigned int v11;  // eax
    unsigned long long v12;  // r14
    unsigned long long v13;  // rbp
    unsigned int v14;  // r13d
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // rax

    v9 = a1;
    if (!a3)
    {
        v11 = std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v2, v9, a2);
        v12 = *((long long *)&v2);
        if (v12 != 2)
        {
            v13 = *((long long *)&v4);
            v14 = *((long long *)&v5);
            v10 = *((long long *)&v6);
            v11 = *((long long *)&v7);
        }
        v16 = *((long long *)&v3);
        if ((unsigned int)v12 == 2)
        {
            a0->field_8 = v16;
            a0->field_0 = 1;
            return 1;
        }
    }
    else
    {
        v10 = a1;
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v2, v9, a2);
        if (*((int *)&v2) != 2)
        {
            v13 = *((long long *)&v4);
            v14 = *((long long *)&v5);
            v10 = *((long long *)&v6);
            v11 = *((long long *)&v7);
            a0->field_8 = v13;
            a0->field_10 = v14;
            a0->field_18 = v10;
            a0->field_20 = v11;
            a0->field_0 = 0;
            return 0;
        }
        v0 = *((long long *)&v3);
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v2, v10, a2);
        v15 = *((long long *)&v2);
        if (v15 != 2)
        {
            v13 = *((long long *)&v4);
            v14 = *((long long *)&v5);
            v10 = *((long long *)&v6);
            v1 = *((long long *)&v7);
        }
        v16 = *((long long *)&v3);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf199d454813e5c2(v0);
        v11 = v1;
        if ((unsigned int)v15 == 2)
        {
            a0->field_8 = v16;
            a0->field_0 = 1;
            return 1;
        }
    }
    a0->field_8 = v13;
    a0->field_10 = v14;
    a0->field_18 = v10;
    a0->field_20 = v11;
    v17 = 0;
    a0->field_0 = v17;
    return v17;
}
