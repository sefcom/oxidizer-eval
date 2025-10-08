long long uu_sort::tmp_dir::TmpDirWrapper::new(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v1 = 2;
    v3 = <alloc::sync::Arc<T> as core::default::Default>::default();
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_10)[1]) = v0;
    a0->field_0 = a1->field_0;
    a0->field_10 = a1->field_10;
    a0->field_30 = 0;
    a0->field_28 = v3;
    return a0;
}
