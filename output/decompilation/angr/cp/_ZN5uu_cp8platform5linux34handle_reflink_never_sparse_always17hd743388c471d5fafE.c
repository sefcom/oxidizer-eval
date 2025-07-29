char uu_cp::platform::linux::handle_reflink_never_sparse_always(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x47]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // rax
    char v7;  // al
    char v8;  // r13b
    char v9;  // bpl
    char v10;  // r12b
    char v11;  // al

    uu_cp::platform::linux::check_for_data(&v1, a1, a2);
    if (v3 == 2)
    {
        v6 = *((long long *)&v1);
        goto LABEL_4ec9f4;
    }
    else
    {
        v0 = *((long long *)&v4);
        uu_cp::platform::linux::check_sparse_detection(&v1, a1, a2);
        if (v1)
        {
LABEL_4ec9f4:
            a0->field_8 = v6;
            v7 = 1;
        }
        else
        {
            if ((v3 & 1))
            {
                v8 = !v0;
                v9 = v2 * 2 + 2;
                v10 = 3;
            }
            else if (v2)
            {
                v9 = 3;
            }
            else
            {
                v9 = 2;
            }
            v11 = uu_cp::platform::linux::check_dest_is_fifo(a3, a4);
            a0->field_1 = v10;
            a0->field_2 = 1;
            a0->field_3 = v9;
            a0->field_4 = (v11 | v8) & 1;
        }
    }
    a0->field_0 = v7;
    return v7;
}
