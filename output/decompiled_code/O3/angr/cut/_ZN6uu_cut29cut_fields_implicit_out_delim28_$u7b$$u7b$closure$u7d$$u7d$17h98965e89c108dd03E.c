long long uu_cut::cut_fields_implicit_out_delim::_$u7b$$u7b$closure$u7d$$u7d$::h98965e89c108dd03(struct_3 *a0, struct_6 *a1, char *a2, unsigned long long a3)
{
    char v0;  // [bp-0x98]
    struct_2 *v3;  // [sp-0x78]
    unsigned long long v14;  // rcx
    struct_3 *v15;  // rax
    struct_2 *v21;  // rbx

    _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v0, a1->field_0, a2, a3);
    if (!*((long long *)&v0))
    {
        v15 = a1->field_8;
        if (v15->field_0)
        {
LABEL_48df48:
            *((short *)&a0->field_0) = 0x100;
            return v15;
        }
        v21 = a1->field_10;
        v15 = v21->field_8->field_38(v21->field_0, a2, a3);
        if (!v15)
        {
            v15 = a1->field_18->field_0;
            if (!(a2[1 + a3] != v0) || !((v0 = (char)v15, v15 = (unsigned long long)v21->field_8->field_38(v21->field_0, &v0, 1), v15)))
                goto LABEL_48df48;
        }
        a0->field_8 = v15;
        a0->field_0 = 1;
        return v15;
    }
    v3 = a1->field_10;
    v14 = a1->field_20->field_8;
    if (!v14)
        goto LABEL_0x48e022;
    else
        goto LABEL_0x48dc98;
}
