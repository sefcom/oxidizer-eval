long long fish::re::regex_make_anchored(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    unsigned long v4;  // rdi
    unsigned long long v5;  // rdx

    v4 = a2 + 4;
    if (!((char)__CFADD__(a2, 4)) && !((char)__CFADD__(v4, 2)))
    {
        v0 = v4 + 2.with_capacity_in(4, 4, &g_14bd1e0);
        v1 = v5;
        v2 = 0;
        v0.spec_extend("^", "s");
        v0.spec_extend(a1, a1 + a2 * 4);
        v0.spec_extend(")", "CaseItemcontentsprintf.1switch.1key_moverealpath$");
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v0);
        return a0;
    }
    core::panicking::panic_const::panic_const_add_overflow(&g_14df978); /* do not return */
}
