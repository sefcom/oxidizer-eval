long long uu_base32::base_common::fast_encode::write_without_line_breaks::h6fa0e036bb3780e0(struct_1 *a0, unsigned long long a1, struct struct_0 **a2, char a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    void* v3;  // rax

    v0 = v2;
    v3 = a2(a1, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(a0));
    if (v3)
        return v3;
    if (!a3)
    {
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h73fe8c7a0c90d99e(a0, 0);
        a0->field_10 = 0;
        return 0;
    }
    goto a2;
}
