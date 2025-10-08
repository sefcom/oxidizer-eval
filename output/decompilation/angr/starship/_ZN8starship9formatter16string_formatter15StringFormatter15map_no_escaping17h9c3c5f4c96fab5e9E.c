long long starship::formatter::string_formatter::StringFormatter::map_no_escaping(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]
    unsigned long long v7;  // rax
    int v8;  // xmm0
    int v9;  // xmm1
    int v10;  // xmm2

    v0 = a2;
    v1 = a3;
    v4.into_par_iter((char *)&a1->field_10 + 8);
    v3 = *((long long *)&v5);
    memcpy(&v2, &v4, 16);
    v2.for_each(&v0);
    v7 = a1->field_40;
    a0->field_40 = v7;
    v8 = a1->field_0;
    v9 = a1->field_10;
    v10 = a1->field_20;
    a0->field_30 = a1->field_30;
    *((void*)&a0->field_20) = v10;
    *((void*)&a0->field_10) = v9;
    *((void*)&a0->field_0) = v8;
    return v7;
}
