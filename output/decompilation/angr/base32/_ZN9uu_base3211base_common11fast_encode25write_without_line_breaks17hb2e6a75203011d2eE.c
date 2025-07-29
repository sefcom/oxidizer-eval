long long uu_base32::base_common::fast_encode::write_without_line_breaks(struct_0 *a0, unsigned long long a1, struct_1 **a2, char a3, char a4)
{
    unsigned long long v1;  // rax

    v1 = a2(a1, a0.make_contiguous());
    if (v1)
    {
        return v1;
    }
    else if (a3)
    {
        if (a4)
            return 0;
        goto a2;
    }
    else
    {
        a0.truncate(0);
        a0->field_10 = 0;
        return 0;
    }
}
