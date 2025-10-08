long long fish::parser::Parser::context(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = alloc::boxed::Box<T>::new();
    a0->field_0 = 0;
    a0->field_8 = a1;
    a0->field_30 = 0x80000;
    a0->field_38 = 0;
    a0->field_20 = v3;
    a0->field_28 = &g_14dea30;
    return a0;
}
