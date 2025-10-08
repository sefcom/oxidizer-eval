long long fish::operation_context::get_bg_context(struct_0 *a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a2.new();
    a0->field_0 = 1;
    a0->field_8 = a1;
    a0->field_10 = &g_14da060;
    a0->field_30 = 0x200;
    a0->field_38 = 0;
    a0->field_20 = v3;
    a0->field_28 = &g_14dc080;
    return a0;
}
