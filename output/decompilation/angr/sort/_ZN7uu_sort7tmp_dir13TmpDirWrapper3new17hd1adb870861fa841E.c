long long uu_sort::tmp_dir::TmpDirWrapper::new(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    int v2;  // [bp-0x20]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax

    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v3 = 2;
    v5 = <alloc::sync::Arc<T> as core::default::Default>::default();
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v3);
    *((void*)&(&a0->field_10)[1]) = v2;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    a0->field_30 = 0;
    a0->field_28 = v5;
    return a0;
}
