long long uu_more::Pager::reset_multi_file_header(struct_0 *a0)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned short v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r14
    unsigned long long v10;  // rax
    unsigned long v11;  // cc_ndep

    v5 = v7;
    v4 = v8;
    v9 = a0->field_90;
    v2.into_searcher();
    v0 = 0;
    v1 = 36;
    v3 = 0;
    v10 = v0.fold();
    *((int *)&a0->field_90) = ((char)amd64g_calculate_condition(3, 4, v10, v9, v11) ? v10 + v9 : 18446744073709551615);
    return v10 + v9;
}
