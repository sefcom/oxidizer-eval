long long zoxide::db::stream::StreamOptions::with_keywords(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rdx
    int v5;  // xmm0
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    int v8;  // xmm1

    v0.collect(a2.map(a3).map(v3), a2);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a1);
    a1->field_10 = *((long long *)&v1);
    *((void*)&a1->field_0) = v0;
    a0->field_50 = a1->field_50;
    a0->field_40 = a1->field_40;
    v5 = a1->field_0;
    v6 = a1->field_10;
    v7 = a1->field_18;
    v8 = a1->field_20;
    a0->field_30 = a1->field_30;
    *((void*)&a0->field_20) = v8;
    a0->field_10 = v6;
    a0->field_18 = v7;
    *((void*)&a0->field_0) = v5;
    return v6;
}
