long long uu_base32::base_common::fast_encode::write_without_line_breaks(struct_0 *a0, unsigned long long a1, struct_1 **a2, char a3, char a4)
{
    unsigned long long v1;  // rax

    v1 = a2(a1, a0.make_contiguous());
    if (v1)
        return v1;
    if (!a3)
    {
        a0.truncate();
        a0->field_10 = 0;
    }
    else if (!a4)
    {
        goto a2;
    }
    return 0;
}
