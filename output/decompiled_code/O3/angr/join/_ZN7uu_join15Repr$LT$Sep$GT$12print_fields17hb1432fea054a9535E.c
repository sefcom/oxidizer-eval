long long uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long a3)
{
    struct_0 *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v2;  // rax
    unsigned long long v3;  // r15
    void* v4;  // rbp
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbx
    void* v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v0 = v2;
    v0 = a2;
    v3 = a2->field_10;
    if (!v3)
        return 0;
    v4 = 0;
    do
    {
        v5 = v4;
        v6 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v5);
        if (v5 != a3)
        {
            v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(a0 + 41), 1);
            if (v7)
                return v7;
            v8 = uu_join::Line::get_field::h7dd14bed39768627(v0, v5);
            if (!v8)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v8, v9);
            if (v7)
                return v7;
        }
    } while ((v4 = v6, v6 < v3));
}
