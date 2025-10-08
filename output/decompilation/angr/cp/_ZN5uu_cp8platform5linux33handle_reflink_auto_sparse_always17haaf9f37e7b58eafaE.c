long long uu_cp::platform::linux::handle_reflink_auto_sparse_always(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x4f]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    char v6;  // r14b
    unsigned long long v7;  // rax
    char v8;  // al
    unsigned long long v9;  // rax
    char v10;  // r12b
    char v11;  // r14b

    uu_cp::platform::linux::check_for_data(&v1, a1, a2);
    v6 = v3;
    if (v6 == 2)
    {
        v7 = *((long long *)&v1);
        goto LABEL_49c024;
    }
    else
    {
        v0 = v4;
        uu_cp::platform::linux::check_sparse_detection(&v1, a1, a2);
        if (v1 == 1)
        {
LABEL_49c024:
            a0->field_8 = v7;
            v8 = 1;
            v9 = v7 & 0xffffffffffffff00 | 1;
        }
        else
        {
            if (!v2)
            {
                v11 = 2;
                v10 = 2 - (!v0 & v6);
            }
            else if ((v6 & 1))
            {
                v10 = 2 - (v0 < 1);
                v11 = 4;
            }
            else
            {
                v11 = 3;
                v10 = 2;
            }
            if ((char)uu_cp::platform::linux::check_dest_is_fifo(a3, a4))
                v10 = 1;
            *((int *)&a0->field_1) = (0x200 <= *((long long *)&v1) ? ((v6 & 1)) * 3 : 3);
            a0->field_2 = 4;
            a0->field_3 = v11;
            a0->field_4 = v10;
            v9 = 0;
        }
    }
    a0->field_0 = v8;
    return v9;
}
