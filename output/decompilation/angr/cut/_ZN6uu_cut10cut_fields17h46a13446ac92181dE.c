long long uu_cut::cut_fields::h46a13446ac92181d(unsigned int a0, unsigned int a1, unsigned int a2, struct_0 *a3)
{
    unsigned long v0;  // [sp-0x58]
    char v1;  // [bp-0x41]
    unsigned long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    char v5;  // r13b
    unsigned int v6;  // ebp
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx
    unsigned long long v11;  // r10
    unsigned long long v12;  // rax

    v5 = a3->field_20;
    if (v5 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_528e10); /* do not return */
    v6 = a3->field_28;
    if (!a3->field_10)
    {
        v8 = a3->field_0;
        if (!v8)
            v11 = 1;
        else
            v11 = *((long long *)&a3->field_8);
        v12 = uu_cut::cut_fields_explicit_out_delim::h498d740af7877aa6(a0, &v1, a1, a2, v5, v6, (v8 ? v8 : "\t"), v11);
    }
    else
    {
        v2 = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(a3->field_10, a3->field_18);
        v3 = v9;
        if (!v0)
        {
            v12 = uu_cut::cut_fields_implicit_out_delim::h3e4a03ff417ae94a(a0, &v2, a1, a2, v5, v6);
            return v12;
        }
        v0 = a3->field_0;
        v12 = uu_cut::cut_fields_explicit_out_delim::h5c816d4033f8d8fe(a0, &v2, a1, a2, v5, v6, v0, *((long long *)&a3->field_8));
    }
    return v12;
}
