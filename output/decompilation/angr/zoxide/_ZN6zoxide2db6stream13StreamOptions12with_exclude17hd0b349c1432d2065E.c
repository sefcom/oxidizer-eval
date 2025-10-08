long long zoxide::db::stream::StreamOptions::with_exclude(struct_2 *a0, struct_0 *a1, struct_1 *a2)
{
    int v1;  // xmm0
    int v2;  // xmm1
    int v3;  // xmm2
    unsigned long long v4;  // rax

    a1->field_10[8].drop_in_place<alloc::vec::Vec<glob::Pattern>>();
    a1->field_18[0] = a2->field_10;
    *((uint128_t *)&a1->field_10[8]) = a2->field_0;
    v1 = a1->field_0;
    v2 = *((int128_t *)&a1->field_18[1]);
    v3 = *((int128_t *)&a1->field_28);
    a0->field_50 = a1->field_30;
    *((void*)&a0->field_40) = v3;
    *((void*)&a0->field_30) = v2;
    *((void*)&a0->field_0) = v1;
    a0->field_20 = *((long long *)&a1->field_10[16]);
    v4 = a1->field_18[0];
    a0->field_28 = v4;
    a0->field_10 = *((int128_t *)&a1->field_10[0]);
    return v4;
}
