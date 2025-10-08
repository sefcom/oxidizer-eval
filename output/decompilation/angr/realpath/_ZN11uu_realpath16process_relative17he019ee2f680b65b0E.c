long long uu_realpath::process_relative(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a4;
    if (a2)
    {
        v0 = a2;
        if (!a1->field_0[1].starts_with(a1->field_8, a2, a3))
        {
            v4 = a1->field_8;
            a0->field_10 = v4;
            *((unsigned long long [2])&a0->field_0) = a1->field_0;
            return v4;
        }
        if (a4)
        {
            a4 = a4;
            if (v3)
                goto LABEL_462eb4;
LABEL_462eb3:
            a5 = a3;
        }
        else
        {
            a4 = v0;
            if (!v3)
                goto LABEL_462eb3;
LABEL_462eb4:
        }
    }
    else if (!a4)
    {
        v4 = a1->field_8;
        a0->field_10 = v4;
        *((unsigned long long [2])&a0->field_0) = a1->field_0;
        return v4;
    }
    return (unsigned long long)uucore::features::fs::make_path_relative_to(a0, a1, a4, a5);
}
