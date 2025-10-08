long long uu_touch::stat(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x110]
    char v3;  // [bp-0x108]
    unsigned long v4;  // [bp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xc0]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned int v11;  // esi

    if (a3)
    {
        std::fs::metadata(&v6, a1, a2);
        if (*((int *)&v6) == 2)
        {
            uu_touch::stat::{{closure}}(&v0, a1, a2, *((long long *)&v7));
            if (*((int *)&v0) != 2)
                goto LABEL_53aa44;
        }
        else
        {
            memcpy(&v0, &v6, 176);
            if (*((int *)&v0) != 2)
                goto LABEL_53aa44;
        }
LABEL_53aa1c:
        v9 = *((long long *)&v1);
        v10 = 1;
    }
    else
    {
        std::fs::symlink_metadata(&v0, a1, a2);
        if (*((int *)&v0) == 2)
            goto LABEL_53aa1c;
LABEL_53aa44:
        v9 = v2;
        v11 = *((int *)&v5);
        a0->field_10 = *((int *)&v3);
        a0->field_18 = v4;
        a0->field_20 = v11;
        v10 = 0;
    }
    a0->field_8 = v9;
    a0->field_0 = v10;
    return v9;
}
