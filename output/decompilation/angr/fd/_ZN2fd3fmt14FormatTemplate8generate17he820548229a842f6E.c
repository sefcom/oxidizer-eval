long long fd::fmt::FormatTemplate::generate(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x70]
    void* v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    void* v3;  // [bp-0x58]
    unsigned long long v5;  // rax

    v0 = 1.as_ref(0);
    if (a1->field_0 == 1)
        return a0.to_vec(a1->field_10, a1->field_18);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if (!a1->field_18)
    {
        a0->field_10 = 0;
        a0->field_0 = 0;
        a0->field_8 = 1;
        return 1;
    }
    v5 = a1->field_10->field_0 ^ 0x8000000000000000;
    if (5 <= v5)
        v5 = 5;
    goto (long long)(g_474940[v5] + (char *)&g_474940[0]);
}
