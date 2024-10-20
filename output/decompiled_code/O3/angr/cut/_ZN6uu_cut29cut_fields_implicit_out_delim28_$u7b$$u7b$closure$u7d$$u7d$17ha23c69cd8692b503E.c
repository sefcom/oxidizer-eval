long long uu_cut::cut_fields_implicit_out_delim::_$u7b$$u7b$closure$u7d$$u7d$::ha23c69cd8692b503(struct_0 *a0, struct_6 *a1, char *a2, unsigned long long a3)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    struct_3 *v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    struct_4 *v13;  // rax
    unsigned long long v14;  // rcx
    struct_0 *v15;  // rax
    unsigned long long v18;  // r15
    void* v19;  // rbx
    void* v20;  // rsi
    struct_3 *v21;  // rbx

    _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v0, a1->field_0, a2, a3);
    if (*((long long *)&v0))
    {
        v3 = a1->field_10;
        v13 = a1->field_20;
        v14 = v13->field_8;
        if (!v14)
            goto LABEL_0x48e4c2;
        v4 = *((long long *)&v1);
        v9 = &v13->field_0[v14];
        v18 = -1;
        v19 = 0;
        v8 = *((long long *)&v2);
        v20 = 0;
    }
    v15 = a1->field_8;
    if (v15->field_0)
    {
LABEL_48e3e8:
        *((short *)&a0->field_0) = 0x100;
        return v15;
    }
    v21 = a1->field_10;
    v15 = v21->field_8->field_38(v21->field_0, a2, a3);
    if (v15)
    {
LABEL_48e40c:
        a0->field_8 = v15;
        a0->field_0 = 1;
        return v15;
    }
    if (a3 < 1)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v15 = a1->field_18->field_0;
    if (!(a2[1 + a3] != v0) || !((v0 = (char)v15, v15 = (unsigned long long)v21->field_8->field_38(v21->field_0, &v0, 1), v15)))
        goto LABEL_48e3e8;
    goto LABEL_48e40c;
}
