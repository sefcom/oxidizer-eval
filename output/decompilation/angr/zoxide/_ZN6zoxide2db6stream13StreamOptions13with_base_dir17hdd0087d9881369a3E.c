long long zoxide::db::stream::StreamOptions::with_base_dir(struct_2 *a0, struct_0 *a1, struct_1 *a2)
{
    int v1;  // xmm0
    int v2;  // xmm1
    int v3;  // xmm2
    int v4;  // xmm3
    unsigned long long v5;  // rax

    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&a1->field_30);
    a1->field_40 = a2->field_10;
    v1 = a2->field_0;
    *((void*)&a1->field_30) = v1;
    v2 = a1->field_0;
    v3 = a1->field_10;
    v4 = a1->field_20;
    a0->field_50 = a1->field_50;
    *((void*)&a0->field_30) = v1;
    *((void*)&a0->field_20) = v4;
    *((void*)&a0->field_10) = v3;
    *((void*)&a0->field_0) = v2;
    a0->field_40 = a1->field_40;
    v5 = a1->field_48;
    a0->field_48 = v5;
    return v5;
}
