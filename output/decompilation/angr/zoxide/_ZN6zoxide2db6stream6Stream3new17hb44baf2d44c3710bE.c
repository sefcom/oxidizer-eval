long long zoxide::db::stream::Stream::new(struct_3 *a0, struct_0 *a1, struct_1 *a2)
{
    unsigned long long v1;  // rax
    int v2;  // xmm1
    int v3;  // xmm2
    int v4;  // xmm3

    a1.sort_by_score(a2->field_40[1]);
    v1 = a1->field_10;
    a0->field_60 = a1;
    a0->field_68 = 0;
    a0->field_70 = v1;
    v2 = a2->field_10;
    v3 = a2->field_20;
    v4 = a2->field_30;
    a0->field_0 = a2->field_0;
    *((void*)&a0->field_10) = v2;
    *((void*)&a0->field_20) = v3;
    *((void*)&a0->field_30) = v4;
    *((unsigned long long [2])&a0->field_40) = a2->field_40;
    a0->field_50 = *((int128_t *)&a2->field_48);
    return v1;
}
