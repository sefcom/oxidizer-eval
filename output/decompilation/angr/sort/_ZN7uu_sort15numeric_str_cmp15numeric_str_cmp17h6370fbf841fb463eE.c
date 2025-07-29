long long uu_sort::numeric_str_cmp::numeric_str_cmp(struct_1 *a0, struct_1 *a1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    struct_0 *v5;  // rax
    unsigned long v6;  // r15
    unsigned long v7;  // rcx
    char v8;  // al
    unsigned int v9;  // ebp
    unsigned int v10;  // eax
    char v11;  // al
    unsigned long v12;  // rax

    v5 = a0->field_10;
    v6 = v5->field_8;
    v7 = a1->field_10->field_8;
    if ((char)v6 != (char)v7)
    {
        v12 = -((v6 & 255) < (v7 & 255));
        return v12 & 0xffffff00 | (char)v12 | 1;
    }
    if (a1->field_8 && a0->field_8 && v5->field_0 != a1->field_10->field_0)
    {
        v8 = -(v5->field_0 < a1->field_10->field_0);
    }
    else
    {
        v0 = a0->field_0;
        v1 = a0->field_8 + a0->field_0;
        v2 = a1->field_0;
        v3 = a1->field_8 + a1->field_0;
        do
        {
            v9 = v0.try_fold();
            v10 = v2.try_fold();
            if (v9 == 0x110000)
            {
                switch (v10)
                {
                case 48:
                    if (!v2.try_fold().eq())
                        goto LABEL_545f0b;
                    else
                        goto LABEL_545ed4;
                case 1114112:
LABEL_545ed4:
                    break;
                default:
LABEL_545f0b:
                    v11 = 255;
                    break;
                }
            }
            if (v10 == 0x110000)
            {
                if (v9 != 48)
                    return ((v6 & 255) ? 1 : 254);
                v11 = v0.try_fold().eq() ^ 1;
                return ((v6 & 255) ? v11 : -(v11));
            }
        } while (v9 == v10);
    }
    v11 = v8 | 1;
    return ((v6 & 255) ? v11 : -(v11));
}
