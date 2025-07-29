long long uu_sort::FieldSelector::new(struct_1 *a0, int a1[17], struct_0 *a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0x28]
    int v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    unsigned int v6;  // edi
    char v7;  // dil
    char v8;  // r8b
    int v9;  // xmm0

    if (!(long long)a1[8])
    {
        uucore::mods::locale::get_message(a0, "sort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.", 34);
        a0->field_37 = 2;
        return a0;
    }
    v5 = a3 >> 40;
    v6 = v5;
    if ((long long)a1[0] == 1)
    {
        if (!(a2->field_10 == 2 & (long long)a1[8] == 1) || (v5 & 255) < 2 || (char)a1[16] == 1)
            v7 = v6 != 2;
        v8 = a2->field_10 != 2;
    }
    else
    {
        v7 = v6 != 2;
        v8 = 1;
    }
    v3 = (long long)a1[16];
    *((int128_t *)&v1) = (int128_t)a1[0];
    v0 = *((long long *)&a2->field_10);
    v9 = a2->field_0;
    a0->field_20 = v2;
    a0->field_28 = v3;
    *((void*)&a0->field_0) = v9;
    a0->field_10 = v0;
    a0->field_18 = (long long)v1;
    a0->field_34 = a3 >> 32;
    a0->field_30 = a3;
    a0->field_35 = v5;
    a0->field_36 = v8;
    a0->field_37 = v7;
    return a0;
}
