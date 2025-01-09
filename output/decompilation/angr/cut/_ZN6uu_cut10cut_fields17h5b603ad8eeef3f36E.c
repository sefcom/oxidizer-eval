long long uu_cut::cut_fields::h5b603ad8eeef3f36(unsigned long long a0, unsigned int a1, unsigned int a2, struct_0 *a3)
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
    unsigned long long v10;  // r10
    unsigned long v11;  // rdx
    unsigned long long v13;  // rax

    v6 = a3->field_20;
    if (v6 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_528e10); /* do not return */
    v7 = a3->field_28;
    v8 = a3->field_10;
    if (!v8)
    {
        v9 = a3->field_0;
        v10 = (v9 ? 1 : a3->field_8);
        if (!v9)
            v9 = "\t";
        v1 = v10;
        v0 = v9;
        v13 = uu_cut::cut_fields_explicit_out_delim::h0a90ca972983d44e(a0, &v2, a1, a2, v6, v7);
    }
    else
    {
        v3 = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(v8, a3->field_18);
        v4 = v11;
        if (!v0)
        {
            v13 = uu_cut::cut_fields_implicit_out_delim::hc1fc3b9aa7195642(a0, &v3, a1, a2, v6, v7);
            return v13;
        }
        v1 = a3->field_8;
        v0 = a3->field_0;
        v13 = uu_cut::cut_fields_explicit_out_delim::hf1ac07e2d7452ebc(a0, &v3, a1, a2, v6, v7);
    }
    return v13;
}
