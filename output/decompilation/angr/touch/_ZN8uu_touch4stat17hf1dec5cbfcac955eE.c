long long uu_touch::stat(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    unsigned long v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    unsigned long v4;  // [bp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xc0]
    unsigned long long v9;  // rax
    unsigned int v10;  // ecx
    unsigned int v11;  // esi

    if (a3)
    {
        std::fs::metadata(&v6, a1, a2);
        if (*((int *)&v6) == 2)
        {
            uu_touch::stat::{{closure}}(&v0, a1, a2, *((long long *)&v7));
            if (*((int *)&v0) == 2)
                goto LABEL_5b644c;
        }
        else
        {
            memcpy(&v0, &v6, 176);
        }
LABEL_5b6472:
        v10 = *((int *)&v3);
        v11 = *((int *)&v5);
        a0->field_8 = v2;
        a0->field_10 = v10;
        a0->field_18 = v4;
        a0->field_20 = v11;
        v9 = 0;
    }
    else
    {
        std::fs::symlink_metadata(&v0, a1, a2);
        if (!(*((int *)&v0) == 2))
            goto LABEL_5b6472;
LABEL_5b644c:
        a0->field_8 = *((long long *)&v1);
        v9 = 1;
    }
    a0->field_0 = v9;
    return v9;
}
