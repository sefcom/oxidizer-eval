long long uu_cut::cut_fields::hada848a764dd59fd(unsigned long long a0, unsigned int a1, unsigned int a2, struct_0 *a3)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    char v2;  // [bp-0x41]
    unsigned long v3;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x38]
    char v6;  // r13b
    unsigned int v7;  // ebp
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax

    v6 = a3->field_20;
    if (v6 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v7 = a3->field_28;
    v8 = a3->field_10;
    if (!v8)
    {
        v9 = a3->field_0;
        *((int *)&v1) = (v9 ? 1 : a3->field_8);
        v0 = v12;
        v14 = uu_cut::cut_fields_explicit_out_delim::h4fc436c06c43ad73(a0, &v2, a1, a2, -0x100 | v6, v7);
    }
    else
    {
        v3 = uu_cut::matcher::ExactMatcher::new::hb3b9cdb416bce97b(v8, a3->field_18);
        v4 = v10;
        if (!v0)
        {
            v14 = uu_cut::cut_fields_implicit_out_delim::h2626898bc3fecc0d(a0, &v3, a1, a2, -0x100 | v6, v7);
            return v14;
        }
        v1 = a3->field_8;
        v0 = a3->field_0;
        v14 = uu_cut::cut_fields_explicit_out_delim::h95ca6a1cbf4da690(a0, &v3, a1, a2, -0x100 | v6, v7);
    }
    return v14;
}
