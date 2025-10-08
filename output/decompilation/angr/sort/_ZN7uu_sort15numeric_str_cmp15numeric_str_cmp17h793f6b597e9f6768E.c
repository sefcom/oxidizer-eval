char uu_sort::numeric_str_cmp::numeric_str_cmp(struct_3 *a0, struct_1 *a1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long v5;  // r15
    unsigned long v6;  // rdx
    unsigned int v7;  // ebp
    unsigned int v8;  // eax
    char v11;  // al

    v5 = a0->field_10->field_8;
    v6 = a1->field_10->field_8;
    if ((char)v5 != (char)v6)
        return (v6 < v5) - (v5 < v6);
    if (!a1->field_8 || !a0->field_8 || a0->field_10->field_0 == a1->field_10->field_0)
    {
        v0 = a0->field_0;
        v1 = a0->field_8 + a0->field_0;
        v2 = a1->field_0;
        v3 = a1->field_8 + a1->field_0;
        do
        {
            v7 = v0.try_fold();
            v8 = v2.try_fold();
            if (v7 == 0x110000)
            {
                switch (v8)
                {
                case 48:
                    if (!v2.try_fold().eq())
                        goto LABEL_4cf8ff;
                    else
                        goto LABEL_4cf8c8;
                case 1114112:
LABEL_4cf8c8:
                    break;
                default:
LABEL_4cf8ff:
                    break;
                }
            }
            else if (v8 == 0x110000 && v7 == 48)
            {
                v0.try_fold().eq();
                goto LABEL_4cf901;
            }
        } while (v7 == v8);
    }
LABEL_4cf901:
    if (!v5)
        return v11;
    return v11;
}
