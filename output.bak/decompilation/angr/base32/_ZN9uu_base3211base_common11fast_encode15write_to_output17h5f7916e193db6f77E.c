long long uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(unsigned long long *a0, void* a1, unsigned long long a2, struct_0 *a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    void* **v3;  // rcx
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a3->field_38;
    if (*(a0) == 0x8000000000000000)
    {
        v4 = uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(a1, a2, v3, a4);
        if (!v4)
            return 0;
        return v4;
    }
    else
    {
        v4 = uu_base32::base_common::fast_encode::write_with_line_breaks::h03d07599502588da(a0, a1, a2, v3, a4);
        if (!v4)
            return 0;
        return v4;
    }
}
