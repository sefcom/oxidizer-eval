long long fish::reader::get_autosuggestion_performer(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4)
{
    struct_1 *v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    int v4;  // [bp-0x48], Other Possible Types: char
    char v5;  // [bp-0x38]
    unsigned int v7;  // eax
    unsigned long v8;  // r13
    unsigned long long v9;  // rax

    v1 = a4;
    v7 = fish::reader::read_generation_count();
    v8 = a1 + 472;
    v2 = v8.snapshot();
    v3 = &g_14d6790;
    v4.get_pwd_slash(v8);
    a0->field_28 = v2;
    a0->field_30 = &g_14d6790;
    *((unsigned int *)&a0->field_48) = v7;
    a0->field_0 = v0->field_0;
    a0->field_10 = v0->field_10;
    a0->field_40 = a3;
    a0->field_38 = a4;
    *((void*)&(&a0->field_10)[1]) = v4;
    v9 = *((long long *)&v5);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v9;
    return v9;
}
