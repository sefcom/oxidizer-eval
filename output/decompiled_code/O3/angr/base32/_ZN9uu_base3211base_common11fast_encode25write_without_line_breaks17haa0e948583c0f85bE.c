long long uu_base32::base_common::fast_encode::write_without_line_breaks::haa0e948583c0f85b(struct_0 *a0, unsigned long long a1, struct struct_1 **a2, char a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    void* v3;  // rax

    v0 = v2;
    v3 = a2(a1, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hd338e6cf207795fc(a0));
    if (v3)
        return v3;
    if (!a3)
    {
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h1c7d20b47a0ba08c(a0, 0);
        a0->field_10 = 0;
        return 0;
    }
    goto a2;
}
