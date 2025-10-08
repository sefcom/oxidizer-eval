long long starship::formatter::string_formatter::StringFormatter::map(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax
    int v7;  // xmm0
    int v8;  // xmm1
    int v9;  // xmm2

    v0 = a2;
    v3.into_par_iter((char *)&a1->field_10 + 8);
    v2 = *((long long *)&v4);
    memcpy(&v1, &v3, 16);
    v1.for_each(&v0);
    v6 = a1->field_40;
    a0->field_40 = v6;
    v7 = a1->field_0;
    v8 = a1->field_10;
    v9 = a1->field_20;
    a0->field_30 = a1->field_30;
    *((void*)&a0->field_20) = v9;
    *((void*)&a0->field_10) = v8;
    *((void*)&a0->field_0) = v7;
    return v6;
}
