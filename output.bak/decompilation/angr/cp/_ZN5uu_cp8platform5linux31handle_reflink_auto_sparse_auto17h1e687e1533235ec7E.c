long long uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v6;  // rax
    unsigned long long v7;  // r14
    char v9;  // bpl
    unsigned long long v10;  // rax

    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&v0, a1, a2);
    if (v1 == 2)
    {
        v6 = *((long long *)&v0);
        goto LABEL_513ed9;
    }
    else
    {
        v3 = *((long long *)&v0);
        v7 = *((long long *)&v2);
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&v0, a1, a2);
        if (!v0)
        {
            v9 = (&v0)[1];
            a0->field_1 = (v3 - 1 < 511) * 2;
            a0->field_2 = 4;
            a0->field_3 = v9 * 2 | 1;
            *((int *)&a0->field_4) = (!(char)uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(a3, a4) ? !v9 ^ 3 : 1);
            v10 = 0;
        }
        else
        {
            v6 = *((long long *)&v1);
LABEL_513ed9:
            a0->field_8 = v6;
            v10 = v6 | -0x100 | 1;
        }
    }
    a0->field_0 = 1;
    return v10;
}
