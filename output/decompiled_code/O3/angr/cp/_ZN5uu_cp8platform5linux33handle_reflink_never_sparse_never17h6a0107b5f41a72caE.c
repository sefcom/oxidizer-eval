long long uu_cp::platform::linux::handle_reflink_never_sparse_never::h6a0107b5f41a72ca(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v3;  // bpl
    unsigned long long v4;  // rax
    char v6;  // al
    char v7;  // dl
    void* v8;  // rax

    uu_cp::platform::linux::check_for_data::h17f7d7aeeaa4faf7(&v0, a1, a2);
    v3 = v1;
    if (v3 == 2)
    {
        v4 = *((long long *)&v0);
        goto LABEL_5133c2;
    }
    else
    {
        uu_cp::platform::linux::check_sparse_detection::h5109adf38c95b724(&v0, a1, a2);
        if (!v0)
        {
            v6 = (&v0)[1];
            v7 = (!v3 ? (char)((-0x100 | *((long long *)&v0) < 0x200) * 3 & 4294967295 & 4294967295) : 3);
            a0->field_1 = v7;
            a0->field_2 = 1;
            a0->field_3 = v6 * 2 | 1;
            v8 = 0;
        }
        else
        {
            v4 = *((long long *)&v1);
LABEL_5133c2:
            a0->field_8 = v4;
            v8 = v4 | -0x100 | 1;
        }
    }
    a0->field_0 = 1;
    return v8;
}
