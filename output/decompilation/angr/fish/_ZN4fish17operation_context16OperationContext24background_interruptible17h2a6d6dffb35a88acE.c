long long fish::operation_context::OperationContext::background_interruptible(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax

    v1 = alloc::boxed::Box<T>::new();
    a0->field_0 = 1;
    a0->field_8 = a1;
    a0->field_10 = a2;
    a0->field_30 = 0x200;
    a0->field_38 = 0;
    a0->field_20 = v1;
    a0->field_28 = &g_14dc038;
    return a0;
}
