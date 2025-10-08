long long fish::builtins::shared::Arguments::new(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, struct_1 *a4, unsigned long long a5)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    int v1;  // [bp-0x68], Other Possible Types: char
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax

    if (a4->field_24 == 1)
    {
        fish::builtins::shared::Arguments::new::{{closure}}(&v3, a4->field_20, a5);
        v8 = *((long long *)&v3);
        memcpy(&v0, &v4, 16);
        memcpy(&v1, &v5, 16);
        v2 = *((long long *)&v6);
    }
    else
    {
        v8 = 0;
    }
    a0->field_18 = a1;
    a0->field_20 = a2;
    a0->field_28 = a3;
    *((char *)&a0->field_58) = 0;
    a0->field_0 = 0;
    a0->field_8 = 1;
    a0->field_10 = 0;
    a0->field_30 = v8;
    *((void*)&(&a0->field_30)[1]) = v0;
    *((void*)((char *)&a0->field_38 + 8)) = v1;
    *((unsigned long long *)((char *)&a0->field_48 + 8)) = v2;
    return a0;
}
