double ruff_python_formatter::context::WithIndentLevel<B,D>::new(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    struct_1 *v3;  // rax
    unsigned short v4;  // cx
    int v5;  // xmm0

    v0 = v2;
    a2->field_0[1].deref_mut();
    v3 = (unsigned long long)a2->field_0[1].state_mut();
    v4 = v3->field_28;
    v3->field_28 = a1;
    v5 = a2->field_0;
    *((void*)&a0->field_0) = v5;
    a0->field_10 = v4;
    return (unsigned long long)v5;
}
