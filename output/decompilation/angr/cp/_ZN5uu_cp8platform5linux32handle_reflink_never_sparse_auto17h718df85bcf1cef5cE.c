long long uu_cp::platform::linux::handle_reflink_never_sparse_auto(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x4f]
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    char v6;  // bpl
    unsigned long long v7;  // rax
    char v8;  // al
    unsigned long long v9;  // rax
    char v10;  // r12b
    char v11;  // r12b
    char v12;  // bpl
    char v13;  // r13b

    uu_cp::platform::linux::check_for_data(&v0, a1, a2);
    v6 = v2;
    if (v6 == 2)
    {
        v7 = *((long long *)&v0);
        goto LABEL_49c2f6;
    }
    else
    {
        v4 = v3;
        uu_cp::platform::linux::check_sparse_detection(&v0, a1, a2);
        if (v0 == 1)
        {
LABEL_49c2f6:
            a0->field_8 = v7;
            v8 = 1;
            v9 = v7 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v10 = v1;
            if (((v6 ^ 1) & 0x200 <= *((long long *)&v0)))
            {
                v12 = v10 * 2 + 1;
                v11 = v10 | 2;
            }
            else if (v10)
            {
                v11 = ((v4 | ~(v6)) & 1) * 2 + 1;
                v12 = 3;
                v13 = 3;
            }
            else
            {
                v13 = 3;
                v11 = 2;
                v12 = 1;
            }
            if ((char)uu_cp::platform::linux::check_dest_is_fifo(a3, a4))
                v11 = 1;
            a0->field_1 = v13;
            a0->field_2 = 1;
            a0->field_3 = v12;
            a0->field_4 = v11;
            v9 = 0;
        }
    }
    a0->field_0 = v8;
    return v9;
}
