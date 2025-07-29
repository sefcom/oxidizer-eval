long long uu_cp::platform::linux::handle_reflink_auto_sparse_never(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3f]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    char v5;  // al
    unsigned long long v6;  // rax
    char v7;  // al

    uu_cp::platform::linux::check_for_data(&v0, a1, a2);
    if (v2 == 2)
    {
        v4 = *((long long *)&v0);
        goto LABEL_4ec712;
    }
    else
    {
        uu_cp::platform::linux::check_sparse_detection(&v0, a1, a2);
        if (v0)
        {
            v4 = *((long long *)&v2);
LABEL_4ec712:
            a0->field_8 = v4;
            v5 = 1;
            v6 = v4 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v7 = v1;
            *((int *)&a0->field_1) = (0x200 <= *((long long *)&v0) ? ((v2 & 1)) * 3 : 3);
            a0->field_2 = 1;
            a0->field_3 = v7 * 2 + 1;
            v6 = 0;
        }
    }
    a0->field_0 = v5;
    return v6;
}
