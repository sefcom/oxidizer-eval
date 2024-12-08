long long uu_join::Line::get_field::h39d63660a434080d(struct_0 *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long *v3;  // rsi
    unsigned long long *v4;  // rcx

    if (a0->field_10 > a1)
    {
        v0 = v2;
        v3 = a1 * 16;
        v4 = a0->field_8;
        return ::0x4c1550::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3e3457889b5bb365(*((long long *)(v4 + v3)), *((long long *)(v4 + v3 + 8)), a0->field_20, a0->field_28);
    }
    return 0;
}
