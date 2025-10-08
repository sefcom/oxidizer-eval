void fish::parse_util::IndentVisitor::new(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned int v2;  // r8d
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep
    unsigned long long v7;  // rax

    v2 = a4 - 1;
    if ((char)_ccall(0, 27, (unsigned long long)(a4 - 1), 0, _ccall(v3, v4, v5, v6)))
    {
        v0 = v7;
        core::panicking::panic_const::panic_const_sub_overflow(&g_14ddbd0); /* do not return */
    }
    a0->field_30 = 0;
    a0->field_40 = 0;
    a0->field_48 = v2;
    a0->field_50 = 0;
    a0->field_18 = a1;
    a0->field_20 = a2;
    a0->field_28 = a3;
    a0->field_4c = v2;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    return;
}
