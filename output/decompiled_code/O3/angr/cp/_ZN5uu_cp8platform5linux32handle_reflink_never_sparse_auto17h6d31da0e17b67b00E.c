long long uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [sp-0x38]
    char v4;  // r14b
    unsigned long long v5;  // rax
    char v6;  // bpl
    unsigned long long v7;  // rax
    char v8;  // r12b

    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&v0, a1, a2);
    v4 = v1;
    if (v4 == 2)
    {
        v5 = *((long long *)&v0);
        goto LABEL_513ff9;
    }
    else
    {
        v2 = *((long long *)&v0);
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&v0, a1, a2);
        if (!v0)
        {
            v6 = (&v0)[1];
            if (!(v4 || v2 < 0x200))
            {
                v8 = 0;
            }
            else if (!v6)
            {
                v8 = a2 | -0x100 | 3;
            }
            else
            {
                v8 = a2 | -0x100 | 3;
            }
            a0->field_1 = v8;
            a0->field_2 = 1;
            a0->field_3 = v6 * 2 | 1;
            *((int *)&a0->field_4) = (!(char)uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(a3, a4) ? !v6 ^ 3 : 1);
            v7 = 0;
        }
        else
        {
            v5 = *((long long *)&v1);
LABEL_513ff9:
            a0->field_8 = v5;
            v7 = v5 | -0x100 | 1;
        }
    }
    a0->field_0 = 1;
    return v7;
}
