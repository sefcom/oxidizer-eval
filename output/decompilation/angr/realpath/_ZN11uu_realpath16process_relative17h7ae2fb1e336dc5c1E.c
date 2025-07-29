long long uu_realpath::process_relative(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v3;  // r15
    char *v4;  // rsi
    unsigned long v5;  // rax

    v3 = a4;
    if (a2)
    {
        if (*((long long *)&a1->padding_1[7]).starts_with(a1->field_10, a2, a3))
        {
            v1 = a1->field_10;
            *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
            if (a4)
            {
                a4 = a4;
                if (!(!v3))
                    goto LABEL_4a0e47;
LABEL_4a0e46:
                a5 = a3;
            }
            else
            {
                a4 = a2;
                if (!v3)
                    goto LABEL_4a0e46;
LABEL_4a0e47:
            }
            v4 = &v0;
        }
        else
        {
            v5 = a1->field_10;
            a0->field_10 = v5;
            a0->field_0 = *((int128_t *)&a1->field_0);
            return v5;
        }
    }
    else
    {
        if (a4)
        {
            v1 = a1->field_10;
            *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
            v4 = &v0;
        }
        else
        {
            v5 = a1->field_10;
            a0->field_10 = v5;
            a0->field_0 = *((int128_t *)&a1->field_0);
            return v5;
        }
    }
    return uucore::features::fs::make_path_relative_to(a0, v4, a4, a5);
}
