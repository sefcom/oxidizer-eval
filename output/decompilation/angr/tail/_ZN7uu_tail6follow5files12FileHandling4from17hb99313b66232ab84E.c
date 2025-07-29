long long uu_tail::follow::files::FileHandling::from(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    char v4;  // al

    v0.try_with(core::ops::function::FnOnce::call_once);
    v2 = v0.expect();
    a0->padding_8[16].with_capacity_and_hasher(a1->field_28, v2, v3);
    v4 = a1->field_4a;
    a0->field_0 = 0x8000000000000000;
    a0->field_48 = v4;
    a0->field_49 = 0;
    return a0;
}
