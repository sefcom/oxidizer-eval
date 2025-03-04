long long uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long a3)
{
    struct_0 *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v2;  // rax
    unsigned long long v3;  // r15
    void* v4;  // rbp
    unsigned long long v5;  // rbx
    void* v6;  // rax
    unsigned long long v7;  // rax

    v0 = v2;
    v0 = a2;
    v3 = a2->field_10;
    if (!v3)
        return 0;
    v4 = 0;
    do
    {
        v5 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v4);
        if (v4 != a3)
        {
            v6 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(a0 + 41), 1);
            if (v6)
                return v6;
            v7 = uu_join::Line::get_field::h7dd14bed39768627(v0, v4);
            if (!v7)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5325d8); /* do not return */
            v6 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v7, a2);
            if (v6)
                return v6;
        }
    } while ((v4 = v5, v4 < v3));
}
