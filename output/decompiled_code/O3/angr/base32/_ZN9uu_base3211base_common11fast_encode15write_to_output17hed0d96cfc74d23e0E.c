long long uu_base32::base_common::fast_encode::write_to_output::hed0d96cfc74d23e0(unsigned long long *a0, void* a1, unsigned long long a2, struct_0 *a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    void* **v3;  // rcx
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a3->field_38;
    if (*(a0) == 0x8000000000000000)
    {
        v4 = uu_base32::base_common::fast_encode::write_without_line_breaks::haa0e948583c0f85b(a1, a2, v3, a4);
        if (!v4)
            return 0;
        return v4;
    }
    else
    {
        v4 = uu_base32::base_common::fast_encode::write_with_line_breaks::hbe8b558126122e65(a0, a1, a2, v3, a4);
        if (!v4)
            return 0;
        return v4;
    }
}
