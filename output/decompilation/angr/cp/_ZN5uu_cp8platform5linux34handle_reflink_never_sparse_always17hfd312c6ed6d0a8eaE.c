char uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v6;  // rax
    unsigned long long v7;  // r14
    char v8;  // bpl

    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&v0, a1, a2);
    if (v1 == 2)
    {
        v6 = *((long long *)&v0);
        goto LABEL_514109;
    }
    else
    {
        v3 = *((long long *)&v0);
        v7 = *((long long *)&v2);
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&v0, a1, a2);
        if (!v0)
        {
            v8 = (&v0)[1];
            a0->field_1 = 3;
            a0->field_2 = 1;
            a0->field_3 = v8 * 2 + 2;
            a0->field_4 = (char)uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(a3, a4) | !v7;
        }
        else
        {
            v6 = *((long long *)&v1);
LABEL_514109:
            a0->field_8 = v6;
        }
    }
    a0->field_0 = 1;
    return 1;
}
