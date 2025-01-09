long long uu_touch::stat::haa73667d17037b3b(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    char v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    char v4;  // [bp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xc0]
    unsigned long long v9;  // rax
    unsigned int v10;  // ecx
    unsigned long long v11;  // rdx
    unsigned int v12;  // esi

    if (!a3)
    {
        std::fs::symlink_metadata::ha4686baccc39e49a(&v0, a1, a2);
        if (*((int *)&v0) == 2)
        {
            a0->field_8 = *((long long *)&v1);
            a0->field_0 = 1;
            return 1;
        }
    }
    else
    {
        std::fs::metadata::h73b841bac6708bdf(&v6, a1, a2);
        if (*((int *)&v6) != 2)
        {
            memcpy(&v0, &v6, 176);
        }
        else
        {
            uu_touch::stat::_$u7b$$u7b$closure$u7d$$u7d$::hfaffa2c55f8502ed(&v0, a1, a2, *((long long *)&v7));
            if (*((int *)&v0) == 2)
            {
                a0->field_8 = *((long long *)&v1);
                a0->field_0 = 1;
                return 1;
            }
        }
    }
    v10 = *((int *)&v3);
    v11 = *((long long *)&v4);
    v12 = *((int *)&v5);
    a0->field_8 = *((long long *)&v2);
    a0->field_10 = v10;
    a0->field_18 = v11;
    a0->field_20 = v12;
    v9 = 0;
    a0->field_0 = v9;
    return v9;
}
