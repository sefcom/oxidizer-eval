long long fish::builtins::printf::builtin_printf_state_t::fatal_error(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5[3];  // r12
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v0 = v2;
    v3 = a1.as_ref(a2);
    if (a0->field_38)
        return v3;
    v4 = v3;
    v5 = a0->field_30;
    if (a0->field_10)
    {
        v5[1].append(a0);
        a0->field_10 = 0;
    }
    v5[2].append(v4, v6);
    v7 = v4.ends_with(v6);
    if (!(char)v7)
        v7 = (unsigned long long)a0->field_30->field_10.push(10);
    a0->field_28 = 1;
    a0->field_2c = 1;
    a0->field_38 = 1;
    return v7;
}
