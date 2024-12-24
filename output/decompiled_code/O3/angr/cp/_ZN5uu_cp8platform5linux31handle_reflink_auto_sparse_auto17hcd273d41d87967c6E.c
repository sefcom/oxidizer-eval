long long uu_cp::platform::linux::handle_reflink_auto_sparse_auto::hcd273d41d87967c6(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v6;  // rax
    unsigned long long v7;  // r14
    char v9;  // bpl
    void* v10;  // rax

    uu_cp::platform::linux::check_for_data::h17f7d7aeeaa4faf7(&v0, a1, a2);
    if (v1 == 2)
    {
        v6 = *((long long *)&v0);
        goto LABEL_513519;
    }
    else
    {
        v3 = *((long long *)&v0);
        v7 = *((long long *)&v2);
        uu_cp::platform::linux::check_sparse_detection::h5109adf38c95b724(&v0, a1, a2);
        if (!v0)
        {
            v9 = (&v0)[1];
            a0->field_1 = (v3 - 1 < 511) * 2;
            a0->field_2 = 4;
            a0->field_3 = v9 * 2 | 1;
            *((int *)&a0->field_4) = (!(char)uu_cp::platform::linux::check_dest_is_fifo::h402afade94083883(a3, a4) ? !v9 ^ 3 : 1);
            v10 = 0;
        }
        else
        {
            v6 = *((long long *)&v1);
LABEL_513519:
            a0->field_8 = v6;
            v10 = v6 | -0x100 | 1;
        }
    }
    a0->field_0 = 1;
    return v10;
}
