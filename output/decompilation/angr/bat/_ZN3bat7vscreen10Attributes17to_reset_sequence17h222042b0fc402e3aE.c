long long bat::vscreen::Attributes::to_reset_sequence(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x28]
    void* v1;  // [bp-0x18]
    unsigned long v3;  // rdx

    v0 = 17.with_capacity_in(1, 1, &g_acd180);
    v1 = 0;
    if (a1)
        v0.spec_extend(&g_5a2feb, &g_5a2ff2);
    a0->field_10 = 0;
    a0->field_0 = v0;
    a0->field_8 = v3;
    return v3;
}
