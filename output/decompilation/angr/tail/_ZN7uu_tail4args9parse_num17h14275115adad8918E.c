void uu_tail::args::parse_num(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    int v2;  // [bp-0x38], Other Possible Types: char
    char v3;  // [bp-0x28]
    unsigned long long v5;  // r15
    unsigned long long v6;  // rdx
    char v7;  // bpl
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax

    v5 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v5;
    v1 = v6 + v5;
    if (!(int)::0x4eeee0::core::str::validations::next_code_point(&v0))
        goto LABEL_4f13cb;
    switch ((unsigned int)v6)
    {
    case 43:
        v5 = v5.get(v6);
        if (!v5)
            core::str::slice_error_fail(v5, v6, 1, v6, &g_6362f8); /* do not return */
        v7 = 1;
        break;
    case 45:
        v5 = v5.get(v6);
        if (!v5)
            core::str::slice_error_fail(v5, v6, 1, v6, &g_6362f8); /* do not return */
        break;
    default:
LABEL_4f13cb:
        goto LABEL_4f13ec;
    }
LABEL_4f13ec:
    uucore::features::parser::parse_size::parse_size_u64(&v0, v5, v8);
    if ((int)v0 == 4)
    {
        if (v1)
        {
            if (v7)
            {
                *((unsigned long long *)&a0->field_8) = 1;
                *((unsigned long long *)&a0->padding_9[7]) = v1;
            }
            else
            {
                *((unsigned long long *)&a0->field_8) = 0;
                *((unsigned long long *)&a0->padding_9[7]) = v1;
            }
        }
        else
        {
            if (v7)
                *((unsigned long long *)&a0->field_8) = 2;
            else
                *((unsigned long long *)&a0->field_8) = 3;
        }
        v9 = 4;
    }
    else
    {
        v2.to_vec(v5, v8);
        a0->field_18 = *((long long *)&v3);
        *((void*)&a0->field_8) = v2;
        v9 = 1;
    }
    a0->field_0 = v9;
    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v0);
    return;
}
