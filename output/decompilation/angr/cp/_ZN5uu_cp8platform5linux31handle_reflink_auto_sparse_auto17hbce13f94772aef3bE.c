long long uu_cp::platform::linux::handle_reflink_auto_sparse_auto(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    char v6;  // al
    unsigned long long v7;  // rax
    char v8;  // r12b
    char v9;  // r13b
    char v10;  // bpl

    uu_cp::platform::linux::check_for_data(&v1, a1, a2);
    if (v2 == 2)
    {
        v5 = *((long long *)&v1);
        goto LABEL_4ec7c7;
    }
    else
    {
        v0 = *((long long *)&v3);
        uu_cp::platform::linux::check_sparse_detection(&v1, a1, a2);
        if (v1)
        {
LABEL_4ec7c7:
            a0->field_8 = v5;
            v6 = 1;
            v7 = v5 & 0xffffffffffffff00 | 1;
        }
        else
        {
            if ((v2 & 1))
            {
                if (*((long long *)&v1))
                {
                    v8 = 1;
                    v9 = 2;
                    if (!(!(&v1)[1]))
                        goto LABEL_4ec851;
                    v10 = 2;
                    goto LABEL_4ec80e;
                }
                v9 = 4;
                if ((&v1)[1])
                {
LABEL_4ec851:
                    v10 = 3;
                    v8 = 3;
                    if (!v0)
                    {
                        v9 = 4;
                        v10 = 1;
                    }
                }
                else
                {
                    v8 = 1;
                    v10 = 2;
LABEL_4ec80e:
                }
            }
            else
            {
                v9 = (*((long long *)&v1) - 1 < 511) * 2;
                goto LABEL_4ec80e;
            }
            if ((char)uu_cp::platform::linux::check_dest_is_fifo(a3, a4))
                v10 = 1;
            a0->field_1 = v9;
            a0->field_2 = 4;
            a0->field_3 = v8;
            a0->field_4 = v10;
            v7 = 0;
        }
    }
    a0->field_0 = v6;
    return v7;
}
