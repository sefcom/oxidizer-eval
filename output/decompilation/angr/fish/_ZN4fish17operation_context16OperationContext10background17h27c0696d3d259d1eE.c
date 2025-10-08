long long fish::operation_context::OperationContext::background(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v0 = 0;
    v3 = alloc::boxed::Box<T>::new();
    a0->field_0 = 1;
    a0->field_8 = a1;
    a0->field_10 = a2;
    a0->field_30 = a3;
    a0->field_38 = 0;
    a0->field_20 = v3;
    a0->field_28 = &g_14c8100;
    return a0;
}
