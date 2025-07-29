long long uu_cp::platform::linux::handle_reflink_never_sparse_auto(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x4f]
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v6;  // rax
    char v7;  // al
    unsigned long long v8;  // rax
    char v9;  // r12b
    char v10;  // bpl
    char v11;  // r13b
    char v12;  // r12b

    uu_cp::platform::linux::check_for_data(&v0, a1, a2);
    if (v2 == 2)
    {
        v6 = *((long long *)&v0);
        goto LABEL_4ec8e6;
    }
    else
    {
        v4 = v3;
        uu_cp::platform::linux::check_sparse_detection(&v0, a1, a2);
        if (v0)
        {
LABEL_4ec8e6:
            a0->field_8 = v6;
            v7 = 1;
            v8 = v6 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v9 = v1;
            if (!((*((long long *)&v0) < 0x200 | v2) & 1))
            {
                v10 = v9 * 2 + 1;
                v12 = v9 | 2;
            }
            else if (v9)
            {
                v10 = 3;
                v11 = 3;
            }
            else
            {
                v11 = 3;
                v12 = 2;
                v10 = 1;
            }
            if ((char)uu_cp::platform::linux::check_dest_is_fifo(a3, a4))
                v12 = 1;
            a0->field_1 = v11;
            a0->field_2 = 1;
            a0->field_3 = v10;
            a0->field_4 = v12;
            v8 = 0;
        }
    }
    a0->field_0 = v7;
    return v8;
}
