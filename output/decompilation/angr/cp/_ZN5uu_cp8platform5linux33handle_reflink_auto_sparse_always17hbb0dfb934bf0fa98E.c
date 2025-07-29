char uu_cp::platform::linux::handle_reflink_auto_sparse_always(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x57]
    char v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    char v5;  // r14b
    unsigned long long v6;  // rax
    char v7;  // al
    char v8;  // al
    char v9;  // r15b
    char v10;  // al

    uu_cp::platform::linux::check_for_data(&v0, a1, a2);
    v5 = v2;
    if (v5 == 2)
    {
        v6 = *((long long *)&v0);
        goto LABEL_4ec62e;
    }
    else
    {
        uu_cp::platform::linux::check_sparse_detection(&v0, a1, a2);
        if (v0)
        {
LABEL_4ec62e:
            a0->field_8 = v6;
            v7 = 1;
        }
        else
        {
            v8 = v5;
            v9 = (v1 ? (v8 & 1) + 3 : 2);
            v10 = uu_cp::platform::linux::check_dest_is_fifo(a3, a4);
            *((int *)&a0->field_1) = (!(v8 & 1) ? (*((long long *)&v0) < 0x200) * 3 : 3);
            a0->field_2 = 4;
            a0->field_3 = v9;
            a0->field_4 = 2 - (v10 | !v3 & v5);
        }
    }
    a0->field_0 = v7;
    return v7;
}
