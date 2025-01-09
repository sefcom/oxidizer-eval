long long uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v4;  // bpl
    unsigned long long v5;  // rax
    char v8;  // bpl
    unsigned long long v9;  // rax
    char v10;  // r14b
    char v11;  // r15b
    char v12;  // al

    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&v0, a1, a2);
    v4 = v1;
    if (v4 == 2)
    {
        v5 = *((long long *)&v0);
        goto LABEL_513ca2;
    }
    else
    {
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&v0, a1, a2);
        if (!v0)
        {
            v8 = (!v4 ? 2 : 2 - (*((long long *)&v2) < 1));
            if (v4)
                v10 = 3;
            else
                v10 = (-0x100 | *((long long *)&v0) < 0x200) * 3 & 4294967295 & 255 & 4294967295;
            v11 = (!(&v0)[1] ? 2 : 4 - (!v4));
            v12 = (!(char)uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(a3, a4) ? v8 : 1);
            a0->field_1 = v10;
            a0->field_2 = 4;
            a0->field_3 = v11;
            a0->field_4 = v12;
            v9 = 0;
        }
        else
        {
            v5 = *((long long *)&v1);
LABEL_513ca2:
            a0->field_8 = v5;
            v9 = v5 | -0x100 | 1;
        }
    }
    a0->field_0 = 1;
    return v9;
}
