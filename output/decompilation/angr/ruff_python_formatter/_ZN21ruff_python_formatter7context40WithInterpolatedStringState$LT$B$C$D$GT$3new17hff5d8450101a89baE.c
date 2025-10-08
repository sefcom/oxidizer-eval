void ruff_python_formatter::context::WithInterpolatedStringState<B,D>::new(struct_0 *a0, char a1, char a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    void* v3;  // rax
    unsigned short v4;  // cx

    v0 = v2;
    a3.deref_mut();
    v3 = (unsigned long long)a3.state_mut();
    v4 = (short)v3[42];
    *((char *)&v3[42]) = a1;
    *((char *)&v3[43]) = a2;
    a0->field_0 = a3;
    a0->field_8 = v4;
    return;
}
